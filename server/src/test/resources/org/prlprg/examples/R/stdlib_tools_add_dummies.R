#? stdlib
`add_dummies` <- function (dir, Log) 
{
    dir1 <- file.path(dir, "R_check_bin")
    if (dir.exists(file.path(dir1))) {
        messageLog(Log, "directory ", sQuote(dir1), " already exists")
        return()
    }
    dir.create(dir1)
    if (!dir.exists(dir1)) {
        messageLog(Log, "creation of directory ", sQuote(dir1), 
            " failed")
        return()
    }
    Sys.setenv(PATH = env_path(dir1, Sys.getenv("PATH")))
    if (.Platform$OS.type != "windows") {
        writeLines(c("echo \"'R' should not be used without a path -- see par. 1.6 of the manual\"", 
            "exit 1"), p1 <- file.path(dir1, "R"))
        writeLines(c("echo \"'Rscript' should not be used without a path -- see par. 1.6 of the manual\"", 
            "exit 1"), p2 <- file.path(dir1, "Rscript"))
        Sys.chmod(c(p1, p2), "0755")
    }
    else {
        writeLines(c("@ECHO OFF", "echo \"'R' should not be used without a path -- see par. 1.6 of the manual\"", 
            "exit /b 1"), p1 <- file.path(dir1, "R.bat"))
        writeLines(c("@ECHO OFF", "echo \"'Rscript' should not be used without a path -- see par. 1.6 of the manual\"", 
            "exit /b 1"), p2 <- file.path(dir1, "Rscript.bat"))
    }
}
