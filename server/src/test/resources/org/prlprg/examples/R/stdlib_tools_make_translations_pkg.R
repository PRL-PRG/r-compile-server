#? stdlib
`make_translations_pkg` <- function (srcdir, outDir = ".", append = "-1") 
{
    src <- file.path(srcdir, "src/library/translations")
    dest <- file.path(tempdir(), "translations")
    dir.create(dest, FALSE)
    file.copy(file.path(src, "inst"), dest, recursive = TRUE)
    lines <- readLines(file.path(src, "DESCRIPTION.in"))
    ver <- getRversion()
    lines <- gsub("@VERSION@", ver, lines, fixed = TRUE)
    lines[2] <- paste0(lines[2], append)
    ver <- unclass(getRversion())[[1]]
    deps <- sprintf("Depends: R (>= %s.%d.0), R (< %d.%d.0)", 
        ver[1], ver[2], ver[1], ver[2] + 1)
    lines <- c(lines, deps)
    writeLines(lines, file.path(dest, "DESCRIPTION"))
    cmd <- shQuote(file.path(R.home(), "bin", "R"))
    cmd <- paste(cmd, "CMD", "build", shQuote(dest))
    if (system(cmd) != 0L) 
        stop("R CMD build failed")
    tarball <- Sys.glob(file.path(tempdir(), "translations_*.tar.gz"))
    file.rename(tarball, file.path(outDir, basename(tarball)))
    invisible()
}
