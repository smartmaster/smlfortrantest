        subroutine OldF7705(strarr, arrlen)
            implicit none

            integer arrlen
            character*15 strarr(arrlen)

            integer arri(6)


            integer ii
            integer temp

            do ii = 1, arrlen
                write(*,*) strarr(ii)
                strarr(ii) = 'changed'
            end do


            arri(1) = 17
            arri(2) = 17

            do temp=1,2
                arri(temp+2) = arri(temp)
            end do

            
            strarr(1)(2:5) = 'AAAAAAAAAAAAA'

            write(*,*) arri
            write(*,*) strarr(1)
                        
           
        end



