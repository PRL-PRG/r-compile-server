#? stdlib
`permissify` <- function (Rd) 
{
    tags <- RdTags(Rd)
    oldclass <- class(Rd)
    oldsrcref <- utils::getSrcref(Rd)
    oldtag <- attr(Rd, "Rd_tag")
    i <- 0
    while (i < length(tags)) {
        i <- i + 1
        if (tags[i] == "UNKNOWN") {
            Rd[[i]] <- tagged(Rd[[i]], "TEXT", utils::getSrcref(Rd[[i]]))
            while (i < length(tags)) {
                if (tags[i + 1] == "LIST") {
                  Rd <- c(Rd[seq_len(i)], list(tagged("{", "TEXT", 
                    utils::getSrcref(Rd[[i + 1]]))), permissify(Rd[[i + 
                    1]]), list(tagged("}", "TEXT", utils::getSrcref(Rd[[i + 
                    1]]))), Rd[seq_along(Rd)[-seq_len(i + 1)]])
                  tags <- RdTags(Rd)
                  i <- i + 3
                }
                else if (tags[i + 1] == "TEXT" && grepl("^ *$", 
                  Rd[[i + 1]])) 
                  i <- i + 1
                else break
            }
        }
        else if (is.recursive(Rd[[i]])) 
            Rd[[i]] <- permissify(Rd[[i]])
    }
    class(Rd) <- oldclass
    attr(Rd, "srcref") <- oldsrcref
    attr(Rd, "Rd_tag") <- oldtag
    Rd
}
