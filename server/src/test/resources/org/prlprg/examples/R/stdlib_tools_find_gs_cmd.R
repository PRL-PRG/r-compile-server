#? stdlib
`find_gs_cmd` <- function (gs_cmd = "") 
{
    if (!nzchar(gs_cmd)) {
        if (.Platform$OS.type == "windows") {
            gsexe <- Sys.getenv("R_GSCMD")
            if (!nzchar(gsexe)) 
                gsexe <- Sys.getenv("GSC")
            gs_cmd <- Sys.which(gsexe)
            if (!nzchar(gs_cmd)) 
                gs_cmd <- Sys.which("gswin64c")
            if (!nzchar(gs_cmd)) 
                gs_cmd <- Sys.which("gswin32c")
            gs_cmd
        }
        else Sys.which(Sys.getenv("R_GSCMD", "gs"))
    }
    else Sys.which(gs_cmd)
}

# Examples
