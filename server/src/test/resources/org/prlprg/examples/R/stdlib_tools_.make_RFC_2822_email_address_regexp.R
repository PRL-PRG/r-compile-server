#? stdlib
`.make_RFC_2822_email_address_regexp` <- function () 
{
    ASCII_letters_and_digits <- "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
    l <- sprintf("[%s%s]", ASCII_letters_and_digits, "!#$%*/?|^{}`~&'+=_-")
    d <- sprintf("[%s%s]", ASCII_letters_and_digits, "-")
    sprintf("(\\\".+\\\"|(%s+\\.)*%s+)@(%s+\\.)*%s+", l, l, d, 
        d)
}
