fun main() {
  () --> I { var outer:I?, var inner:I?, reg outer0:I?, reg outer1:I, reg inner0:I?, reg inner1:I, reg combined:I, reg final:I?, reg final1:I, reg ret:I |
    mkenv;
    st outer = 11;
    mkenv;
    st inner = 9;
    outer0 = ld outer;
    outer1 = outer0 as I;
    inner0 = ld inner;
    inner1 = inner0 as I;
    combined = `+`.1(outer1, inner1);
    st outer = combined;
    popenv;
    final = ld outer;
    final1 = final as I;
    popenv;
    ret = `+`.1(final1, 10);
    return ret;
  }
}
