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

           if (gval .GT. 0) then
            gstr = "hello"
            do ii = 5, 1, -1
               gstrarr(ii) = "hello"
            end do
           else
            gstr = "world"
            do ii = 5, 1, -1
               gstrarr(ii) = "world"
            end do
           end if

        end

