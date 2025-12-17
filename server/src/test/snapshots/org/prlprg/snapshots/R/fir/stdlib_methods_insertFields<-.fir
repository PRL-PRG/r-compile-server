fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3344735525;
    st `insertFields<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3344735525(fieldList, value) {
  (reg fieldList:*, reg value:*) -+> V { var fieldList:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg newNames:*, reg newNames1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg fieldList1:*, reg fieldList2:V, reg names1:cls, reg r7:V, reg match:cls, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg hasFields:*, reg hasFields1:V, reg any:cls, reg r12:V, reg c:L, reg newNames2:*, reg newNames3:V, reg c1:L, reg newNames5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg hasFields2:*, reg hasFields3:V, reg __:cls, reg r13:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg i7:I, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg i10:I, reg r17:V, reg fieldList3:*, reg fieldList4:V, reg c3:L, reg i12:I, reg fieldList6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg field:*, reg field1:V, reg __1:cls, reg r18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg i17:I, reg r20:V, reg extends:cls, reg value3:*, reg value4:V, reg c4:L, reg value6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg field2:*, reg field3:V, reg __2:cls, reg r21:V, reg p:p(V +), reg r23:V, reg c5:cls, reg r24:V, reg match1:cls, reg r25:V, reg is_na:cls, reg r26:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg value7:*, reg value8:V, reg c7:L, reg value10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg field4:*, reg field5:V, reg __3:cls, reg r27:V, reg p1:p(V +), reg sQuote:cls, reg field6:*, reg field7:V, reg p2:p(V +), reg r30:V, reg p3:p(V +), reg fieldList7:*, reg fieldList8:V, reg c8:L, reg fieldList10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg field8:*, reg field9:V, reg __4:cls, reg r32:V, reg p4:p(V +), reg r34:V, reg p5:p(V +), reg r36:V, reg i20:I, reg value11:*, reg value12:V, reg l1:*, reg c9:L, reg value14:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg newNames6:*, reg newNames7:V, reg ___:cls, reg r38:V, reg fieldList11:*, reg fieldList12:V |
    mkenv;
    st fieldList = fieldList;
    st value = value;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    st newNames = r1;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L16():
    value1 = ld value;
    check L18() else D0();
  L17():
    r = dyn base(<sym value>);
    goto L0(r);
  D0():
    deopt 2 [value1];
  L1(r4):
    r9 = `>`(r4, 0.0);
    st hasFields = r9;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L18():
    value2 = force? value1;
    checkMissing(value2);
    names = ldf names in base;
    r2 = dyn names(value2);
    check L19() else D1();
  L20():
    newNames = ld newNames;
    check L22() else D2();
  L21():
    r3 = dyn base1(<sym newNames>, <lang names(fieldList)>, 0.0);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [newNames];
  L3(r11):
    c = `as.logical`(r11);
    if c then L32() else L4();
  L19():
    goto L0(r2);
  L22():
    newNames1 = force? newNames;
    checkMissing(newNames1);
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L28():
    hasFields = ld hasFields;
    check L30() else D6();
  L29():
    r10 = dyn base3(<sym hasFields>);
    goto L3(r10);
  D6():
    deopt 26 [hasFields];
  L2(r6):
    match = ldf match in base;
    r8 = dyn match(newNames1, r6, 0.0, NULL);
    check L27() else D5();
  L4():
    goto L14();
  L14():
    value11 = ld value;
    check L60() else D19();
  L23():
    fieldList1 = ld fieldList;
    check L25() else D3();
  L24():
    r5 = dyn base2(<sym fieldList>);
    goto L2(r5);
  L30():
    hasFields1 = force? hasFields;
    checkMissing(hasFields1);
    any = ldf any in base;
    r12 = dyn any(hasFields1);
    check L31() else D7();
  L32():
    newNames2 = ld newNames;
    check L33() else D8();
  D3():
    deopt 13 [fieldList1];
  D5():
    deopt 20 [r8];
  D7():
    deopt 29 [r12];
  D8():
    deopt 30 [newNames2];
  D19():
    deopt 72 [value11];
  L25():
    fieldList2 = force? fieldList1;
    checkMissing(fieldList2);
    names1 = ldf names in base;
    r7 = dyn names1(fieldList2);
    check L26() else D4();
  L27():
    goto L1(r8);
  L31():
    goto L3(r12);
  L33():
    newNames3 = force? newNames2;
    checkMissing(newNames3);
    c1 = `is.object`(newNames3);
    if c1 then L34() else L35(newNames3);
  L60():
    value12 = force? value11;
    checkMissing(value12);
    l1 = ld fieldList;
    c9 = `is.object`(l1);
    if c9 then L61() else L62(value12, l1);
  D4():
    deopt 16 [r7];
  L5(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L6(i);
  L15(dx11):
    st fieldList = dx11;
    fieldList11 = ld fieldList;
    check L65() else D21();
  L26():
    goto L2(r7);
  L34():
    dr = tryDispatchBuiltin.1("[", newNames3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(newNames5):
    hasFields2 = ld hasFields;
    check L37() else D9();
  L61():
    dr10 = tryDispatchBuiltin.0("[<-", l1, value12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L63() else L62(value12, dr10);
  L62(value14, l3):
    newNames6 = ld newNames;
    check L64() else D20();
  D9():
    deopt 32 [newNames5, hasFields2];
  D20():
    deopt 75 [value14, l3, value12, newNames6];
  D21():
    deopt 79 [fieldList11];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L38() else L13();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L37():
    hasFields3 = force? hasFields2;
    __ = ldf `[` in base;
    r13 = dyn __(newNames5, hasFields3);
    goto L5(r13);
  L63():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx10);
  L64():
    newNames7 = force? newNames6;
    ___ = ldf `[<-` in base;
    r38 = dyn ___(l3, value12, newNames7);
    goto L15(r38);
  L65():
    fieldList12 = force? fieldList11;
    checkMissing(fieldList12);
    popenv;
    return fieldList12;
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st field = x;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L38():
    goto L14();
  L7(i7, r15):
    c6 = `as.logical`(r15);
    if c6 then L55() else L11();
  L39():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L40():
    r14 = dyn base4(<lang match(`[[`(fieldList, field), c(extends(`[[`(value, field)), "ANY"))>);
    goto L7(i2, r14);
  L8(i10, r17):
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(r17);
    check L54() else D16();
  L11():
    goto L12(i7);
  L12(i20):
    goto L6(i20);
  L41():
    fieldList3 = ld fieldList;
    check L43() else D10();
  L42():
    r16 = dyn base5(<lang `[[`(fieldList, field)>, <lang c(extends(`[[`(value, field)), "ANY")>);
    goto L8(i2, r16);
  L55():
    stop = ldf stop;
    check L56() else D17();
  D10():
    deopt 39 [i2, fieldList3];
  D16():
    deopt 58 [i10, r26];
  D17():
    deopt 60 [i7];
  L43():
    fieldList4 = force? fieldList3;
    checkMissing(fieldList4);
    c3 = `is.object`(fieldList4);
    if c3 then L44() else L45(i2, fieldList4);
  L54():
    goto L7(i10, r26);
  L56():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        value7 = ld value;
        value8 = force? value7;
        checkMissing(value8);
        c7 = `is.object`(value8);
        if c7 then L1() else L2(value8);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[[", value8);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(value10):
        field4 = ld field;
        field5 = force? field4;
        __3 = ldf `[[` in base;
        r27 = dyn __3(value10, field5);
        goto L0(r27);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          field6 = ld field;
          field7 = force? field6;
          checkMissing(field7);
          return field7;
        };
        r30 = dyn sQuote(p2);
        return r30;
      };
      p4 = prom<V +>{
        fieldList7 = ld fieldList;
        fieldList8 = force? fieldList7;
        checkMissing(fieldList8);
        c8 = `is.object`(fieldList8);
        if c8 then L1() else L2(fieldList8);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[[", fieldList8);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(fieldList10):
        field8 = ld field;
        field9 = force? field8;
        __4 = ldf `[[` in base;
        r32 = dyn __4(fieldList10, field9);
        goto L0(r32);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r34 = dyn gettextf("the overriding class (\"%s\") of field %s is not a subclass of the existing field definition (\"%s\")", p1, p3, p4);
      return r34;
    };
    r36 = dyn stop[, domain](p5, NA_LGL);
    check L57() else D18();
  D18():
    deopt 64 [i7, r36];
  L9(i14, dx3):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L44():
    dr2 = tryDispatchBuiltin.1("[[", fieldList4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(i2, dr2);
  L45(i12, fieldList6):
    field = ld field;
    check L47() else D11();
  L57():
    goto L12(i7);
  D11():
    deopt 41 [i12, fieldList6, field];
  L10(i17, r20):
    match1 = ldf match in base;
    r25 = dyn match1(dx3, r20, NA_INT, NULL);
    check L53() else D15();
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(i2, dx2);
  L47():
    field1 = force? field;
    __1 = ldf `[[` in base;
    r18 = dyn __1(fieldList6, field1);
    goto L9(i12, r18);
  L48():
    extends = ldf extends;
    check L50() else D12();
  L49():
    r19 = dyn base6(<lang extends(`[[`(value, field))>, "ANY");
    goto L10(i14, r19);
  D12():
    deopt 47 [i14];
  D15():
    deopt 56 [i17, r25];
  L50():
    p = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      c4 = `is.object`(value4);
      if c4 then L1() else L2(value4);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", value4);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(value6):
      field2 = ld field;
      field3 = force? field2;
      __2 = ldf `[[` in base;
      r21 = dyn __2(value6, field3);
      goto L0(r21);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r23 = dyn extends(p);
    check L51() else D13();
  L53():
    goto L8(i17, r25);
  D13():
    deopt 49 [i14, r23];
  L51():
    c5 = ldf c in base;
    r24 = dyn c5(r23, "ANY");
    check L52() else D14();
  D14():
    deopt 52 [i14, r24];
  L52():
    goto L10(i14, r24);
  }
}