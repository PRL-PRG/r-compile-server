#? stdlib
`revert_install_time_patches` <- function () 
{
    WINDOWS <- .Platform$OS.type == "windows"
    if (WINDOWS && dir.exists("install_time_patches")) {
        patches <- sort(list.files("install_time_patches"), decreasing = TRUE)
        for (p in patches) {
            fname <- paste0("install_time_patches/", p)
            if (system2("patch", args = c("-p2", "--binary", 
                "--force", "--reverse"), stdin = fname) != 0) 
                message("WARNING: failed to revert patch ", p, 
                  "\n")
            else message("Reverted installation-time patch ", 
                p, " in package installation\n")
        }
        unlink("install_time_patches", recursive = TRUE)
    }
}
