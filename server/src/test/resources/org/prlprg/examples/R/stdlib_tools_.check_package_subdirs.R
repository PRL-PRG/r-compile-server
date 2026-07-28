#? stdlib
`.check_package_subdirs` <- function (dir, doDelete = FALSE) 
{
    OS_subdirs <- c("unix", "windows")
    mydir <- function(dir) {
        d <- list.files(dir, all.files = TRUE, full.names = FALSE)
        if (!length(d)) 
            return(d)
        if (basename(dir) %in% c("R", "man")) 
            for (os in OS_subdirs) {
                os_dir <- file.path(dir, os)
                if (dir.exists(os_dir)) 
                  d <- c(d, file.path(os, list.files(os_dir, 
                    all.files = TRUE, full.names = FALSE)))
            }
        d[file_test("-f", file.path(dir, d))]
    }
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    else dir <- file_path_as_absolute(dir)
    wrong_things <- list(R = character(), man = character(), 
        demo = character(), `inst/doc` = character())
    code_dir <- file.path(dir, "R")
    if (dir.exists(code_dir)) {
        all_files <- mydir(code_dir)
        R_files <- c("sysdata.rda", "Makefile.win", "Makefile.ucrt", 
            list_files_with_type(code_dir, "code", full.names = FALSE, 
                OS_subdirs = OS_subdirs))
        wrong <- setdiff(all_files, R_files)
        generated <- which(endsWith(wrong, ".in"))
        if (length(generated)) 
            wrong <- wrong[-generated]
        if (length(wrong)) {
            wrong_things$R <- wrong
            if (doDelete) 
                unlink(file.path(dir, "R", wrong))
        }
    }
    man_dir <- file.path(dir, "man")
    if (dir.exists(man_dir)) {
        all_files <- mydir(man_dir)
        man_files <- list_files_with_type(man_dir, "docs", full.names = FALSE, 
            OS_subdirs = OS_subdirs)
        wrong <- setdiff(all_files, man_files)
        if (length(wrong)) {
            wrong_things$man <- wrong
            if (doDelete) 
                unlink(file.path(dir, "man", wrong))
        }
    }
    demo_dir <- file.path(dir, "demo")
    if (dir.exists(demo_dir)) {
        all_files <- mydir(demo_dir)
        demo_files <- list_files_with_type(demo_dir, "demo", 
            full.names = FALSE)
        wrong <- setdiff(all_files, c("00Index", demo_files))
        if (length(wrong)) {
            wrong_things$demo <- wrong
            if (doDelete) 
                unlink(file.path(dir, "demo", wrong))
        }
    }
    subdir <- file.path("inst", "doc")
    vigns <- .package_vignettes_via_call_to_R(dir = dir, subdirs = subdir)
    if (!is.null(vigns) && length(vigns$docs)) {
        vignettes <- basename(vigns$docs)
        tryCatch({
            vigns <- .package_vignettes_via_call_to_R(dir = dir, 
                subdirs = subdir, output = TRUE)
            vignettes <- c(vignettes, basename(vigns$outputs))
        }, error = function(ex) {
        })
        OK <- grep("^[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz][ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-]+$", 
            vignettes)
        wrong <- vignettes
        if (length(OK)) 
            wrong <- wrong[-OK]
        if (length(wrong)) 
            wrong_things$`inst/doc` <- wrong
    }
    class(wrong_things) <- "subdir_tests"
    wrong_things
}
