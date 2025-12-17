fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner418102221;
    st `.setS3MethodsOn` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner418102221(classDef) {
  (reg classDef:*) -+> V { var classDef:*, reg extends:cls, reg classDef1:*, reg classDef2:V, reg p:p(V +), reg r1:V, reg __:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg slots:*, reg slots1:V, reg names:cls, reg r9:V, reg match:cls, reg r10:V, reg is_na:cls, reg r11:V, reg c:L, reg __1:cls, reg r12:V, reg c1:L, reg r14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg l:*, reg c2:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg r16:V, reg slots2:*, reg slots3:V, reg l3:*, reg ___:cls, reg r17:V, reg __2:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg proto:*, reg proto1:V, reg c3:V, reg c4:L, reg defaultPrototype:cls, reg r21:V, reg ext:*, reg ext1:V, reg l4:*, reg attr__:cls, reg r23:V, reg proto2:*, reg proto3:V, reg l5:*, reg ___1:cls, reg r24:V, reg classDef3:*, reg classDef4:V |
    mkenv;
    st classDef = classDef;
    extends = ldf extends;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      classDef1 = ld classDef;
      classDef2 = force? classDef1;
      checkMissing(classDef2);
      return classDef2;
    };
    r1 = dyn extends(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st ext = r1;
    __ = ldf `@` in base;
    r2 = dyn __(<sym classDef>, <sym slots>);
    st slots = r2;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r4):
    c = `as.logical`(r4);
    if c then L20() else L3();
  L10():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L11():
    r3 = dyn base(<lang match(".S3Class", names(slots))>);
    goto L0(r3);
  L1(r6):
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(r6);
    check L19() else D5();
  L3():
    goto L4();
  L4():
    __2 = ldf `@` in base;
    r18 = dyn __2(<sym classDef>, <sym prototype>);
    st proto = r18;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L12():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L13():
    r5 = dyn base1(".S3Class", <lang names(slots)>);
    goto L1(r5);
  L20():
    __1 = ldf `@` in base;
    r12 = dyn __1(<lang getClass("oldClass")>, <sym slots>);
    c1 = `is.object`(r12);
    if c1 then L22() else L23(r12);
  D5():
    deopt 24 [r11];
  L2(r8):
    match = ldf match in base;
    r10 = dyn match(".S3Class", r8, NA_INT, NULL);
    check L18() else D4();
  L5(r20):
    c4 = `as.logical`(r20);
    if c4 then L36() else L6();
  L14():
    slots = ld slots;
    check L16() else D2();
  L15():
    r7 = dyn base2(<sym slots>);
    goto L2(r7);
  L19():
    goto L0(r11);
  L21(dx1):
    l = ld slots;
    c2 = `is.object`(l);
    if c2 then L26() else L27(dx1, l);
  L22():
    dr = tryDispatchBuiltin.1("$", r12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(r14):
    r15 = `$`(r14, <sym .S3Class>);
    goto L21(r15);
  L33():
    proto = ld proto;
    check L35() else D9();
  L34():
    r19 = dyn base3(<sym proto>);
    goto L5(r19);
  D2():
    deopt 15 [slots];
  D4():
    deopt 22 [r10];
  D9():
    deopt 45 [proto];
  L6():
    goto L7();
  L7():
    ext = ld ext;
    check L40() else D12();
  L16():
    slots1 = force? slots;
    checkMissing(slots1);
    names = ldf names in base;
    r9 = dyn names(slots1);
    check L17() else D3();
  L18():
    goto L1(r10);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L25(dx7):
    st slots = dx7;
    slots2 = ld slots;
    check L29() else D6();
  L26():
    dr2 = tryDispatchBuiltin.0("$<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dx1, dr2);
  L27(dx3, l2):
    r16 = `$<-`(l2, <sym .S3Class>, dx1);
    goto L25(r16);
  L35():
    proto1 = force? proto;
    checkMissing(proto1);
    c3 = `==`(proto1, NULL);
    goto L5(c3);
  L36():
    defaultPrototype = ldf defaultPrototype;
    check L37() else D10();
  D3():
    deopt 18 [r9];
  D6():
    deopt 31 [slots2];
  D10():
    deopt 49 [];
  D12():
    deopt 54 [ext];
  L17():
    goto L2(r9);
  L28():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx5);
  L29():
    slots3 = force? slots2;
    checkMissing(slots3);
    l3 = ld classDef;
    ___ = ldf `@<-`;
    check L30() else D7();
  L37():
    r21 = dyn defaultPrototype();
    check L38() else D11();
  L40():
    ext1 = force? ext;
    checkMissing(ext1);
    l4 = ld proto;
    attr__ = ldf `attr<-`;
    check L41() else D13();
  D7():
    deopt 34 [slots3, l3, slots3];
  D11():
    deopt 50 [r21];
  D13():
    deopt 57 [ext1, l4, ext1];
  L30():
    r17 = dyn ___(l3, NULL, "slots", slots3);
    check L31() else D8();
  L38():
    st proto = r21;
    goto L7();
  L41():
    r23 = dyn attr__(l4, NULL, ".S3Class", ext1);
    check L42() else D14();
  D8():
    deopt 37 [slots3, r17];
  D14():
    deopt 60 [ext1, r23];
  L31():
    st classDef = r17;
    goto L4();
  L42():
    st proto = r23;
    proto2 = ld proto;
    check L43() else D15();
  D15():
    deopt 62 [proto2];
  L43():
    proto3 = force? proto2;
    checkMissing(proto3);
    l5 = ld classDef;
    ___1 = ldf `@<-`;
    check L44() else D16();
  D16():
    deopt 65 [proto3, l5, proto3];
  L44():
    r24 = dyn ___1(l5, NULL, "prototype", proto3);
    check L45() else D17();
  D17():
    deopt 68 [proto3, r24];
  L45():
    st classDef = r24;
    classDef3 = ld classDef;
    check L46() else D18();
  D18():
    deopt 70 [classDef3];
  L46():
    classDef4 = force? classDef3;
    checkMissing(classDef4);
    popenv;
    return classDef4;
  }
}