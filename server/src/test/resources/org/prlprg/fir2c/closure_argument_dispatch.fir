fun main() {
  () -+> I { reg clos:cls, reg result:I, reg ret:I |
    clos = build_closure();
    result = apply_closure(clos);
    ret = `+`.1(result, 3);
    return ret;
  }
}

fun build_closure() {
  () --> cls { reg c:cls |
    c = clos payload;
    return c;
  }
}

fun apply_closure(`...`) {
  (reg clos:cls) -+> I { reg base:V, reg base0:I, reg sum:I |
    base = dyn clos();
    base0 = base as I;
    sum = `+`.1(base0, 2);
    return sum;
  }
}

fun payload() {
  () --> I { |
    return 37;
  }
}
