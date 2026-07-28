#? stdlib
`R_check_outdirs` <- function (dir, all = FALSE, invert = FALSE) 
{
    dir <- normalizePath(dir)
    outdirs <- dir(dir, pattern = "\\.Rcheck")
    ind <- startsWith(basename(outdirs), "rdepends_")
    outdirs <- if (invert) 
        c(if (all) outdirs[!ind], outdirs[ind])
    else c(outdirs[!ind], if (all) outdirs[ind])
    file.path(dir, outdirs)
}
