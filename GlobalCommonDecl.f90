module ModGlobal
    implicit none
    integer*8 gval
    integer*8 garr(10)
    character*80 gstr
    character*16 gstrarr(5)
    common /ModGlobalComm/ gval, garr, gstr, gstrarr
end module