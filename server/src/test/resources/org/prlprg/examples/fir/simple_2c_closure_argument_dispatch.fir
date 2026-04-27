fun main() {
  () -+> I { reg closure:cls, reg result:I, reg ret:I |
    closure = build_closure< --> cls >();
    result = apply_closure< cls -+> I >(closure);
    ret = `+`< I,I --> I >(result, 3);
    return ret;
  }
}

fun build_closure() {
  () --> cls { reg c:cls |
    c = clos payload;
    return c;
  }
}

fun apply_closure(closure) {
  (reg closure:cls) -+> I { reg base:V, reg base0:I, reg sum:I |
    base = dyn closure();
    base0 = base as I;
    sum = `+`< I,I --> I >(base0, 2);
    return sum;
  }
}

fun payload() {
  () --> v1(I) { |
    return <int 37>;
  }
}
