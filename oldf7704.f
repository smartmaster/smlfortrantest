        subroutine OldF7704(ii1,cc1,ii2,cc2, arr, arrlen)
            implicit none
            
            integer*4 ii1
            character*(*) cc1
            integer*8 ii2
            character*(*) cc2
            integer*4 arrlen
            integer*4 arr(arrlen)

            integer*4 ii

            write(*,*) ii1,cc1,ii2,cc2, arr, arrlen

            ii1 = 111
            cc1 = "aaaa"
            ii2 = 222
            cc2 = "bbbb"
            do ii = 1,arrlen
                arr(ii) = ii
            end do

        end



