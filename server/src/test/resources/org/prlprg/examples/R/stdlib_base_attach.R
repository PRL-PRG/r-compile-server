#? stdlib
`attach` <- function (what, pos = 2L, name = deparse1(substitute(what), backtick = FALSE), 
    warn.conflicts = TRUE) 
{
    checkConflicts <- function(env) {
        dont.mind <- c("last.dump", "last.warning", ".Last.value", 
            ".Random.seed", ".Last.lib", ".onDetach", ".packageName", 
            ".noGenerics", ".required", ".no_S3_generics", ".Depends", 
            ".requireCachedGenerics")
        sp <- search()
        for (i in seq_along(sp)) {
            if (identical(env, as.environment(i))) {
                lib.pos <- i
                break
            }
        }
        ob <- names(as.environment(lib.pos))
        if (.isMethodsDispatchOn()) {
            these <- ob[startsWith(ob, ".__T__")]
            gen <- gsub(".__T__(.*):([^:]+)", "\\1", these)
            from <- gsub(".__T__(.*):([^:]+)", "\\2", these)
            gen <- gen[from != ".GlobalEnv"]
            ob <- ob[!(ob %in% gen)]
        }
        ipos <- seq_along(sp)[-c(lib.pos, match(c("Autoloads", 
            "CheckExEnv"), sp, 0L))]
        for (i in ipos) {
            obj.same <- match(names(as.environment(i)), ob, nomatch = 0L)
            if (any(obj.same > 0L)) {
                same <- ob[obj.same]
                same <- same[!(same %in% dont.mind)]
                Classobjs <- which(startsWith(same, ".__"))
                if (length(Classobjs)) 
                  same <- same[-Classobjs]
                same.isFn <- function(where) vapply(same, exists, 
                  NA, where = where, mode = "function", inherits = FALSE)
                same <- same[same.isFn(i) == same.isFn(lib.pos)]
                if (length(same)) {
                  pkg <- if (sum(sp == sp[i]) > 1L) 
                    sprintf("%s (pos = %d)", sp[i], i)
                  else sp[i]
                  packageStartupMessage(.maskedMsg(sort(same), 
                    pkg, by = i < lib.pos), domain = NA)
                }
            }
        }
    }
    if (pos == 1L) 
        stop("'pos=1' is not possible and has been warned about for years")
    if (is.character(what) && (length(what) == 1L)) {
        if (!file.exists(what)) 
            stop(gettextf("file '%s' not found", what), domain = NA)
        if (missing(name)) 
            name <- paste0("file:", what)
        value <- .Internal(attach(NULL, pos, name))
        load(what, envir = as.environment(pos))
    }
    else value <- .Internal(attach(what, pos, name))
    if (warn.conflicts && !exists(".conflicts.OK", envir = value, 
        inherits = FALSE)) {
        checkConflicts(value)
    }
    if (length(names(value)) && .isMethodsDispatchOn()) 
        methods::cacheMetaData(value, TRUE)
    invisible(value)
}

# Examples
require(utils)

summary(women$height)   # refers to variable 'height' in the data frame
attach(women)
summary(height)         # The same variable now available by name
height <- height*2.54   # Don't do this. It creates a new variable
                        # in the user's workspace
find("height")
summary(height)         # The new variable in the workspace
rm(height)
summary(height)         # The original variable.
height <<- height*25.4  # Change the copy in the attached environment
find("height")
summary(height)         # The changed copy
detach("women")
summary(women$height)   # unchanged


