        subroutine OldF7701()
           implicit none

           integer*8 gval
           integer*8 garr(10)
           character*80 gstr
           character*16 gstrarr(5)
           common/ModGlobalComm/gval, garr, gstr, gstrarr

           integer*8 ii

           write (*, *) gval
           write (*, *) garr
           write (*, *) gstr
           write (*, *) gstrarr

           gval = -gval
           do ii = 10, 1, -1
              garr(ii) = -garr(ii)
           end do

        end

