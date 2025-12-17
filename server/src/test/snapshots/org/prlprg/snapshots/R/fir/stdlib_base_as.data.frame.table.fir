fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2780729953;
    st `as.data.frame.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2780729953(x, `row.names`, `...`, responseName, stringsAsFactors, sep, base) {
  (reg x:*, reg row_names:*, reg ddd:dots, reg responseName:*, reg stringsAsFactors:*, reg sep:*, reg base:*) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var `...`:dots?, var responseName:*, reg responseName_isMissing:L, reg responseName_orDefault:*, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var base:*, reg base_isMissing:L, reg base_orDefault:*, reg sym:cls, reg base1:cls, reg guard:L, reg r:V, reg r1:V, reg LETTERS:*, reg LETTERS1:V, reg list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base2:cls, reg guard1:L, reg r4:V, reg r5:V, reg quote:cls, reg r6:V, reg responseName1:*, reg responseName2:V, reg l:*, reg names:cls, reg r7:V, reg c:L, reg responseName4:V, reg l2:*, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg responseName6:V, reg l4:*, reg dx1:V, reg ___:cls, reg r10:V, reg names__:cls, reg r11:V, reg eval:cls, reg ex:*, reg ex1:V, reg p1:p(V +), reg r13:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    st `...` = ddd;
    responseName_isMissing = missing.0(responseName);
    if responseName_isMissing then L1("Freq") else L1(responseName);
  L1(responseName_orDefault):
    st responseName = responseName_orDefault;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L2(TRUE) else L2(stringsAsFactors);
  L2(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L3("") else L3(sep);
  L3(sep_orDefault):
    st sep = sep_orDefault;
    base_isMissing = missing.0(base);
    if base_isMissing then L4() else L5(base);
  L4():
    p = prom<V +>{
      sym = ldf list;
      base1 = ldf list in base;
      guard = `==`.4(sym, base1);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      list = ldf list in base;
      r2 = dyn list(LETTERS1);
      goto L0(r2);
    L2():
      r = dyn base1(<sym LETTERS>);
      goto L0(r);
    };
    goto L5(p);
  L5(base_orDefault):
    st base = base_orDefault;
    sym1 = ldf quote;
    base2 = ldf quote in base;
    guard1 = `==`.4(sym1, base2);
    if guard1 then L8() else L9();
  L6(r5):
    st ex = r5;
    responseName1 = ld responseName;
    check L10() else D0();
  L8():
    quote = ldf quote in base;
    r6 = dyn quote(<lang data.frame(do.call("expand.grid", c(dimnames(provideDimnames(x, sep=sep, base=base)), KEEP.OUT.ATTRS=FALSE, stringsAsFactors=stringsAsFactors)), Freq=c(x), row.names=row.names)>);
    goto L6(r6);
  L9():
    r4 = dyn base2(<lang data.frame(do.call("expand.grid", c(dimnames(provideDimnames(x, sep=sep, base=base)), KEEP.OUT.ATTRS=FALSE, stringsAsFactors=stringsAsFactors)), Freq=c(x), row.names=row.names)>);
    goto L6(r4);
  D0():
    deopt 4 [responseName1];
  L10():
    responseName2 = force? responseName1;
    checkMissing(responseName2);
    l = ld ex;
    names = ldf names;
    check L11() else D1();
  D1():
    deopt 7 [responseName2, l, responseName2];
  L11():
    r7 = dyn names(responseName2, NULL);
    check L12() else D2();
  D2():
    deopt 9 [responseName2, l, responseName2, r7];
  L12():
    c = `is.object`(r7);
    if c then L13() else L14(responseName2, l, r7);
  L7(responseName6, l4, dx1):
    names__ = ldf `names<-`;
    check L16() else D3();
  L13():
    dr = tryDispatchBuiltin.0("[<-", r7, responseName2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(responseName2, l, dr);
  L14(responseName4, l2, r9):
    ___ = ldf `[<-` in base;
    r10 = dyn ___(r9, responseName2, 3);
    goto L7(responseName4, l2, r10);
  D3():
    deopt 14 [responseName6, l4, dx1];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(responseName2, l, dx);
  L16():
    r11 = dyn names__(l4, NULL, dx1);
    check L17() else D4();
  D4():
    deopt 16 [responseName6, r11];
  L17():
    st ex = r11;
    eval = ldf eval;
    check L18() else D5();
  D5():
    deopt 19 [];
  L18():
    p1 = prom<V +>{
      ex = ld ex;
      ex1 = force? ex;
      checkMissing(ex1);
      return ex1;
    };
    r13 = dyn eval(p1);
    check L19() else D6();
  D6():
    deopt 21 [r13];
  L19():
    popenv;
    return r13;
  }
}