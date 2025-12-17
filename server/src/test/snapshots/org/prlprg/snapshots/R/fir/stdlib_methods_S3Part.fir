fun main() {
  () -+> V { reg r:cls, reg as_matrix:cls, reg __:cls, reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r8:V, reg c1:cls, reg r9:V, reg __1:cls, reg r10:V, reg p:p(V +), reg r12:V, reg lm:cls, reg __2:cls, reg r13:V, reg p1:p(V +), reg __3:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg fit:*, reg fit1:V, reg class:cls, reg r20:V, reg setClass:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg c2:cls, reg r23:V, reg p3:p(V +), reg r25:V, reg myReg:cls, reg fit2:*, reg fit3:V, reg p4:p(V +), reg r27:V, reg fit4:*, reg fit5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg S3Part:cls, reg fit6:*, reg fit7:V, reg p5:p(V +), reg r31:V, reg as:cls, reg fit8:*, reg fit9:V, reg p6:p(V +), reg r33:V, reg identical:cls, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg as1:cls, reg fit10:*, reg fit11:V, reg p7:p(V +), reg r38:V, reg class1:cls, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg as2:cls, reg fit12:*, reg fit13:V, reg p8:p(V +), reg r43:V, reg class2:cls, reg r44:V, reg setClass1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg c3:cls, reg r47:V, reg p9:p(V +), reg r49:V, reg xlm:cls, reg fit14:*, reg fit15:V, reg p10:p(V +), reg _Machine:*, reg _Machine1:V, reg c4:L, reg _Machine3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r51:V, reg p11:p(V +), reg r53:V, reg __4:cls, reg removeClass:cls, reg r55:V |
    mkenv;
    r = clos inner3464236862;
    st S3Part = r;
    as_matrix = ldf `as.matrix`;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      __ = ldf `::`;
      r1 = dyn __("datasets", "iris");
      c = `is.object`(r1);
      if c then L2() else L3(r1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(r3):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(r8):
      __1 = ldf `[` in base;
      r10 = dyn __1(r1, <missing>, r8);
      goto L0(r10);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r9 = dyn c1("Sepal.Width", "Sepal.Length");
      goto L1(r9);
    L6():
      r6 = dyn base("Sepal.Width", "Sepal.Length");
      goto L1(r6);
    };
    r12 = dyn as_matrix(p);
    check L5() else D1();
  D1():
    deopt 6 [r12];
  L5():
    st sepal = r12;
    lm = ldf lm;
    check L6() else D2();
  D2():
    deopt 9 [];
  L6():
    p1 = prom<V +>{
      __2 = ldf `~` in base;
      r13 = dyn __2(<sym sepal>, <lang `+`(`+`(Petal.Length, Petal.Width), Species)>);
      return r13;
    };
    p2 = prom<V +>{
      __3 = ldf `::`;
      r15 = dyn __3("datasets", "iris");
      return r15;
    };
    r17 = dyn lm[, data](p1, p2);
    check L7() else D3();
  D3():
    deopt 13 [r17];
  L7():
    st fit = r17;
    sym1 = ldf class;
    base1 = ldf class in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L0():
    setClass = ldf setClass;
    check L12() else D6();
  L8():
    fit = ld fit;
    check L10() else D4();
  L9():
    r18 = dyn base1(<sym fit>);
    goto L0();
  D4():
    deopt 17 [fit];
  D6():
    deopt 22 [];
  L10():
    fit1 = force? fit;
    checkMissing(fit1);
    class = ldf class in base;
    r20 = dyn class(fit1);
    check L11() else D5();
  L12():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c2 = ldf c in base;
      r23 = dyn c2("character");
      goto L0(r23);
    L2():
      r21 = dyn base2[title]("character");
      goto L0(r21);
    };
    r25 = dyn setClass[, slots, contains]("myReg", p3, "mlm");
    check L13() else D7();
  D5():
    deopt 20 [r20];
  D7():
    deopt 28 [r25];
  L11():
    goto L0();
  L13():
    st myReg = r25;
    myReg = ldf myReg;
    check L14() else D8();
  D8():
    deopt 31 [];
  L14():
    p4 = prom<V +>{
      fit2 = ld fit;
      fit3 = force? fit2;
      checkMissing(fit3);
      return fit3;
    };
    r27 = dyn myReg[, title](p4, "Sepal Regression for iris data");
    check L15() else D9();
  D9():
    deopt 35 [r27];
  L15():
    st fit2 = r27;
    fit4 = ld fit2;
    check L16() else D10();
  D10():
    deopt 37 [fit4];
  L16():
    fit5 = force? fit4;
    checkMissing(fit5);
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L1():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L17():
    S3Part = ldf S3Part;
    check L19() else D11();
  L18():
    r28 = dyn base3(<lang S3Part(fit2)>, <lang as(fit2, "mlm")>);
    goto L1();
  D11():
    deopt 42 [];
  L2():
    sym5 = ldf class;
    base5 = ldf class in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L29() else L30();
  L19():
    p5 = prom<V +>{
      fit6 = ld fit2;
      fit7 = force? fit6;
      checkMissing(fit7);
      return fit7;
    };
    r31 = dyn S3Part(p5);
    check L20() else D12();
  L24():
    as1 = ldf as;
    check L26() else D16();
  L25():
    r35 = dyn base4(<lang as(fit2, "mlm")>);
    goto L2();
  D12():
    deopt 44 [r31];
  D16():
    deopt 62 [];
  L3():
    setClass1 = ldf setClass;
    check L34() else D22();
  L20():
    as = ldf as;
    check L21() else D13();
  L26():
    p7 = prom<V +>{
      fit10 = ld fit2;
      fit11 = force? fit10;
      checkMissing(fit11);
      return fit11;
    };
    r38 = dyn as1(p7, "mlm");
    check L27() else D17();
  L29():
    as2 = ldf as;
    check L31() else D19();
  L30():
    r40 = dyn base5(<lang as(fit2, "S3")>);
    goto L3();
  D13():
    deopt 46 [];
  D17():
    deopt 65 [r38];
  D19():
    deopt 71 [];
  D22():
    deopt 78 [];
  L21():
    p6 = prom<V +>{
      fit8 = ld fit2;
      fit9 = force? fit8;
      checkMissing(fit9);
      return fit9;
    };
    r33 = dyn as(p6, "mlm");
    check L22() else D14();
  L27():
    class1 = ldf class in base;
    r39 = dyn class1(r38);
    check L28() else D18();
  L31():
    p8 = prom<V +>{
      fit12 = ld fit2;
      fit13 = force? fit12;
      checkMissing(fit13);
      return fit13;
    };
    r43 = dyn as2(p8, "S3");
    check L32() else D20();
  L34():
    p9 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      c3 = ldf c in base;
      r47 = dyn c3("numeric");
      goto L0(r47);
    L2():
      r45 = dyn base6[eps]("numeric");
      goto L0(r45);
    };
    r49 = dyn setClass1[, slots, contains]("xlm", p9, "lm");
    check L35() else D23();
  D14():
    deopt 49 [r33];
  D18():
    deopt 67 [r39];
  D20():
    deopt 74 [r43];
  D23():
    deopt 84 [r49];
  L22():
    identical = ldf identical in base;
    r34 = dyn identical(r31, r33, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L23() else D15();
  L28():
    goto L2();
  L32():
    class2 = ldf class in base;
    r44 = dyn class2(r43);
    check L33() else D21();
  L35():
    st xlm = r49;
    xlm = ldf xlm;
    check L36() else D24();
  D15():
    deopt 58 [r34];
  D21():
    deopt 76 [r44];
  D24():
    deopt 87 [];
  L23():
    goto L1();
  L33():
    goto L3();
  L36():
    p10 = prom<V +>{
      fit14 = ld fit;
      fit15 = force? fit14;
      checkMissing(fit15);
      return fit15;
    };
    p11 = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c4 = `is.object`(_Machine1);
      if c4 then L1() else L2(_Machine1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", _Machine1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(_Machine3):
      r51 = `$`(_Machine3, <sym double.eps>);
      goto L0(r51);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r53 = dyn xlm[, eps](p10, p11);
    check L37() else D25();
  D25():
    deopt 91 [r53];
  L37():
    st xfit = r53;
    __4 = ldf `@` in base;
    dyn __4(<sym xfit>, <sym .S3Class>);
    removeClass = ldf removeClass;
    check L38() else D26();
  D26():
    deopt 96 [];
  L38():
    r55 = dyn removeClass("myReg");
    check L39() else D27();
  D27():
    deopt 98 [r55];
  L39():
    popenv;
    return r55;
  }
}
fun inner3464236862(object, strictS3, S3Class) {
  (reg object:*, reg strictS3:*, reg S3Class:*) -+> V { var object:*, var strictS3:*, reg strictS3_isMissing:L, reg strictS3_orDefault:*, var S3Class:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg isS4:cls, reg r2:V, reg r3:V, reg c:L, reg object3:*, reg object4:V, reg getClass:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg object5:*, reg object6:V, reg class:cls, reg r8:V, reg p:p(V +), reg r10:V, reg extends:cls, reg classDef:*, reg classDef1:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg missing:cls, reg r15:V, reg oldClassCase:*, reg oldClassCase1:V, reg c1:L, reg defltS3Class:*, reg defltS3Class1:V, reg c2:L, reg _S3Class:cls, reg object7:*, reg object8:V, reg p2:p(V +), reg r17:V, reg slotNames:cls, reg S3Class1:*, reg S3Class2:V, reg c3:L, reg S3Class4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg extends1:cls, reg classDef2:*, reg classDef3:V, reg p4:p(V +), reg r30:V, reg _BasicClasses:*, reg _BasicClasses1:V, reg match:cls, reg r31:V, reg is_na:cls, reg r32:V, reg all:cls, reg r33:V, reg c4:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg object9:*, reg object10:V, reg class1:cls, reg r36:V, reg p5:p(V +), reg r38:V, reg p6:p(V +), reg r40:V, reg p7:p(V +), reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg missing1:cls, reg r46:V, reg c5:L, reg __1:cls, reg r47:V, reg c6:L, reg r49:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg S3Class5:*, reg S3Class6:V, reg c7:V, reg c8:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg object11:*, reg object12:V, reg typeof:cls, reg r55:V, reg character:cls, reg r57:V, reg slotNames1:cls, reg S3Class7:*, reg S3Class8:V, reg c9:L, reg S3Class10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r58:V, reg p8:p(V +), reg r60:V, reg defltS3Class2:*, reg defltS3Class3:V, reg c10:L, reg c11:V, reg extends2:cls, reg classDef4:*, reg classDef5:V, reg p9:p(V +), reg S3Class11:*, reg S3Class12:V, reg p10:p(V +), reg r63:V, reg c13:L, reg c14:V, reg r64:V, reg c16:L, reg stop1:cls, reg gettextf1:cls, reg dQuote1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg r66:V, reg object13:*, reg object14:V, reg class2:cls, reg r67:V, reg p11:p(V +), reg r69:V, reg p12:p(V +), reg dQuote2:cls, reg S3Class13:*, reg S3Class14:V, reg p13:p(V +), reg r72:V, reg p14:p(V +), reg r74:V, reg p15:p(V +), reg r76:V, reg strictS4:*, reg strictS5:V, reg c17:L, reg keepSlots:*, reg keepSlots1:V, reg c18:L, reg keepSlots3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r78:V, reg keepSlots6:V, reg r79:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r80:V, reg keepSlots9:V, reg r81:V, reg keepSlots10:*, reg keepSlots11:V, reg match1:cls, reg r82:V, reg is_na1:cls, reg r83:V, reg __3:cls, reg r84:V, reg slotNames2:cls, reg classDef6:*, reg classDef7:V, reg p16:p(V +), reg r86:V, reg deleteSlots:*, reg deleteSlots1:V, reg c19:L, reg deleteSlots3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg deleteSlots6:V, reg r88:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r89:V, reg deleteSlots9:V, reg r90:V, reg deleteSlots10:*, reg deleteSlots11:V, reg keepSlots12:*, reg keepSlots13:V, reg match2:cls, reg r91:V, reg is_na2:cls, reg r92:V, reg __4:cls, reg r93:V, reg deleteSlots12:*, reg deleteSlots13:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c20:L, reg x:V, reg l1:*, reg attr__:cls, reg slot:*, reg slot1:V, reg p17:p(V +), reg r95:V, reg strictS6:*, reg strictS7:V, reg c21:L, reg _notS4:cls, reg object15:*, reg object16:V, reg p18:p(V +), reg r97:V, reg S3Class15:*, reg S3Class16:V, reg l2:*, reg class__:cls, reg r98:V, reg S3Class18:*, reg S3Class19:V, reg c22:L, reg S3Class21:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __5:cls, reg r99:V, reg l3:*, reg class__1:cls, reg r100:V, reg object17:*, reg object18:V |
    mkenv;
    st object = object;
    strictS3_isMissing = missing.0(strictS3);
    if strictS3_isMissing then L0(FALSE) else L0(strictS3);
  L0(strictS3_orDefault):
    st strictS3 = strictS3_orDefault;
    st S3Class = S3Class;
    sym = ldf isS4;
    base = ldf isS4 in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L40() else L2();
  L36():
    object1 = ld object;
    check L38() else D0();
  L37():
    r = dyn base(<sym object>);
    goto L1(r);
  D0():
    deopt 2 [object1];
  L2():
    getClass = ldf getClass;
    check L44() else D3();
  L38():
    object2 = force? object1;
    checkMissing(object2);
    isS4 = ldf isS4 in base;
    r2 = dyn isS4(object2);
    check L39() else D1();
  L40():
    object3 = ld object;
    check L41() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [object3];
  D3():
    deopt 13 [];
  L39():
    goto L1(r2);
  L41():
    object4 = force? object3;
    checkMissing(object4);
    popenv;
    return object4;
  L44():
    p = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      class = ldf class in base;
      r8 = dyn class(object6);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym object>);
      goto L0(r6);
    };
    r10 = dyn getClass(p);
    check L45() else D4();
  D4():
    deopt 15 [r10];
  L45():
    st classDef = r10;
    extends = ldf extends;
    check L46() else D5();
  D5():
    deopt 18 [];
  L46():
    p1 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    r12 = dyn extends(p1, "oldClass");
    check L47() else D6();
  D6():
    deopt 21 [r12];
  L47():
    st oldClassCase = r12;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L4(r14):
    st defltS3Class = r14;
    oldClassCase = ld oldClassCase;
    check L50() else D7();
  L48():
    missing = ldf missing in base;
    r15 = dyn missing(<sym S3Class>);
    goto L4(r15);
  L49():
    r13 = dyn base2(<sym S3Class>);
    goto L4(r13);
  D7():
    deopt 27 [oldClassCase];
  L50():
    oldClassCase1 = force? oldClassCase;
    checkMissing(oldClassCase1);
    c1 = `as.logical`(oldClassCase1);
    if c1 then L51() else L5();
  L5():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L8():
    defltS3Class2 = ld defltS3Class;
    check L97() else D28();
  L51():
    defltS3Class = ld defltS3Class;
    check L52() else D8();
  D8():
    deopt 29 [defltS3Class];
  D28():
    deopt 100 [defltS3Class2];
  L9(r24):
    c4 = `as.logical`(r24);
    if c4 then L72() else L12();
  L52():
    defltS3Class1 = force? defltS3Class;
    checkMissing(defltS3Class1);
    c2 = `as.logical`(defltS3Class1);
    if c2 then L53() else L6();
  L60():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L61():
    r23 = dyn base3(<lang is.na(match(extends(classDef), .BasicClasses))>);
    goto L9(r23);
  L97():
    defltS3Class3 = force? defltS3Class2;
    checkMissing(defltS3Class3);
    c10 = `as.logical`(defltS3Class3);
    if c10 then L20(c10) else L98();
  L6():
    goto L7();
  L7():
    slotNames = ldf slotNames;
    check L57() else D11();
  L10(r26):
    all = ldf all in base;
    r33 = dyn all(r26);
    check L71() else D18();
  L12():
    goto L13();
  L13():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L20(c11):
    r64 = `!`(c11);
    c16 = `as.logical`(r64);
    if c16 then L102() else L21();
  L53():
    _S3Class = ldf `.S3Class`;
    check L54() else D9();
  L62():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L63():
    r25 = dyn base4(<lang match(extends(classDef), .BasicClasses)>);
    goto L10(r25);
  L72():
    stop = ldf stop;
    check L73() else D19();
  L98():
    extends2 = ldf extends;
    check L99() else D29();
  D9():
    deopt 32 [];
  D11():
    deopt 39 [];
  D18():
    deopt 62 [r33];
  D19():
    deopt 64 [];
  D29():
    deopt 103 [c10];
  L11(r28):
    is_na = ldf `is.na` in base;
    r32 = dyn is_na(r28);
    check L70() else D17();
  L14(r45):
    c5 = `as.logical`(r45);
    if c5 then L78() else L15();
  L21():
    goto L22();
  L22():
    strictS4 = ld strictS3;
    check L106() else D33();
  L54():
    p2 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r17 = dyn _S3Class(p2);
    check L55() else D10();
  L57():
    p3 = prom<V +>{
      S3Class1 = ld S3Class;
      S3Class2 = force? S3Class1;
      checkMissing(S3Class2);
      c3 = `is.object`(S3Class2);
      if c3 then L1() else L2(S3Class2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", S3Class2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(S3Class4):
      __ = ldf `[[` in base;
      r19 = dyn __(S3Class4, 1);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r21 = dyn slotNames(p3);
    check L58() else D12();
  L64():
    extends1 = ldf extends;
    check L66() else D13();
  L65():
    r27 = dyn base5(<lang extends(classDef)>, <sym .BasicClasses>);
    goto L11(r27);
  L71():
    goto L9(r33);
  L73():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        dQuote = ldf dQuote;
        p5 = prom<V +>{
          sym6 = ldf class;
          base6 = ldf class in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r35):
          return r35;
        L1():
          object9 = ld object;
          object10 = force? object9;
          checkMissing(object10);
          class1 = ldf class in base;
          r36 = dyn class1(object10);
          goto L0(r36);
        L2():
          r34 = dyn base6(<sym object>);
          goto L0(r34);
        };
        r38 = dyn dQuote(p5);
        return r38;
      };
      r40 = dyn gettextf("S3Part() is only defined for classes set up by setOldCLass(), basic classes or subclasses of these:  not true of class %s", p6);
      return r40;
    };
    r42 = dyn stop[, domain](p7, NA_LGL);
    check L74() else D20();
  L76():
    missing1 = ldf missing in base;
    r46 = dyn missing1(<sym S3Class>);
    goto L14(r46);
  L77():
    r44 = dyn base7(<sym S3Class>);
    goto L14(r44);
  L99():
    p9 = prom<V +>{
      classDef4 = ld classDef;
      classDef5 = force? classDef4;
      checkMissing(classDef5);
      return classDef5;
    };
    p10 = prom<V +>{
      S3Class11 = ld S3Class;
      S3Class12 = force? S3Class11;
      checkMissing(S3Class12);
      return S3Class12;
    };
    r63 = dyn extends2(p9, p10);
    check L100() else D30();
  L102():
    stop1 = ldf stop;
    check L103() else D31();
  D10():
    deopt 34 [r17];
  D12():
    deopt 41 [r21];
  D13():
    deopt 50 [];
  D17():
    deopt 60 [r32];
  D20():
    deopt 68 [r42];
  D30():
    deopt 106 [c10, r63];
  D31():
    deopt 110 [];
  D33():
    deopt 117 [strictS4];
  L15():
    slotNames1 = ldf slotNames;
    check L95() else D26();
  L55():
    st S3Class = r17;
    goto L7();
  L58():
    st keepSlots = r21;
    goto L8();
  L66():
    p4 = prom<V +>{
      classDef2 = ld classDef;
      classDef3 = force? classDef2;
      checkMissing(classDef3);
      return classDef3;
    };
    r30 = dyn extends1(p4);
    check L67() else D14();
  L70():
    goto L10(r32);
  L74():
    goto L13();
  L78():
    __1 = ldf `@` in base;
    r47 = dyn __1(<sym classDef>, <sym slots>);
    c6 = `is.object`(r47);
    if c6 then L80() else L81(r47);
  L100():
    c13 = `as.logical`(r63);
    c14 = `||`(c10, c13);
    goto L20(c14);
  L103():
    p15 = prom<V +>{
      gettextf1 = ldf gettextf;
      p12 = prom<V +>{
        dQuote1 = ldf dQuote;
        p11 = prom<V +>{
          sym10 = ldf class;
          base10 = ldf class in base;
          guard10 = `==`.4(sym10, base10);
          if guard10 then L1() else L2();
        L0(r66):
          return r66;
        L1():
          object13 = ld object;
          object14 = force? object13;
          checkMissing(object14);
          class2 = ldf class in base;
          r67 = dyn class2(object14);
          goto L0(r67);
        L2():
          r65 = dyn base10(<sym object>);
          goto L0(r65);
        };
        r69 = dyn dQuote1(p11);
        return r69;
      };
      p14 = prom<V +>{
        dQuote2 = ldf dQuote;
        p13 = prom<V +>{
          S3Class13 = ld S3Class;
          S3Class14 = force? S3Class13;
          checkMissing(S3Class14);
          return S3Class14;
        };
        r72 = dyn dQuote2(p13);
        return r72;
      };
      r74 = dyn gettextf1("the 'S3Class' argument must be a superclass of %s:  not true of class %s", p12, p14);
      return r74;
    };
    r76 = dyn stop1[, domain](p15, NA_LGL);
    check L104() else D32();
  L106():
    strictS5 = force? strictS4;
    checkMissing(strictS5);
    c17 = `as.logical`(strictS5);
    if c17 then L107() else L23();
  D14():
    deopt 52 [r30];
  D26():
    deopt 96 [];
  D32():
    deopt 114 [r76];
  L23():
    goto L27();
  L27():
    slotNames2 = ldf slotNames;
    check L120() else D38();
  L67():
    _BasicClasses = ld `.BasicClasses`;
    check L68() else D15();
  L79(dx3):
    st S3Class = dx3;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L80():
    dr2 = tryDispatchBuiltin.1("$", r47);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L82() else L81(dr2);
  L81(r49):
    r50 = `$`(r49, <sym .Data>);
    goto L79(r50);
  L95():
    p8 = prom<V +>{
      S3Class7 = ld S3Class;
      S3Class8 = force? S3Class7;
      checkMissing(S3Class8);
      c9 = `is.object`(S3Class8);
      if c9 then L1() else L2(S3Class8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", S3Class8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(S3Class10):
      __2 = ldf `[[` in base;
      r58 = dyn __2(S3Class10, 1);
      goto L0(r58);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r60 = dyn slotNames1(p8);
    check L96() else D27();
  L104():
    goto L22();
  L107():
    keepSlots = ld keepSlots;
    check L108() else D34();
  D15():
    deopt 53 [_BasicClasses];
  D27():
    deopt 98 [r60];
  D34():
    deopt 119 [keepSlots];
  D38():
    deopt 139 [];
  L16(r52):
    c8 = `as.logical`(r52);
    if c8 then L86() else L17();
  L68():
    _BasicClasses1 = force? _BasicClasses;
    checkMissing(_BasicClasses1);
    match = ldf match in base;
    r31 = dyn match(r30, _BasicClasses1, NA_INT, NULL);
    check L69() else D16();
  L82():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L79(dx2);
  L83():
    S3Class5 = ld S3Class;
    check L85() else D21();
  L84():
    r51 = dyn base8(<sym S3Class>);
    goto L16(r51);
  L96():
    st keepSlots = r60;
    goto L8();
  L108():
    keepSlots1 = force? keepSlots;
    checkMissing(keepSlots1);
    c18 = `is.object`(keepSlots1);
    if c18 then L109() else L110(keepSlots1);
  L120():
    p16 = prom<V +>{
      classDef6 = ld classDef;
      classDef7 = force? classDef6;
      checkMissing(classDef7);
      return classDef7;
    };
    r86 = dyn slotNames2(p16);
    check L121() else D39();
  D16():
    deopt 58 [r31];
  D21():
    deopt 79 [S3Class5];
  D39():
    deopt 141 [r86];
  L17():
    goto L19();
  L19():
    character = ldf character;
    check L92() else D24();
  L24(dx7):
    st keepSlots = dx7;
    goto L27();
  L69():
    goto L11(r31);
  L85():
    S3Class6 = force? S3Class5;
    checkMissing(S3Class6);
    c7 = `==`(S3Class6, NULL);
    goto L16(c7);
  L86():
    sym9 = ldf typeof;
    base9 = ldf typeof in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  L109():
    dr6 = tryDispatchBuiltin.1("[", keepSlots1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L111() else L110(dr6);
  L110(keepSlots3):
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  L121():
    st deleteSlots = r86;
    deleteSlots = ld deleteSlots;
    check L122() else D40();
  D24():
    deopt 92 [];
  D40():
    deopt 143 [deleteSlots];
  L18(r54):
    st S3Class = r54;
    goto L19();
  L25(keepSlots6, r79):
    __3 = ldf `[` in base;
    r84 = dyn __3(keepSlots6, r79);
    goto L24(r84);
  L87():
    object11 = ld object;
    check L89() else D22();
  L88():
    r53 = dyn base9(<sym object>);
    goto L18(r53);
  L92():
    r57 = dyn character();
    check L93() else D25();
  L111():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L24(dx6);
  L112():
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L114() else L115();
  L113():
    r78 = dyn base11(<lang match(keepSlots, ".S3Class")>);
    goto L25(keepSlots3, r78);
  L122():
    deleteSlots1 = force? deleteSlots;
    checkMissing(deleteSlots1);
    c19 = `is.object`(deleteSlots1);
    if c19 then L123() else L124(deleteSlots1);
  D22():
    deopt 84 [object11];
  D25():
    deopt 93 [r57];
  L26(keepSlots9, r81):
    is_na1 = ldf `is.na` in base;
    r83 = dyn is_na1(r81);
    check L118() else D37();
  L28(dx10):
    st deleteSlots = dx10;
    deleteSlots12 = ld deleteSlots;
    check L134() else D45();
  L89():
    object12 = force? object11;
    checkMissing(object12);
    typeof = ldf typeof in base;
    r55 = dyn typeof(object12);
    check L90() else D23();
  L93():
    st keepSlots = r57;
    goto L8();
  L114():
    keepSlots10 = ld keepSlots;
    check L116() else D35();
  L115():
    r80 = dyn base12(<sym keepSlots>, ".S3Class");
    goto L26(keepSlots3, r80);
  L123():
    dr8 = tryDispatchBuiltin.1("[", deleteSlots1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L125() else L124(dr8);
  L124(deleteSlots3):
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L126() else L127();
  D23():
    deopt 87 [r55];
  D35():
    deopt 125 [keepSlots3, keepSlots10];
  D37():
    deopt 133 [keepSlots9, r83];
  D45():
    deopt 161 [deleteSlots12];
  L29(deleteSlots6, r88):
    __4 = ldf `[` in base;
    r93 = dyn __4(deleteSlots6, r88);
    goto L28(r93);
  L90():
    goto L18(r55);
  L116():
    keepSlots11 = force? keepSlots10;
    checkMissing(keepSlots11);
    match1 = ldf match in base;
    r82 = dyn match1(keepSlots11, ".S3Class", NA_INT, NULL);
    check L117() else D36();
  L118():
    goto L25(keepSlots9, r83);
  L125():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L28(dx9);
  L126():
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L128() else L129();
  L127():
    r87 = dyn base13(<lang match(deleteSlots, keepSlots)>);
    goto L29(deleteSlots3, r87);
  L134():
    deleteSlots13 = force? deleteSlots12;
    checkMissing(deleteSlots13);
    s = toForSeq(deleteSlots13);
    l = length(s);
    i = 0;
    goto L31(i);
  D36():
    deopt 131 [keepSlots3, r82];
  L30(deleteSlots9, r90):
    is_na2 = ldf `is.na` in base;
    r92 = dyn is_na2(r90);
    check L133() else D44();
  L31(i1):
    i2 = `+`.1(i1, 1);
    c20 = `<`.1(l, i2);
    if c20 then L135() else L32();
  L117():
    goto L26(keepSlots3, r82);
  L128():
    deleteSlots10 = ld deleteSlots;
    check L130() else D41();
  L129():
    r89 = dyn base14(<sym deleteSlots>, <sym keepSlots>);
    goto L30(deleteSlots3, r89);
  D41():
    deopt 149 [deleteSlots3, deleteSlots10];
  D44():
    deopt 158 [deleteSlots9, r92];
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st slot = x;
    l1 = ld object;
    attr__ = ldf `attr<-`;
    check L136() else D46();
  L130():
    deleteSlots11 = force? deleteSlots10;
    checkMissing(deleteSlots11);
    keepSlots12 = ld keepSlots;
    check L131() else D42();
  L133():
    goto L29(deleteSlots9, r92);
  L135():
    strictS6 = ld strictS3;
    check L138() else D48();
  D42():
    deopt 151 [deleteSlots3, keepSlots12];
  D46():
    deopt 166 [i2, NULL, l1, NULL];
  D48():
    deopt 174 [strictS6];
  L131():
    keepSlots13 = force? keepSlots12;
    checkMissing(keepSlots13);
    match2 = ldf match in base;
    r91 = dyn match2(deleteSlots11, keepSlots13, NA_INT, NULL);
    check L132() else D43();
  L136():
    p17 = prom<V +>{
      slot = ld slot;
      slot1 = force? slot;
      checkMissing(slot1);
      return slot1;
    };
    r95 = dyn attr__(l1, NULL, p17, NULL);
    check L137() else D47();
  L138():
    strictS7 = force? strictS6;
    checkMissing(strictS7);
    c21 = `as.logical`(strictS7);
    if c21 then L139() else L33();
  D43():
    deopt 156 [deleteSlots3, r91];
  D47():
    deopt 169 [i2, NULL, r95];
  L33():
    S3Class18 = ld S3Class;
    check L146() else D54();
  L34():
    object17 = ld object;
    check L152() else D57();
  L132():
    goto L30(deleteSlots3, r91);
  L137():
    st object = r95;
    goto L31(i2);
  L139():
    _notS4 = ldf `.notS4`;
    check L140() else D49();
  D49():
    deopt 177 [];
  D54():
    deopt 188 [S3Class18];
  D57():
    deopt 198 [object17];
  L140():
    p18 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      return object16;
    };
    r97 = dyn _notS4(p18);
    check L141() else D50();
  L146():
    S3Class19 = force? S3Class18;
    checkMissing(S3Class19);
    c22 = `is.object`(S3Class19);
    if c22 then L147() else L148(S3Class19);
  L152():
    object18 = force? object17;
    checkMissing(object18);
    popenv;
    return object18;
  D50():
    deopt 179 [r97];
  L35(dx12):
    l3 = ld object;
    class__1 = ldf `class<-`;
    check L150() else D55();
  L141():
    st object = r97;
    S3Class15 = ld S3Class;
    check L142() else D51();
  L147():
    dr10 = tryDispatchBuiltin.1("[[", S3Class19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L149() else L148(dr10);
  L148(S3Class21):
    __5 = ldf `[[` in base;
    r99 = dyn __5(S3Class21, 1);
    goto L35(r99);
  D51():
    deopt 181 [S3Class15];
  D55():
    deopt 194 [dx12, l3, dx12];
  L142():
    S3Class16 = force? S3Class15;
    checkMissing(S3Class16);
    l2 = ld object;
    class__ = ldf `class<-`;
    check L143() else D52();
  L149():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L35(dx11);
  L150():
    r100 = dyn class__1(l3, NULL, dx12);
    check L151() else D56();
  D52():
    deopt 184 [S3Class16, l2, S3Class16];
  D56():
    deopt 196 [dx12, r100];
  L143():
    r98 = dyn class__(l2, NULL, S3Class16);
    check L144() else D53();
  L151():
    st object = r100;
    goto L34();
  D53():
    deopt 186 [S3Class16, r98];
  L144():
    st object = r98;
    goto L34();
  }
}