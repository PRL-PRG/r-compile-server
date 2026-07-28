#? stdlib
`method.skeleton` <- function (generic, signature, file, external = FALSE, where = topenv(parent.frame())) 
{
    fdef <- getGeneric(generic, where = where)
    if (is.null(fdef)) {
        fdef <- implicitGeneric(generic, where = where)
        if (is.null(fdef)) 
            stop(gettextf("no function definition found for %s", 
                sQuote(generic)), domain = NA)
    }
    else {
        generic <- fdef@generic
    }
    signature <- matchSignature(signature, fdef)
    if (length(signature) == 0) 
        signature <- "ANY"
    sigNames <- fdef@signature
    length(sigNames) <- length(signature)
    method <- function() {
    }
    formals(method) <- formals(fdef)
    body(method) <- quote({
        stop("need a definition for the method here")
    })
    methodName <- paste(c(generic, signature), collapse = "_")
    if (missing(file)) 
        file <- paste0(methodName, ".R")
    output <- c(paste0("setMethod(\"", generic, "\","), paste0("    signature(", 
        paste0(sigNames, " = \"", signature, "\"", collapse = ", "), 
        "),"))
    method <- deparse(method)
    if (isFALSE(external)) 
        output <- c(output, paste0("    ", method), ")")
    else {
        if (is(external, "character")) 
            methodName <- toString(external)
        method[[1L]] <- paste0("`", methodName, "` <- ", method[[1L]])
        output <- c(method, "", output, paste0("  `", methodName, 
            "`)"))
    }
    writeLines(output, file)
    message(gettextf("Skeleton of method written to %s", if (is.character(file)) 
        file
    else "connection"), domain = NA)
    invisible(file)
}

# Examples
oWD <- setwd(tempdir())
setClass("track", slots = c(x ="numeric", y="numeric"))
method.skeleton("show", "track")            ## writes show_track.R
method.skeleton("Ops", c("track", "track")) ## writes "Ops_track_track.R"

## write multiple method skeletons to one file
con <- file("./Math_track.R", "w")
method.skeleton("Math", "track", con)
method.skeleton("exp", "track", con)
method.skeleton("log", "track", con)
close(con)
setwd(oWD)

