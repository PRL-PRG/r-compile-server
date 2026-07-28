#? stdlib
`URLencode` <- function (URL, reserved = FALSE, repeated = FALSE) 
{
    vapply(URL, function(URL) {
        if (!repeated && grepl("%[[:xdigit:]]{2}", URL, useBytes = TRUE)) 
            return(URL)
        OK <- paste0("[^", if (!reserved) 
            "][!$&'()*+,;=:/?@#", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 
            "abcdefghijklmnopqrstuvwxyz0123456789._~-", "]")
        x <- strsplit(URL, "")[[1L]]
        z <- grep(OK, x)
        if (length(z)) {
            y <- vapply(x[z], function(x) paste0("%", toupper(as.character(charToRaw(x))), 
                collapse = ""), "")
            x[z] <- y
        }
        paste(x, collapse = "")
    }, character(1), USE.NAMES = FALSE)
}

# Examples
(y <- URLencode("a url with spaces and / and @"))
URLdecode(y)
(y <- URLencode("a url with spaces and / and @", reserved = TRUE))
URLdecode(y)

URLdecode(z <- "ab%20cd")
c(URLencode(z), URLencode(z, repeated = TRUE)) # first is usually wanted

## both functions support character vectors of length > 1
y <- URLdecode(URLencode(c("url with space", "another one")))

