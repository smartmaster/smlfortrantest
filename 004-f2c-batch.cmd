for /r %%v in (*.f) do (
    echo %%v
    call 002-f2c.cmd %%v
)