#? stdlib
`.onLoad` <- function (libname, pkgname) 
{
    if (identical(Sys.getenv("R_REPOSITORIES"), "NULL")) 
        repos <- character()
    else {
        reposdf <- tryCatch(.get_repositories(), error = identity)
        if (inherits(reposdf, "error")) 
            repos <- character()
        else {
            reposdf <- reposdf[reposdf$default, ]
            repos <- reposdf$URL
            names(repos) <- row.names(reposdf)
        }
        if (is.na(match("CRAN", names(repos)))) 
            repos <- c(CRAN = "@CRAN@", repos)
    }
    op.utils <- list(help.try.all.packages = FALSE, help.search.types = c("vignette", 
        "demo", "help"), citation.bibtex.max = 1L, internet.info = 2L, 
        pkgType = if (.Platform$pkgType != "source") "both" else "source", 
        str = strOptions(), demo.ask = "default", example.ask = "default", 
        HTTPUserAgent = defaultUserAgent(), menu.graphics = TRUE, 
        mailer = "mailto", repos = repos)
    if (.Platform$pkgType != "source") 
        op.utils[["install.packages.compile.from.source"]] <- Sys.getenv("R_COMPILE_AND_INSTALL_PACKAGES", 
            "interactive")
    extra <- if (.Platform$OS.type == "windows") {
        list(unzip = "internal", editor = if (length(grep("Rgui", 
            commandArgs(), TRUE))) "internal" else "notepad", 
            askYesNo = if (.Platform$GUI == "Rgui") askYesNoWinDialog)
    }
    else list(unzip = Sys.getenv("R_UNZIPCMD"), editor = Sys.getenv("EDITOR"))
    op.utils <- c(op.utils, extra)
    toset <- !(names(op.utils) %in% names(.Options))
    if (any(toset)) 
        options(op.utils[toset])
    ns <- environment(sys.function())
    assign("osVersion", .osVersion(), envir = ns)
}
