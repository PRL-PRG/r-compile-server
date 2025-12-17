fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner769933454;
    st `.newSignature` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner769933454(classes, names) {
  (reg classes:*, reg names:*) -+> V { var classes:*, var names:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg classes1:*, reg classes2:V, reg length:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg names1:*, reg names2:V, reg length1:cls, reg r7:V, reg min:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg n:*, reg n1:V, reg r11:I, reg lapply:cls, reg classes3:*, reg classes4:V, reg c:L, reg classes6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg __:cls, reg r12:V, reg p:p(V +), reg packageSlot:*, reg packageSlot1:V, reg p1:p(V +), reg r15:V, reg l:*, reg c1:L, reg r17:S, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg vapply:cls, reg pkgs:*, reg pkgs1:V, reg p2:p(V +), reg is_null:*, reg is_null1:V, reg p3:p(V +), reg logical:cls, reg r22:V, reg p4:p(V +), reg r24:V, reg ___:cls, reg r25:V, reg _asS4:cls, reg structure:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg classes7:*, reg classes8:V, reg as_character:cls, reg r28:V, reg c2:L, reg r30:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i2:*, reg i3:V, reg __1:cls, reg r31:V, reg p5:p(V +), reg _signatureClassName:*, reg _signatureClassName1:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg names3:*, reg names4:V, reg as_character1:cls, reg r36:V, reg c3:L, reg r38:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i4:*, reg i5:V, reg __2:cls, reg r39:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg pkgs2:*, reg pkgs3:V, reg as_character2:cls, reg r43:V, reg p8:p(V +), reg r45:V, reg p9:p(V +), reg r47:V |
    mkenv;
    st classes = classes;
    st names = names;
    sym = ldf min;
    base = ldf min in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st n = r1;
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L5():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang length(classes)>, <lang length(names)>);
    goto L0(r);
  L1(r3):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L3(r10):
    st i = r10;
    lapply = ldf lapply;
    check L19() else D6();
  L7():
    classes1 = ld classes;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym classes>);
    goto L1(r2);
  L16():
    n = ld n;
    check L18() else D5();
  L17():
    r9 = dyn base3(<sym n>);
    goto L3(r9);
  D0():
    deopt 4 [classes1];
  D5():
    deopt 18 [n];
  D6():
    deopt 23 [];
  L2(r6):
    min = ldf min in base;
    r8 = dyn min(r3, r6);
    check L15() else D4();
  L9():
    classes2 = force? classes1;
    checkMissing(classes2);
    length = ldf length in base;
    r4 = dyn length(classes2);
    check L10() else D1();
  L11():
    names1 = ld names;
    check L13() else D2();
  L12():
    r5 = dyn base2(<sym names>);
    goto L2(r5);
  L18():
    n1 = force? n;
    checkMissing(n1);
    r11 = seq_len(n1);
    goto L3(r11);
  L19():
    p = prom<V +>{
      classes3 = ld classes;
      classes4 = force? classes3;
      checkMissing(classes4);
      c = `is.object`(classes4);
      if c then L1() else L2(classes4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", classes4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(classes6):
      i = ld i;
      i1 = force? i;
      __ = ldf `[` in base;
      r12 = dyn __(classes6, i1);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      packageSlot = ld packageSlot;
      packageSlot1 = force? packageSlot;
      checkMissing(packageSlot1);
      return packageSlot1;
    };
    r15 = dyn lapply(p, p1);
    check L20() else D7();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [names1];
  D4():
    deopt 15 [r8];
  D7():
    deopt 26 [r15];
  L10():
    goto L1(r4);
  L13():
    names2 = force? names1;
    checkMissing(names2);
    length1 = ldf length in base;
    r7 = dyn length1(names2);
    check L14() else D3();
  L15():
    goto L0(r8);
  L20():
    st pkgs = r15;
    l = ld pkgs;
    c1 = `is.object`(l);
    if c1 then L21() else L22("methods", l);
  D3():
    deopt 13 [r7];
  L4(dx3):
    st pkgs = dx3;
    _asS4 = ldf `.asS4`;
    check L26() else D10();
  L14():
    goto L2(r7);
  L21():
    dr2 = tryDispatchBuiltin.0("[<-", l, "methods");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22("methods", dr2);
  L22(r17, l2):
    vapply = ldf vapply;
    check L24() else D8();
  D8():
    deopt 32 [r17, l2, "methods"];
  D10():
    deopt 40 [];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L24():
    p2 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    p3 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    p4 = prom<V +>{
      logical = ldf logical;
      r22 = dyn logical(1);
      return r22;
    };
    r24 = dyn vapply(p2, p3, p4);
    check L25() else D9();
  L26():
    p9 = prom<V +>{
      structure = ldf structure;
      p5 = prom<V +>{
        sym4 = ldf `as.character`;
        base4 = ldf `as.character` in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L2() else L3();
      L0(r27):
        c2 = `is.object`(r27);
        if c2 then L4() else L5(r27);
      L2():
        classes7 = ld classes;
        classes8 = force? classes7;
        checkMissing(classes8);
        as_character = ldf `as.character` in base;
        r28 = dyn as_character(classes8);
        goto L0(r28);
      L3():
        r26 = dyn base4(<sym classes>);
        goto L0(r26);
      L1(dx5):
        return dx5;
      L4():
        dr4 = tryDispatchBuiltin.1("[", r27);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L6() else L5(dr4);
      L5(r30):
        i2 = ld i;
        i3 = force? i2;
        __1 = ldf `[` in base;
        r31 = dyn __1(r30, i3);
        goto L1(r31);
      L6():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx4);
      };
      p6 = prom<V +>{
        _signatureClassName = ld `.signatureClassName`;
        _signatureClassName1 = force? _signatureClassName;
        checkMissing(_signatureClassName1);
        return _signatureClassName1;
      };
      p7 = prom<V +>{
        sym5 = ldf `as.character`;
        base5 = ldf `as.character` in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L2() else L3();
      L0(r35):
        c3 = `is.object`(r35);
        if c3 then L4() else L5(r35);
      L2():
        names3 = ld names;
        names4 = force? names3;
        checkMissing(names4);
        as_character1 = ldf `as.character` in base;
        r36 = dyn as_character1(names4);
        goto L0(r36);
      L3():
        r34 = dyn base5(<sym names>);
        goto L0(r34);
      L1(dx7):
        return dx7;
      L4():
        dr6 = tryDispatchBuiltin.1("[", r35);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L6() else L5(dr6);
      L5(r38):
        i4 = ld i;
        i5 = force? i4;
        __2 = ldf `[` in base;
        r39 = dyn __2(r38, i5);
        goto L1(r39);
      L6():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L1(dx6);
      };
      p8 = prom<V +>{
        sym6 = ldf `as.character`;
        base6 = ldf `as.character` in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r42):
        return r42;
      L1():
        pkgs2 = ld pkgs;
        pkgs3 = force? pkgs2;
        checkMissing(pkgs3);
        as_character2 = ldf `as.character` in base;
        r43 = dyn as_character2(pkgs3);
        goto L0(r43);
      L2():
        r41 = dyn base6(<sym pkgs>);
        goto L0(r41);
      };
      r45 = dyn structure[, class, names, package](p5, p6, p7, p8);
      return r45;
    };
    r47 = dyn _asS4(p9);
    check L27() else D11();
  D9():
    deopt 36 [r17, l2, "methods", r24];
  D11():
    deopt 42 [r47];
  L25():
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l2, "methods", r24);
    goto L4(r25);
  L27():
    popenv;
    return r47;
  }
}