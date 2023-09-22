#include <cassert>
#include "MPIDataType.hpp"

struct Foo
{
    int a0{ 0 };
    char a1{ 0 };
    double a2{ 0 };
};

struct Bar
{
    int a0{ 0 };
    char a1{ 0 };
private:
    double a2{ 0 };
};
DECLARE_TYPE(Bar, a0, a1, a2) // declare non-aggregate type for MPI.

int main(int argc, char* argv[])
{
    using namespace EasyLib;

    int np = 0, myid = 0;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &np);
    MPI_Comm_rank(MPI_COMM_WORLD, &myid);

    // assume there are tow processes
    if (np != 2)return -1;

    // 1. test aggregate type

    MPI::register_type<Foo>();

    Foo foo;
    if (myid == 0) {
        foo = Foo{ 1,'2',3 };
        MPI_Send(&foo, 1, MPI::Data<Foo>::type(), 1, 0, MPI_COMM_WORLD);
    }
    else {
        MPI_Recv(&foo, 1, MPI::Data<Foo>::type(), 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        assert(foo.a0 == 1 && foo.a1 == '2' && foo.a2 == 3);
    }

    // 2. test non-aggregate type

    MPI::register_type<Bar>(); // register type firstly.

    Bar bar;
    if (myid == 0) {
        bar.a0 = 1; bar.a1 = '2';
        member_of<Bar, 2>(bar) = 3;
        MPI_Send(&bar, 1, MPI::Data<Bar>::type(), 1, 0, MPI_COMM_WORLD);
    }
    else {
        MPI_Recv(&bar, 1, MPI::Data<Bar>::type(), 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        assert((bar.a0 == 1 && bar.a1 == '2' && member_of<Bar, 2>(bar) == 3));
    }

    // leave MPI
    MPI_Finalize();

    return 0;
}
