fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner266774232;
    st makeClassRepresentation = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner266774232(name, slots, superClasses, prototype, package, validity, access, version, sealed, virtual, where) {
  (reg name:*, reg slots:*, reg superClasses:*, reg prototype:*, reg package:*, reg validity:*, reg access:*, reg version:*, reg sealed:*, reg virtual:*, reg where:*) -+> V { var name:*, var slots:*, reg slots_isMissing:L, reg slots_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var superClasses:*, reg superClasses_isMissing:L, reg superClasses_orDefault:*, reg character:cls, reg r4:V, reg p1:p(V +), var prototype:*, reg prototype_isMissing:L, reg prototype_orDefault:*, var package:*, var validity:*, reg validity_isMissing:L, reg validity_orDefault:*, var access:*, reg access_isMissing:L, reg access_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg list1:cls, reg r8:V, reg p2:p(V +), var version:*, reg version_isMissing:L, reg version_orDefault:*, reg _newExternalptr:cls, reg r10:V, reg p3:p(V +), var sealed:*, reg sealed_isMissing:L, reg sealed_orDefault:*, var virtual:*, reg virtual_isMissing:L, reg virtual_orDefault:*, var where:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg _in_:cls, reg superClasses1:*, reg superClasses2:V, reg p4:p(V +), reg _AbnormalTypes:*, reg _AbnormalTypes1:V, reg p5:p(V +), reg r16:V, reg any:cls, reg r17:V, reg c:L, reg _addAbnormalDataType:cls, reg superClasses3:*, reg superClasses4:V, reg p6:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg prototype1:*, reg prototype2:V, reg c1:V, reg r23:V, reg c2:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg c7:L, reg r25:V, reg slots1:*, reg slots2:V, reg length:cls, reg r26:V, reg c8:L, reg c9:V, reg c11:L, reg c12:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg c16:L, reg r28:V, reg superClasses5:*, reg superClasses6:V, reg length1:cls, reg r29:V, reg c17:L, reg c18:V, reg c20:L, reg reconcilePropertiesAndPrototype:cls, reg name1:*, reg name2:V, reg p7:p(V +), reg slots3:*, reg slots4:V, reg p8:p(V +), reg prototype3:*, reg prototype4:V, reg p9:p(V +), reg superClasses7:*, reg superClasses8:V, reg p10:p(V +), reg where1:*, reg where2:V, reg p11:p(V +), reg r35:V, reg pp:*, reg pp1:V, reg c21:L, reg pp3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r36:V, reg pp4:*, reg pp5:V, reg c22:L, reg pp7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg list2:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg package1:*, reg package2:V, reg nzchar:cls, reg r43:V, reg c23:L, reg package3:*, reg package4:V, reg l:*, reg packageSlot__:cls, reg r44:V, reg superClasses9:*, reg superClasses10:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x:V, reg is:cls, reg what:*, reg what1:V, reg p12:p(V +), reg r46:V, reg c25:L, reg what2:*, reg what3:V, reg i7:I, reg what4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg i10:I, reg r48:V, reg packageSlot:cls, reg what5:*, reg what6:V, reg p13:p(V +), reg r50:V, reg c26:V, reg c27:L, reg getClass:cls, reg what7:*, reg what8:V, reg p14:p(V +), reg where3:*, reg where4:V, reg p15:p(V +), reg r53:V, reg getClass1:cls, reg what9:*, reg what10:V, reg p16:p(V +), reg r55:V, reg __:cls, reg r56:V, reg makeExtends:cls, reg name3:*, reg name4:V, reg p17:p(V +), reg slots5:*, reg slots6:V, reg p18:p(V +), reg whatClassDef:*, reg whatClassDef1:V, reg p19:p(V +), reg package6:*, reg package7:V, reg p20:p(V +), reg r61:V, reg l2:*, reg c28:L, reg i14:I, reg r63:V, reg l4:*, reg dr4:V, reg dc2:L, reg dx5:V, reg i16:I, reg dx6:V, reg what11:*, reg what12:V, reg ____:cls, reg r66:V, reg _makeValidityMethod:cls, reg name5:*, reg name6:V, reg p21:p(V +), reg validity1:*, reg validity2:V, reg p22:p(V +), reg r69:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg r71:V, reg virtual1:*, reg virtual2:V, reg is_na:cls, reg r72:V, reg c29:L, reg testVirtual:cls, reg slots7:*, reg slots8:V, reg p23:p(V +), reg contains:*, reg contains1:V, reg p24:p(V +), reg prototype5:*, reg prototype6:V, reg p25:p(V +), reg where5:*, reg where6:V, reg p26:p(V +), reg r77:V, reg virtual3:*, reg virtual4:V, reg c30:L, reg c32:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r78:V, reg c35:L, reg r79:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r80:V, reg c38:L, reg r81:V, reg superClasses11:*, reg superClasses12:V, reg match:cls, reg r82:V, reg is_na1:cls, reg r83:V, reg r84:V, reg c39:L, reg c40:V, reg c42:L, reg l5:*, reg c43:L, reg r86:dots, reg l7:*, reg dr6:V, reg dc3:L, reg dx7:V, reg r88:dots, reg dx8:V, reg ____1:cls, reg r89:V, reg r90:dots, reg sym12:cls, reg base12:cls, reg guard12:L, reg r92:V, reg r93:V, reg prototype7:*, reg prototype8:V, reg c44:V, reg r94:V, reg c45:L, reg c47:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r95:V, reg c50:L, reg r96:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r97:V, reg c53:L, reg r98:V, reg name7:*, reg name8:V, reg _BasicClasses:*, reg _BasicClasses1:V, reg match1:cls, reg r99:V, reg is_na2:cls, reg r100:V, reg c54:L, reg c55:V, reg c57:L, reg _asS4:cls, reg prototype9:*, reg prototype10:V, reg p27:p(V +), reg r102:V, reg _in_1:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r104:V, reg r105:V, reg slots9:*, reg slots10:V, reg names:cls, reg r106:V, reg p28:p(V +), reg r108:V, reg c58:L, reg _addS3Class:cls, reg name9:*, reg name10:V, reg p29:p(V +), reg prototype11:*, reg prototype12:V, reg p30:p(V +), reg contains2:*, reg contains3:V, reg p31:p(V +), reg where7:*, reg where8:V, reg p32:p(V +), reg r113:V, reg newClassRepresentation:cls, reg name11:*, reg name12:V, reg p33:p(V +), reg slots11:*, reg slots12:V, reg p34:p(V +), reg contains4:*, reg contains5:V, reg p35:p(V +), reg prototype13:*, reg prototype14:V, reg p36:p(V +), reg virtual5:*, reg virtual6:V, reg p37:p(V +), reg validity3:*, reg validity4:V, reg p38:p(V +), reg access1:*, reg access2:V, reg p39:p(V +), reg package8:*, reg package9:V, reg p40:p(V +), reg version1:*, reg version2:V, reg p41:p(V +), reg sealed1:*, reg sealed2:V, reg p42:p(V +), reg r125:V |
    mkenv;
    st name = name;
    slots_isMissing = missing.0(slots);
    if slots_isMissing then L0() else L1(slots);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(slots_orDefault):
    st slots = slots_orDefault;
    superClasses_isMissing = missing.0(superClasses);
    if superClasses_isMissing then L2() else L3(superClasses);
  L2():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    goto L3(p1);
  L3(superClasses_orDefault):
    st superClasses = superClasses_orDefault;
    prototype_isMissing = missing.0(prototype);
    if prototype_isMissing then L4(NULL) else L4(prototype);
  L4(prototype_orDefault):
    st prototype = prototype_orDefault;
    st package = package;
    validity_isMissing = missing.0(validity);
    if validity_isMissing then L5(NULL) else L5(validity);
  L5(validity_orDefault):
    st validity = validity_orDefault;
    access_isMissing = missing.0(access);
    if access_isMissing then L6() else L7(access);
  L6():
    p2 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      list1 = ldf list in base;
      r8 = dyn list1();
      goto L0(r8);
    L2():
      r6 = dyn base1();
      goto L0(r6);
    };
    goto L7(p2);
  L7(access_orDefault):
    st access = access_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L8() else L9(version);
  L8():
    p3 = prom<V +>{
      _newExternalptr = ldf `.newExternalptr`;
      r10 = dyn _newExternalptr();
      return r10;
    };
    goto L9(p3);
  L9(version_orDefault):
    st version = version_orDefault;
    sealed_isMissing = missing.0(sealed);
    if sealed_isMissing then L10(FALSE) else L10(sealed);
  L10(sealed_orDefault):
    st sealed = sealed_orDefault;
    virtual_isMissing = missing.0(virtual);
    if virtual_isMissing then L11(NA_LGL) else L11(virtual);
  L11(virtual_orDefault):
    st virtual = virtual_orDefault;
    st where = where;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L12(r13):
    c = `as.logical`(r13);
    if c then L55() else L13();
  L50():
    _in_ = ldf `%in%`;
    check L52() else D0();
  L51():
    r12 = dyn base2(<lang `%in%`(superClasses, .AbnormalTypes)>);
    goto L12(r12);
  D0():
    deopt 3 [];
  L13():
    goto L14();
  L14():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L52():
    p4 = prom<V +>{
      superClasses1 = ld superClasses;
      superClasses2 = force? superClasses1;
      checkMissing(superClasses2);
      return superClasses2;
    };
    p5 = prom<V +>{
      _AbnormalTypes = ld `.AbnormalTypes`;
      _AbnormalTypes1 = force? _AbnormalTypes;
      checkMissing(_AbnormalTypes1);
      return _AbnormalTypes1;
    };
    r16 = dyn _in_(p4, p5);
    check L53() else D1();
  L55():
    _addAbnormalDataType = ldf `.addAbnormalDataType`;
    check L56() else D3();
  D1():
    deopt 6 [r16];
  D3():
    deopt 10 [];
  L15(r22):
    r23 = `!`(r22);
    c2 = `as.logical`(r23);
    if c2 then L16(c2) else L62();
  L53():
    any = ldf any in base;
    r17 = dyn any(r16);
    check L54() else D2();
  L56():
    p6 = prom<V +>{
      superClasses3 = ld superClasses;
      superClasses4 = force? superClasses3;
      checkMissing(superClasses4);
      return superClasses4;
    };
    r19 = dyn _addAbnormalDataType(p6);
    check L57() else D4();
  L59():
    prototype1 = ld prototype;
    check L61() else D5();
  L60():
    r21 = dyn base3(<sym prototype>);
    goto L15(r21);
  D2():
    deopt 8 [r17];
  D4():
    deopt 12 [r19];
  D5():
    deopt 17 [prototype1];
  L16(c3):
    c11 = `as.logical`(c3);
    if c11 then L18(c11) else L68();
  L54():
    goto L12(r17);
  L57():
    st superClasses = r19;
    goto L14();
  L61():
    prototype2 = force? prototype1;
    checkMissing(prototype2);
    c1 = `==`(prototype2, NULL);
    goto L15(c1);
  L62():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L17(c7, r25):
    c8 = `as.logical`(r25);
    c9 = `||`(c7, c8);
    goto L16(c9);
  L18(c12):
    c20 = `as.logical`(c12);
    if c20 then L74() else L20();
  L63():
    slots1 = ld slots;
    check L65() else D6();
  L64():
    r24 = dyn base4(<sym slots>);
    goto L17(c2, r24);
  L68():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  D6():
    deopt 23 [c2, slots1];
  L19(c16, r28):
    c17 = `as.logical`(r28);
    c18 = `||`(c16, c17);
    goto L18(c18);
  L20():
    goto L21();
  L21():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L88() else L89();
  L65():
    slots2 = force? slots1;
    checkMissing(slots2);
    length = ldf length in base;
    r26 = dyn length(slots2);
    check L66() else D7();
  L69():
    superClasses5 = ld superClasses;
    check L71() else D8();
  L70():
    r27 = dyn base5(<sym superClasses>);
    goto L19(c11, r27);
  L74():
    reconcilePropertiesAndPrototype = ldf reconcilePropertiesAndPrototype;
    check L75() else D10();
  D7():
    deopt 26 [c2, r26];
  D8():
    deopt 30 [c11, superClasses5];
  D10():
    deopt 36 [];
  L22(r39):
    st contains = r39;
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  L66():
    goto L17(c2, r26);
  L71():
    superClasses6 = force? superClasses5;
    checkMissing(superClasses6);
    length1 = ldf length in base;
    r29 = dyn length1(superClasses6);
    check L72() else D9();
  L75():
    p7 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p8 = prom<V +>{
      slots3 = ld slots;
      slots4 = force? slots3;
      checkMissing(slots4);
      return slots4;
    };
    p9 = prom<V +>{
      prototype3 = ld prototype;
      prototype4 = force? prototype3;
      checkMissing(prototype4);
      return prototype4;
    };
    p10 = prom<V +>{
      superClasses7 = ld superClasses;
      superClasses8 = force? superClasses7;
      checkMissing(superClasses8);
      return superClasses8;
    };
    p11 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r35 = dyn reconcilePropertiesAndPrototype(p7, p8, p9, p10, p11);
    check L76() else D11();
  L88():
    list2 = ldf list in base;
    r40 = dyn list2();
    check L90() else D14();
  L89():
    r38 = dyn base6();
    goto L22(r38);
  D9():
    deopt 33 [c11, r29];
  D11():
    deopt 42 [r35];
  D14():
    deopt 57 [r40];
  L23(r42):
    c23 = `as.logical`(r42);
    if c23 then L95() else L24();
  L72():
    goto L19(c11, r29);
  L76():
    st pp = r35;
    pp = ld pp;
    check L77() else D12();
  L90():
    goto L22(r40);
  L91():
    package1 = ld package;
    check L93() else D15();
  L92():
    r41 = dyn base7(<sym package>);
    goto L23(r41);
  D12():
    deopt 44 [pp];
  D15():
    deopt 61 [package1];
  L24():
    goto L25();
  L25():
    superClasses9 = ld superClasses;
    check L100() else D20();
  L77():
    pp1 = force? pp;
    checkMissing(pp1);
    c21 = `is.object`(pp1);
    if c21 then L79() else L80(pp1);
  L93():
    package2 = force? package1;
    checkMissing(package2);
    nzchar = ldf nzchar in base;
    r43 = dyn nzchar(package2);
    check L94() else D16();
  L95():
    package3 = ld package;
    check L96() else D17();
  D16():
    deopt 64 [r43];
  D17():
    deopt 65 [package3];
  D20():
    deopt 74 [superClasses9];
  L78(dx1):
    st slots = dx1;
    pp4 = ld pp;
    check L82() else D13();
  L79():
    dr = tryDispatchBuiltin.1("$", pp1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L81() else L80(dr);
  L80(pp3):
    r36 = `$`(pp3, <sym properties>);
    goto L78(r36);
  L94():
    goto L23(r43);
  L96():
    package4 = force? package3;
    checkMissing(package4);
    l = ld name;
    packageSlot__ = ldf `packageSlot<-`;
    check L97() else D18();
  L100():
    superClasses10 = force? superClasses9;
    checkMissing(superClasses10);
    s = toForSeq(superClasses10);
    l1 = length(s);
    i = 0;
    goto L26(i);
  D13():
    deopt 48 [pp4];
  D18():
    deopt 68 [package4, l, package4];
  L26(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l1, i2);
    if c24 then L101() else L32();
  L81():
    dx = getTryDispatchBuiltinValue(dr);
    goto L78(dx);
  L82():
    pp5 = force? pp4;
    checkMissing(pp5);
    c22 = `is.object`(pp5);
    if c22 then L84() else L85(pp5);
  L97():
    r44 = dyn packageSlot__(l, NULL, package4);
    check L98() else D19();
  D19():
    deopt 70 [package4, r44];
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    is = ldf is;
    check L102() else D21();
  L83(dx3):
    st prototype = dx3;
    goto L21();
  L84():
    dr2 = tryDispatchBuiltin.1("$", pp5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L86() else L85(dr2);
  L85(pp7):
    r37 = `$`(pp7, <sym prototype>);
    goto L83(r37);
  L98():
    st name = r44;
    goto L25();
  L101():
    _makeValidityMethod = ldf `.makeValidityMethod`;
    check L123() else D33();
  D21():
    deopt 77 [i2];
  D33():
    deopt 122 [];
  L86():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L83(dx2);
  L102():
    p12 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    r46 = dyn is(p12, "classRepresentation");
    check L103() else D22();
  L123():
    p21 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p22 = prom<V +>{
      validity1 = ld validity;
      validity2 = force? validity1;
      checkMissing(validity2);
      return validity2;
    };
    r69 = dyn _makeValidityMethod(p21, p22);
    check L124() else D34();
  D22():
    deopt 80 [i2, r46];
  D34():
    deopt 125 [r69];
  L103():
    c25 = `as.logical`(r46);
    if c25 then L104() else L27();
  L124():
    st validity = r69;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L125() else L126();
  L27():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  L28(i7, what4):
    st whatClassDef = what4;
    __ = ldf `@` in base;
    r56 = dyn __(<sym whatClassDef>, <sym className>);
    st what = r56;
    makeExtends = ldf makeExtends;
    check L117() else D30();
  L33(r71):
    c29 = `as.logical`(r71);
    if c29 then L129() else L34();
  L104():
    what2 = ld what;
    check L105() else D23();
  L125():
    virtual1 = ld virtual;
    check L127() else D35();
  L126():
    r70 = dyn base9(<sym virtual>);
    goto L33(r70);
  D23():
    deopt 81 [i2, what2];
  D30():
    deopt 104 [i7];
  D35():
    deopt 129 [virtual1];
  L29(i10, r48):
    c27 = `as.logical`(r48);
    if c27 then L111() else L30();
  L34():
    goto L41();
  L41():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L148() else L149();
  L105():
    what3 = force? what2;
    checkMissing(what3);
    goto L28(i2, what3);
  L107():
    packageSlot = ldf packageSlot;
    check L109() else D24();
  L108():
    r47 = dyn base8(<lang packageSlot(what)>);
    goto L29(i2, r47);
  L117():
    p17 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p18 = prom<V +>{
      slots5 = ld slots;
      slots6 = force? slots5;
      checkMissing(slots6);
      return slots6;
    };
    p19 = prom<V +>{
      whatClassDef = ld whatClassDef;
      whatClassDef1 = force? whatClassDef;
      checkMissing(whatClassDef1);
      return whatClassDef1;
    };
    p20 = prom<V +>{
      package6 = ld package;
      package7 = force? package6;
      checkMissing(package7);
      return package7;
    };
    r61 = dyn makeExtends[, slots, classDef2, package](p17, p18, p19, p20);
    check L118() else D31();
  L127():
    virtual2 = force? virtual1;
    checkMissing(virtual2);
    is_na = ldf `is.na` in base;
    r72 = dyn is_na(virtual2);
    check L128() else D36();
  L129():
    testVirtual = ldf testVirtual;
    check L130() else D37();
  D24():
    deopt 85 [i2];
  D31():
    deopt 112 [i7, r61];
  D36():
    deopt 132 [r72];
  D37():
    deopt 134 [];
  L30():
    getClass1 = ldf getClass;
    check L115() else D28();
  L42(r93):
    r94 = `!`(r93);
    c45 = `as.logical`(r94);
    if c45 then L151() else L43(c45);
  L109():
    p13 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    r50 = dyn packageSlot(p13);
    check L110() else D25();
  L111():
    getClass = ldf getClass;
    check L112() else D26();
  L118():
    l2 = ld contains;
    c28 = `is.object`(l2);
    if c28 then L119() else L120(i7, r61, l2);
  L128():
    goto L33(r72);
  L130():
    p23 = prom<V +>{
      slots7 = ld slots;
      slots8 = force? slots7;
      checkMissing(slots8);
      return slots8;
    };
    p24 = prom<V +>{
      contains = ld contains;
      contains1 = force? contains;
      checkMissing(contains1);
      return contains1;
    };
    p25 = prom<V +>{
      prototype5 = ld prototype;
      prototype6 = force? prototype5;
      checkMissing(prototype6);
      return prototype6;
    };
    p26 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r77 = dyn testVirtual(p23, p24, p25, p26);
    check L131() else D38();
  L148():
    prototype7 = ld prototype;
    check L150() else D43();
  L149():
    r92 = dyn base12(<sym prototype>);
    goto L42(r92);
  D25():
    deopt 87 [i2, r50];
  D26():
    deopt 90 [i10];
  D28():
    deopt 96 [i10];
  D38():
    deopt 139 [r77];
  D43():
    deopt 170 [prototype7];
  L31(i16, dx6):
    st contains = dx6;
    goto L26(i16);
  L43(c47):
    c57 = `as.logical`(c47);
    if c57 then L161() else L46();
  L110():
    c26 = `==`(r50, NULL);
    goto L29(i2, c26);
  L112():
    p14 = prom<V +>{
      what7 = ld what;
      what8 = force? what7;
      checkMissing(what8);
      return what8;
    };
    p15 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r53 = dyn getClass[, where](p14, p15);
    check L113() else D27();
  L115():
    p16 = prom<V +>{
      what9 = ld what;
      what10 = force? what9;
      checkMissing(what10);
      return what10;
    };
    r55 = dyn getClass1(p16);
    check L116() else D29();
  L119():
    dr4 = tryDispatchBuiltin.0("[[<-", l2, r61);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L121() else L120(i7, r61, dr4);
  L120(i14, r63, l4):
    what11 = ld what;
    check L122() else D32();
  L131():
    st virtual = r77;
    virtual3 = ld virtual;
    check L132() else D39();
  L150():
    prototype8 = force? prototype7;
    checkMissing(prototype8);
    c44 = `==`(prototype8, NULL);
    goto L42(c44);
  L151():
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L152() else L153();
  D27():
    deopt 94 [i10, r53];
  D29():
    deopt 98 [i10, r55];
  D32():
    deopt 114 [i14, r63, l4, r61, what11];
  D39():
    deopt 141 [virtual3];
  L44(c50, r96):
    c54 = `as.logical`(r96);
    c55 = `&&`(c50, c54);
    goto L43(c55);
  L46():
    goto L47();
  L47():
    _in_1 = ldf `%in%`;
    check L165() else D50();
  L113():
    goto L28(i10, r53);
  L116():
    goto L28(i10, r55);
  L121():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L31(i7, dx5);
  L122():
    what12 = force? what11;
    ____ = ldf `[[<-` in base;
    r66 = dyn ____(l4, r61, what12);
    goto L31(i14, r66);
  L132():
    virtual4 = force? virtual3;
    checkMissing(virtual4);
    c30 = `as.logical`(virtual4);
    if c30 then L133() else L35(c30);
  L152():
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L154() else L155();
  L153():
    r95 = dyn base13(<lang match(name, .BasicClasses)>);
    goto L44(c45, r95);
  L161():
    _asS4 = ldf `.asS4`;
    check L162() else D48();
  D48():
    deopt 190 [];
  D50():
    deopt 197 [];
  L35(c32):
    c42 = `as.logical`(c32);
    if c42 then L142() else L38();
  L45(c53, r98):
    is_na2 = ldf `is.na` in base;
    r100 = dyn is_na2(r98);
    check L159() else D47();
  L133():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L134() else L135();
  L154():
    name7 = ld name;
    check L156() else D44();
  L155():
    r97 = dyn base14(<sym name>, <sym .BasicClasses>);
    goto L45(c45, r97);
  L162():
    p27 = prom<V +>{
      prototype9 = ld prototype;
      prototype10 = force? prototype9;
      checkMissing(prototype10);
      return prototype10;
    };
    r102 = dyn _asS4(p27);
    check L163() else D49();
  L165():
    p28 = prom<V +>{
      sym15 = ldf names;
      base15 = ldf names in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      slots9 = ld slots;
      slots10 = force? slots9;
      checkMissing(slots10);
      names = ldf names in base;
      r106 = dyn names(slots10);
      goto L0(r106);
    L2():
      r104 = dyn base15(<sym slots>);
      goto L0(r104);
    };
    r108 = dyn _in_1(".S3Class", p28);
    check L166() else D51();
  D44():
    deopt 178 [c45, name7];
  D47():
    deopt 187 [c53, r100];
  D49():
    deopt 192 [r102];
  D51():
    deopt 200 [r108];
  L36(c35, r79):
    r84 = `!`(r79);
    c39 = `as.logical`(r84);
    c40 = `&&`(c35, c39);
    goto L35(c40);
  L38():
    goto L40(NULL);
  L40(r90):
    goto L41();
  L134():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L136() else L137();
  L135():
    r78 = dyn base10(<lang match("VIRTUAL", superClasses)>);
    goto L36(c30, r78);
  L142():
    l5 = ld contains;
    c43 = `is.object`(l5);
    if c43 then L143() else L144(NULL, l5);
  L156():
    name8 = force? name7;
    checkMissing(name8);
    _BasicClasses = ld `.BasicClasses`;
    check L157() else D45();
  L159():
    goto L44(c53, r100);
  L163():
    st prototype = r102;
    goto L47();
  L166():
    c58 = `as.logical`(r108);
    if c58 then L167() else L48();
  D45():
    deopt 180 [c45, _BasicClasses];
  L37(c38, r81):
    is_na1 = ldf `is.na` in base;
    r83 = dyn is_na1(r81);
    check L140() else D42();
  L39(r88, dx8):
    st contains = dx8;
    goto L40(r88);
  L48():
    goto L49();
  L49():
    newClassRepresentation = ldf newClassRepresentation;
    check L171() else D54();
  L136():
    superClasses11 = ld superClasses;
    check L138() else D40();
  L137():
    r80 = dyn base11("VIRTUAL", <sym superClasses>);
    goto L37(c30, r80);
  L143():
    dr6 = tryDispatchBuiltin.0("[[<-", l5, NULL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L145() else L144(NULL, dr6);
  L144(r86, l7):
    ____1 = ldf `[[<-` in base;
    r89 = dyn ____1(l7, NULL, "VIRTUAL");
    goto L39(r86, r89);
  L157():
    _BasicClasses1 = force? _BasicClasses;
    checkMissing(_BasicClasses1);
    match1 = ldf match in base;
    r99 = dyn match1(name8, _BasicClasses1, NA_INT, NULL);
    check L158() else D46();
  L167():
    _addS3Class = ldf `.addS3Class`;
    check L168() else D52();
  D40():
    deopt 148 [c30, superClasses11];
  D42():
    deopt 155 [c38, r83];
  D46():
    deopt 185 [c45, r99];
  D52():
    deopt 202 [];
  D54():
    deopt 212 [];
  L138():
    superClasses12 = force? superClasses11;
    checkMissing(superClasses12);
    match = ldf match in base;
    r82 = dyn match("VIRTUAL", superClasses12, NA_INT, NULL);
    check L139() else D41();
  L140():
    goto L36(c38, r83);
  L145():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L39(NULL, dx7);
  L158():
    goto L45(c45, r99);
  L168():
    p29 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    p30 = prom<V +>{
      prototype11 = ld prototype;
      prototype12 = force? prototype11;
      checkMissing(prototype12);
      return prototype12;
    };
    p31 = prom<V +>{
      contains2 = ld contains;
      contains3 = force? contains2;
      checkMissing(contains3);
      return contains3;
    };
    p32 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r113 = dyn _addS3Class(p29, p30, p31, p32);
    check L169() else D53();
  L171():
    p33 = prom<V +>{
      name11 = ld name;
      name12 = force? name11;
      checkMissing(name12);
      return name12;
    };
    p34 = prom<V +>{
      slots11 = ld slots;
      slots12 = force? slots11;
      checkMissing(slots12);
      return slots12;
    };
    p35 = prom<V +>{
      contains4 = ld contains;
      contains5 = force? contains4;
      checkMissing(contains5);
      return contains5;
    };
    p36 = prom<V +>{
      prototype13 = ld prototype;
      prototype14 = force? prototype13;
      checkMissing(prototype14);
      return prototype14;
    };
    p37 = prom<V +>{
      virtual5 = ld virtual;
      virtual6 = force? virtual5;
      checkMissing(virtual6);
      return virtual6;
    };
    p38 = prom<V +>{
      validity3 = ld validity;
      validity4 = force? validity3;
      checkMissing(validity4);
      return validity4;
    };
    p39 = prom<V +>{
      access1 = ld access;
      access2 = force? access1;
      checkMissing(access2);
      return access2;
    };
    p40 = prom<V +>{
      package8 = ld package;
      package9 = force? package8;
      checkMissing(package9);
      return package9;
    };
    p41 = prom<V +>{
      version1 = ld version;
      version2 = force? version1;
      checkMissing(version2);
      return version2;
    };
    p42 = prom<V +>{
      sealed1 = ld sealed;
      sealed2 = force? sealed1;
      checkMissing(sealed2);
      return sealed2;
    };
    r125 = dyn newClassRepresentation[className, slots, contains, prototype, virtual, validity, access, package, versionKey, sealed](p33, p34, p35, p36, p37, p38, p39, p40, p41, p42);
    check L172() else D55();
  D41():
    deopt 153 [c30, r82];
  D53():
    deopt 207 [r113];
  D55():
    deopt 233 [r125];
  L139():
    goto L37(c30, r82);
  L169():
    st prototype = r113;
    goto L49();
  L172():
    popenv;
    return r125;
  }
}