fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1489003556;
    st `write.ftable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1489003556(x, file, quote, append, digits, sep, `...`) {
  (reg x:*, reg file:*, reg quote:*, reg append:*, reg digits:*, reg sep:*, reg ddd:dots) -+> V { var x:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var `...`:dots?, reg format_ftable:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg quote1:*, reg quote2:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg ddd1:dots?, reg r5:V, reg cat:cls, reg t:cls, reg r6:*, reg r7:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg file1:*, reg file2:V, reg p6:p(V +), reg append1:*, reg append2:V, reg p7:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg rep:cls, reg r17:V, reg c:cls, reg r18:V, reg p8:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg x3:*, reg x4:V, reg invisible:cls, reg r23:V |
    mkenv;
    st x = x;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L1(TRUE) else L1(quote);
  L1(quote_orDefault):
    st quote = quote_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L2(FALSE) else L2(append);
  L2(append_orDefault):
    st append = append_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L3() else L4(digits);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L4(p);
  L4(digits_orDefault):
    st digits = digits_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L5(" ") else L5(sep);
  L5(sep_orDefault):
    st sep = sep_orDefault;
    st `...` = ddd;
    format_ftable = ldf `format.ftable`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p3 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r5 = dyn format_ftable[, quote, digits, `...`](p1, p2, p3, ddd1);
    check L8() else D1();
  D1():
    deopt 8 [r5];
  L8():
    st r = r5;
    cat = ldf cat;
    check L9() else D2();
  D2():
    deopt 11 [];
  L9():
    p5 = prom<V +>{
      t = ldf t;
      p4 = prom<V +>{
        r6 = ld r;
        r7 = force? r6;
        checkMissing(r7);
        return r7;
      };
      r9 = dyn t(p4);
      return r9;
    };
    p6 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p7 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      return append2;
    };
    p8 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r14):
      return r14;
    L2():
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r13 = dyn base(<lang rep(sep, `-`(ncol(r), 1))>, "\n");
      goto L0(r13);
    L1(r16):
      c = ldf c in base;
      r18 = dyn c(r16, "\n");
      goto L0(r18);
    L4():
      rep = ldf rep in base;
      r17 = dyn rep(<sym sep>, <lang `-`(ncol(r), 1)>);
      goto L1(r17);
    L5():
      r15 = dyn base1(<sym sep>, <lang `-`(ncol(r), 1)>);
      goto L1(r15);
    };
    r20 = dyn cat[, file, append, sep](p5, p6, p7, p8);
    check L10() else D3();
  D3():
    deopt 19 [r20];
  L10():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L6(r22):
    popenv;
    return r22;
  L11():
    x3 = ld x;
    check L13() else D4();
  L12():
    r21 = dyn base2(<sym x>);
    goto L6(r21);
  D4():
    deopt 22 [x3];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r23 = dyn invisible(x4);
    check L14() else D5();
  D5():
    deopt 25 [r23];
  L14():
    goto L6(r23);
  }
}