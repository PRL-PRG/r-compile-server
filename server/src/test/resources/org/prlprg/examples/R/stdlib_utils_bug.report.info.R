#? stdlib
`bug.report.info` <- function () 
c("R Version:", paste0(" ", names(R.version), " = ", R.version), 
    if (nzchar(Sys.getenv("R_GUI_APP_VERSION"))) c("", "GUI:", 
        paste0(" R-GUI ", Sys.getenv("R_GUI_APP_VERSION"), " (", 
            Sys.getenv("R_GUI_APP_REVISION"), ")")), if (.Platform$OS.type == 
        "windows") c("", win.version()), "", "Locale:", paste0(" ", 
        Sys.getlocale()), "", "Search Path:", strwrap(paste(search(), 
        collapse = ", "), indent = 1, exdent = 1), "")
