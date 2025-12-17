fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2584448267;
    st `edit.vignette` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2584448267(name, `...`) {
  (reg name:*, reg ddd:dots) -+> V { var name:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getRcode:cls, reg name1:*, reg name2:V, reg p:p(V +), reg r3:V, reg c:L, reg c1:L, reg tempfile:cls, reg name3:*, reg name4:V, reg c2:L, reg name6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p1:p(V +), reg r6:V, reg file_copy:cls, reg src:*, reg src1:V, reg p2:p(V +), reg f:*, reg f1:V, reg p3:p(V +), reg r9:V, reg file_edit:cls, reg f2:*, reg f3:V, reg p4:p(V +), reg ddd1:dots?, reg r11:V |
    mkenv;
    st name = name;
    st `...` = ddd;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L6() else L1();
  L2():
    getRcode = ldf getRcode;
    check L4() else D0();
  L3():
    r = dyn base(<lang `<-`(src, getRcode(name, strict=FALSE))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r3 = dyn getRcode[, strict](p, FALSE);
    check L5() else D1();
  L6():
    tempfile = ldf tempfile;
    check L7() else D2();
  D1():
    deopt 6 [r3];
  D2():
    deopt 10 [];
  L5():
    st src = r3;
    c = `is.character`(r3);
    goto L0(c);
  L7():
    p1 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      c2 = `is.object`(name4);
      if c2 then L1() else L2(name4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", name4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(name6):
      r4 = `$`(name6, <sym Topic>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn tempfile[, fileext](p1, ".R");
    check L8() else D3();
  D3():
    deopt 14 [r6];
  L8():
    st f = r6;
    file_copy = ldf `file.copy`;
    check L9() else D4();
  D4():
    deopt 17 [];
  L9():
    p2 = prom<V +>{
      src = ld src;
      src1 = force? src;
      checkMissing(src1);
      return src1;
    };
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r9 = dyn file_copy(p2, p3);
    check L10() else D5();
  D5():
    deopt 20 [r9];
  L10():
    file_edit = ldf `file.edit`;
    check L11() else D6();
  D6():
    deopt 22 [];
  L11():
    p4 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    ddd1 = ld `...`;
    r11 = dyn file_edit[file, `...`](p4, ddd1);
    check L12() else D7();
  D7():
    deopt 26 [r11];
  L12():
    popenv;
    return r11;
  }
}