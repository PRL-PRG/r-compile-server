#? stdlib
`frame` <- function () 
{
    for (fun in getHook("before.plot.new")) {
        if (is.character(fun)) 
            fun <- get(fun)
        try(fun())
    }
    .External2(C_plot_new)
    grDevices:::recordPalette()
    for (fun in getHook("plot.new")) {
        if (is.character(fun)) 
            fun <- get(fun)
        try(fun())
    }
    invisible()
}
