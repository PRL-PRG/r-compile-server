#? stdlib
`.findAll` <- function (what, where = topenv(parent.frame())) 
{
    value <- list()
    if (is.environment(where)) {
        if (isNamespace(where)) 
            repeat {
                if (exists(what, where, inherits = FALSE)) 
                  value <- c(value, list(where))
                if (identical(where, emptyenv())) 
                  break
                where <- parent.env(where)
            }
        else {
            if (exists(what, where, inherits = FALSE)) 
                value <- c(value, list(where))
            for (i in seq_along(search())) {
                if (exists(what, i, inherits = FALSE)) {
                  evi <- as.environment(i)
                  addMe <- TRUE
                  for (other in value) if (identical(other, evi)) {
                    addMe <- FALSE
                    break
                  }
                  if (addMe) 
                    value <- c(value, list(evi))
                }
            }
        }
    }
    else for (i in where) {
        if (exists(what, i, inherits = FALSE)) 
            value <- c(value, list(i))
    }
    value
}
