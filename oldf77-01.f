        subroutine OldF7701()
        implicit none

        include 'ModGlobalComm.inc'

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

