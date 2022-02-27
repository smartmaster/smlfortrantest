        subroutine OldF7705(strarr, arrlen)
            implicit none

            integer arrlen
            character*15 strarr(arrlen)

            integer arri(6)


            integer ii

            do ii = 1, arrlen
                write(*,*) strarr(ii)
                strarr(ii) = 'changed'
            end do


            arri(1) = 17
            arri(2) = 17
            arri(3:4) = arri(1:2)
            strarr(1)(2:5) = 'AAAAAAAAAAAAA'

            write(*,*) arri
            write(*,*) strarr(1)
                        
           
        end



