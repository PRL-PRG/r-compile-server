fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.format_authors_at_R_field_for_maintainer` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg _read_authors_at_R_field:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r3:V, reg Filter:cls, reg r5:cls, reg p1:p(V +), reg x5:*, reg x6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x7:*, reg x8:V, reg length:cls, reg r11:V, reg r12:V, reg c2:L, reg format:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg format1:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg c4:cls, reg r24:V, reg p6:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg list:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg grepl:cls, reg display:*, reg display1:V, reg p8:p(V +), reg r34:V, reg any:cls, reg r35:V, reg c5:L, reg sprintf:cls, reg gsub:cls, reg display2:*, reg display3:V, reg c6:L, reg display5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r36:V, reg p9:p(V +), reg r38:V, reg p10:p(V +), reg r40:V, reg l:*, reg c7:L, reg r42:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r44:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r45:V, reg paste:cls, reg display6:*, reg display7:V, reg p11:p(V +), reg address:*, reg address1:V, reg p12:p(V +), reg r49:V |
    mkenv;
    st x = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L13() else L1();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L2();
  L2():
    Filter = ldf Filter;
    check L17() else D3();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L13():
    _read_authors_at_R_field = ldf `.read_authors_at_R_field`;
    check L14() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L14():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn _read_authors_at_R_field(p);
    check L15() else D2();
  L17():
    p1 = prom<V +>{
      r5 = clos inner3708401697;
      return r5;
    };
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r8 = dyn Filter(p1, p2);
    check L18() else D4();
  D2():
    deopt 7 [r3];
  D4():
    deopt 15 [r8];
  L15():
    st x = r3;
    goto L2();
  L18():
    st x = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L3(r10):
    r12 = `!=`(r10, 1);
    c2 = `as.logical`(r12);
    if c2 then L23() else L4();
  L19():
    x7 = ld x;
    check L21() else D5();
  L20():
    r9 = dyn base1(<sym x>);
    goto L3(r9);
  D5():
    deopt 19 [x7];
  L4():
    format = ldf format;
    check L26() else D7();
  L21():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r11 = dyn length(x8);
    check L22() else D6();
  L23():
    popenv;
    return "";
  D6():
    deopt 22 [r11];
  D7():
    deopt 31 [];
  L22():
    goto L3(r11);
  L26():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c3 = ldf c in base;
      r18 = dyn c3("given", "family");
      goto L0(r18);
    L2():
      r16 = dyn base2("given", "family");
      goto L0(r16);
    };
    r20 = dyn format[, include](p3, p4);
    check L27() else D8();
  D8():
    deopt 35 [r20];
  L27():
    st display = r20;
    format1 = ldf format;
    check L28() else D9();
  D9():
    deopt 38 [];
  L28():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p6 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c4 = ldf c in base;
      r24 = dyn c4("email");
      goto L0(r24);
    L2():
      r22 = dyn base3("email");
      goto L0(r22);
    };
    p7 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      list = ldf list in base;
      r28 = dyn list(FALSE);
      goto L0(r28);
    L2():
      r26 = dyn base4[email](FALSE);
      goto L0(r26);
    };
    r30 = dyn format1[, include, collapse](p5, p6, p7);
    check L29() else D10();
  D10():
    deopt 44 [r30];
  L29():
    st address = r30;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L30() else L31();
  L6(r32):
    c5 = `as.logical`(r32);
    if c5 then L35() else L7();
  L30():
    grepl = ldf grepl;
    check L32() else D11();
  L31():
    r31 = dyn base5(<lang `<-`(ind, grepl(",", display))>);
    goto L6(r31);
  D11():
    deopt 49 [];
  L7():
    goto L9();
  L9():
    paste = ldf paste;
    check L43() else D17();
  L32():
    p8 = prom<V +>{
      display = ld display;
      display1 = force? display;
      checkMissing(display1);
      return display1;
    };
    r34 = dyn grepl(",", p8);
    check L33() else D12();
  L35():
    sprintf = ldf sprintf;
    check L36() else D14();
  D12():
    deopt 52 [r34];
  D14():
    deopt 57 [];
  D17():
    deopt 69 [];
  L33():
    st ind = r34;
    any = ldf any in base;
    r35 = dyn any(r34);
    check L34() else D13();
  L36():
    p10 = prom<V +>{
      gsub = ldf gsub;
      p9 = prom<V +>{
        display2 = ld display;
        display3 = force? display2;
        checkMissing(display3);
        c6 = `is.object`(display3);
        if c6 then L1() else L2(display3);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", display3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(display5):
        ind = ld ind;
        ind1 = force? ind;
        __ = ldf `[` in base;
        r36 = dyn __(display5, ind1);
        goto L0(r36);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r38 = dyn gsub[, , , fixed]("\"", "\\\"", p9, TRUE);
      return r38;
    };
    r40 = dyn sprintf("\"%s\"", p10);
    check L37() else D15();
  L43():
    p11 = prom<V +>{
      display6 = ld display;
      display7 = force? display6;
      checkMissing(display7);
      return display7;
    };
    p12 = prom<V +>{
      address = ld address;
      address1 = force? address;
      checkMissing(address1);
      return address1;
    };
    r49 = dyn paste(p11, p12);
    check L44() else D18();
  D13():
    deopt 55 [r35];
  D15():
    deopt 60 [r40];
  D18():
    deopt 72 [r49];
  L34():
    goto L6(r35);
  L37():
    l = ld display;
    c7 = `is.object`(l);
    if c7 then L38() else L39(r40, l);
  L44():
    popenv;
    return r49;
  L8(r44, dx3):
    st display = dx3;
    goto L9();
  L38():
    dr2 = tryDispatchBuiltin.0("[<-", l, r40);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(r40, dr2);
  L39(r42, l2):
    ind2 = ld ind;
    check L41() else D16();
  D16():
    deopt 62 [r42, l2, r40, ind2];
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(r40, dx2);
  L41():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r45 = dyn ___(l2, r40, ind3);
    goto L8(r42, r45);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c7:L, reg r5:V, reg e5:*, reg e6:V, reg c8:L, reg c10:L, reg e8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c12:L, reg dx3:V, reg r6:V, reg c13:V, reg r7:V, reg c14:L, reg c15:V, reg c17:L, reg c19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c22:L, reg r9:V, reg e9:*, reg e10:V, reg c23:L, reg c25:L, reg e12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c27:L, reg dx5:V, reg r10:V, reg c28:V, reg r11:V, reg c29:L, reg c30:V, reg c32:L, reg c34:V, reg _in_:cls, reg e13:*, reg e14:V, reg c35:L, reg e16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg p:p(V +), reg r14:V, reg c36:L, reg c37:V |
    mkenv;
    st e = e;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L1(c2) else L13();
  L6():
    e1 = ld e;
    check L8() else D0();
  L7():
    r = dyn base(<lang `$`(e, given)>);
    goto L0(r);
  D0():
    deopt 1 [e1];
  L1(c3):
    c17 = `as.logical`(c3);
    if c17 then L22() else L3(c17);
  L8():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L10() else L11(e2);
  L13():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L2(c7, r5):
    r7 = `!`(r5);
    c14 = `as.logical`(r7);
    c15 = `||`(c7, c14);
    goto L1(c15);
  L3(c19):
    c32 = `as.logical`(c19);
    if c32 then L31() else L5(c32);
  L9(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L10():
    dr = tryDispatchBuiltin.1("$", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(e4):
    r2 = `$`(e4, <sym given>);
    goto L9(r2);
  L14():
    e5 = ld e;
    check L16() else D1();
  L15():
    r4 = dyn base1(<lang `$`(e, family)>);
    goto L2(c2, r4);
  L22():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D1():
    deopt 7 [c2, e5];
  L4(c22, r9):
    r11 = `!`(r9);
    c29 = `as.logical`(r11);
    c30 = `&&`(c22, c29);
    goto L3(c30);
  L5(c34):
    popenv;
    return c34;
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L16():
    e6 = force? e5;
    checkMissing(e6);
    c8 = `is.object`(e6);
    if c8 then L18() else L19(c2, e6);
  L23():
    e9 = ld e;
    check L25() else D2();
  L24():
    r8 = dyn base2(<lang `$`(e, email)>);
    goto L4(c17, r8);
  L31():
    _in_ = ldf `%in%`;
    check L32() else D3();
  D2():
    deopt 14 [c17, e9];
  D3():
    deopt 21 [c32];
  L17(c12, dx3):
    c13 = `==`(dx3, NULL);
    goto L2(c12, c13);
  L18():
    dr2 = tryDispatchBuiltin.1("$", e6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(c2, dr2);
  L19(c10, e8):
    r6 = `$`(e8, <sym family>);
    goto L17(c10, r6);
  L25():
    e10 = force? e9;
    checkMissing(e10);
    c23 = `is.object`(e10);
    if c23 then L27() else L28(c17, e10);
  L32():
    p = prom<V +>{
      e13 = ld e;
      e14 = force? e13;
      checkMissing(e14);
      c35 = `is.object`(e14);
      if c35 then L1() else L2(e14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", e14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(e16):
      r12 = `$`(e16, <sym role>);
      goto L0(r12);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r14 = dyn _in_("cre", p);
    check L33() else D4();
  D4():
    deopt 24 [c32, r14];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(c2, dx2);
  L26(c27, dx5):
    c28 = `==`(dx5, NULL);
    goto L4(c27, c28);
  L27():
    dr4 = tryDispatchBuiltin.1("$", e10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(c17, dr4);
  L28(c25, e12):
    r10 = `$`(e12, <sym email>);
    goto L26(c25, r10);
  L33():
    c36 = `as.logical`(r14);
    c37 = `&&`(c32, c36);
    goto L5(c37);
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L26(c17, dx4);
  }
}