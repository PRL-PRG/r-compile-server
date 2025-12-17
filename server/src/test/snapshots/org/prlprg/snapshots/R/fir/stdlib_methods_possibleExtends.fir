fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3230478363;
    st possibleExtends = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3230478363(class1, class2, ClassDef1, ClassDef2) {
  (reg class1:*, reg class2:*, reg ClassDef1:*, reg ClassDef2:*) -+> V { var class1:*, var class2:*, var ClassDef1:*, reg ClassDef1_isMissing:L, reg ClassDef1_orDefault:*, reg getClassDef:cls, reg class3:*, reg class4:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var ClassDef2:*, reg ClassDef2_isMissing:L, reg ClassDef2_orDefault:*, reg getClassDef1:cls, reg class5:*, reg class6:V, reg p2:p(V +), reg _classEnv:cls, reg ClassDef3:*, reg ClassDef4:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg _identC:cls, reg class7:*, reg class8:V, reg c:L, reg class10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg p6:p(V +), reg class11:*, reg class12:V, reg p7:p(V +), reg r12:V, reg c1:L, reg c2:V, reg _identC1:cls, reg class13:*, reg class14:V, reg p8:p(V +), reg r14:V, reg c4:L, reg c5:V, reg c7:L, reg sym:cls, reg base:cls, reg guard:L, reg r17:V, reg r18:V, reg ClassDef5:*, reg ClassDef6:V, reg c8:V, reg c9:L, reg __1:cls, reg r21:V, reg ____:cls, reg ext:*, reg ext1:V, reg c10:L, reg ext3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg class15:*, reg class16:V, reg __2:cls, reg r22:V, reg p9:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg ClassDef7:*, reg ClassDef8:V, reg c11:V, reg c12:L, reg __3:cls, reg r26:V, reg _identC2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg ClassDef9:*, reg ClassDef10:V, reg class17:cls, reg r29:V, reg p10:p(V +), reg r31:V, reg r32:V, reg c13:L, reg c15:V, reg isClassUnion:cls, reg ClassDef11:*, reg ClassDef12:V, reg p11:p(V +), reg r34:V, reg c16:L, reg c17:V, reg c19:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg _in_:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg class18:*, reg class19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg ext4:*, reg ext5:V, reg names:cls, reg r41:V, reg c20:cls, reg r42:V, reg p12:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg subs:*, reg subs1:V, reg names1:cls, reg r46:V, reg p13:p(V +), reg r48:V, reg any:cls, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg class20:*, reg class21:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg subs2:*, reg subs3:V, reg names2:cls, reg r54:V, reg match:cls, reg r55:V, reg i:*, reg i1:V, reg c21:L, reg i3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg i6:V, reg r57:V, reg i7:*, reg i8:V, reg is_na:cls, reg r58:V, reg r59:V, reg __4:cls, reg r60:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg i9:*, reg i10:V, reg length:cls, reg r63:V, reg c22:L, reg subs4:*, reg subs5:V, reg c23:L, reg subs7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i11:*, reg i12:V, reg c24:L, reg subs9:V, reg i14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg subs11:V, reg dx9:V, reg __5:cls, reg r64:V, reg __6:cls, reg r65:V, reg p14:p(V +), reg r67:V |
    mkenv;
    st class1 = class1;
    st class2 = class2;
    ClassDef1_isMissing = missing.0(ClassDef1);
    if ClassDef1_isMissing then L0() else L1(ClassDef1);
  L0():
    p1 = prom<V +>{
      getClassDef = ldf getClassDef;
      p = prom<V +>{
        class3 = ld class1;
        class4 = force? class3;
        checkMissing(class4);
        return class4;
      };
      r1 = dyn getClassDef(p);
      return r1;
    };
    goto L1(p1);
  L1(ClassDef1_orDefault):
    st ClassDef1 = ClassDef1_orDefault;
    ClassDef2_isMissing = missing.0(ClassDef2);
    if ClassDef2_isMissing then L2() else L3(ClassDef2);
  L2():
    p5 = prom<V +>{
      getClassDef1 = ldf getClassDef;
      p2 = prom<V +>{
        class5 = ld class2;
        class6 = force? class5;
        checkMissing(class6);
        return class6;
      };
      p4 = prom<V +>{
        _classEnv = ldf `.classEnv`;
        p3 = prom<V +>{
          ClassDef3 = ld ClassDef1;
          ClassDef4 = force? ClassDef3;
          checkMissing(ClassDef4);
          return ClassDef4;
        };
        r5 = dyn _classEnv(p3);
        return r5;
      };
      r7 = dyn getClassDef1[, where](p2, p4);
      return r7;
    };
    goto L3(p5);
  L3(ClassDef2_orDefault):
    st ClassDef2 = ClassDef2_orDefault;
    _identC = ldf `.identC`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p6 = prom<V +>{
      class7 = ld class1;
      class8 = force? class7;
      checkMissing(class8);
      c = `is.object`(class8);
      if c then L1() else L2(class8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", class8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(class10):
      __ = ldf `[[` in base;
      r9 = dyn __(class10, 1);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      class11 = ld class2;
      class12 = force? class11;
      checkMissing(class12);
      return class12;
    };
    r12 = dyn _identC(p6, p7);
    check L11() else D1();
  D1():
    deopt 4 [r12];
  L11():
    c1 = `as.logical`(r12);
    if c1 then L4(c1) else L12();
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L16() else L5();
  L12():
    _identC1 = ldf `.identC`;
    check L13() else D2();
  D2():
    deopt 6 [c1];
  L5():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L13():
    p8 = prom<V +>{
      class13 = ld class2;
      class14 = force? class13;
      checkMissing(class14);
      return class14;
    };
    r14 = dyn _identC1(p8, "ANY");
    check L14() else D3();
  L16():
    popenv;
    return TRUE;
  D3():
    deopt 9 [c1, r14];
  L7(r18):
    c9 = `as.logical`(r18);
    if c9 then L22() else L8();
  L14():
    c4 = `as.logical`(r14);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L19():
    ClassDef5 = ld ClassDef1;
    check L21() else D4();
  L20():
    r17 = dyn base(<sym ClassDef1>);
    goto L7(r17);
  D4():
    deopt 17 [ClassDef5];
  L8():
    __1 = ldf `@` in base;
    r21 = dyn __1(<sym ClassDef1>, <sym contains>);
    st ext = r21;
    ____ = ldf `%||%`;
    check L25() else D5();
  L21():
    ClassDef6 = force? ClassDef5;
    checkMissing(ClassDef6);
    c8 = `==`(ClassDef6, NULL);
    goto L7(c8);
  L22():
    popenv;
    return FALSE;
  D5():
    deopt 29 [];
  L25():
    p9 = prom<V +>{
      ext = ld ext;
      ext1 = force? ext;
      checkMissing(ext1);
      c10 = `is.object`(ext1);
      if c10 then L1() else L2(ext1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", ext1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(ext3):
      class15 = ld class2;
      class16 = force? class15;
      __2 = ldf `[[` in base;
      r22 = dyn __2(ext3, class16);
      goto L0(r22);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p14 = prom<V +>{
      sym1 = ldf `is.null`;
      base1 = ldf `is.null` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L13() else L14();
    L0(r25):
      c12 = `as.logical`(r25);
      if c12 then L15() else L1();
    L13():
      ClassDef7 = ld ClassDef2;
      ClassDef8 = force? ClassDef7;
      checkMissing(ClassDef8);
      c11 = `==`(ClassDef8, NULL);
      goto L0(c11);
    L14():
      r24 = dyn base1(<sym ClassDef2>);
      goto L0(r24);
    L1():
      __3 = ldf `@` in base;
      r26 = dyn __3(<sym ClassDef2>, <sym subclasses>);
      st subs = r26;
      _identC2 = ldf `.identC`;
      p10 = prom<V +>{
        sym2 = ldf class;
        base2 = ldf class in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r28):
        return r28;
      L1():
        ClassDef9 = ld ClassDef2;
        ClassDef10 = force? ClassDef9;
        checkMissing(ClassDef10);
        class17 = ldf class in base;
        r29 = dyn class17(ClassDef10);
        goto L0(r29);
      L2():
        r27 = dyn base2(<sym ClassDef2>);
        goto L0(r27);
      };
      r31 = dyn _identC2(p10, "classRepresentation");
      r32 = `!`(r31);
      c13 = `as.logical`(r32);
      if c13 then L17() else L2(c13);
    L15():
      return FALSE;
    L2(c15):
      c19 = `as.logical`(c15);
      if c19 then L19() else L3();
    L17():
      isClassUnion = ldf isClassUnion;
      p11 = prom<V +>{
        ClassDef11 = ld ClassDef2;
        ClassDef12 = force? ClassDef11;
        checkMissing(ClassDef12);
        return ClassDef12;
      };
      r34 = dyn isClassUnion(p11);
      c16 = `as.logical`(r34);
      c17 = `&&`(c13, c16);
      goto L2(c17);
    L3():
      sym7 = ldf match;
      base7 = ldf match in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L23() else L24();
    L19():
      sym3 = ldf any;
      base3 = ldf any in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L20() else L21();
    L4(r36):
      return r36;
    L5(r51):
      st i = r51;
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      c21 = `is.object`(i1);
      if c21 then L27() else L28(i1);
    L20():
      _in_ = ldf `%in%`;
      p12 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L2() else L3();
      L0(r38):
        return r38;
      L2():
        class18 = ld class1;
        class19 = force? class18;
        checkMissing(class19);
        sym5 = ldf names;
        base5 = ldf names in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L4() else L5();
      L3():
        r37 = dyn base4(<sym class1>, <lang names(ext)>);
        goto L0(r37);
      L1(r40):
        c20 = ldf c in base;
        r42 = dyn c20(class19, r40);
        goto L0(r42);
      L4():
        ext4 = ld ext;
        ext5 = force? ext4;
        checkMissing(ext5);
        names = ldf names in base;
        r41 = dyn names(ext5);
        goto L1(r41);
      L5():
        r39 = dyn base5(<sym ext>);
        goto L1(r39);
      };
      p13 = prom<V +>{
        sym6 = ldf names;
        base6 = ldf names in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        subs = ld subs;
        subs1 = force? subs;
        checkMissing(subs1);
        names1 = ldf names in base;
        r46 = dyn names1(subs1);
        goto L0(r46);
      L2():
        r44 = dyn base6(<sym subs>);
        goto L0(r44);
      };
      r48 = dyn _in_(p12, p13);
      any = ldf any in base;
      r49 = dyn any(r48);
      goto L4(r49);
    L21():
      r35 = dyn base3(<lang `%in%`(c(class1, names(ext)), names(subs))>);
      goto L4(r35);
    L23():
      class20 = ld class1;
      class21 = force? class20;
      checkMissing(class21);
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L25() else L26();
    L24():
      r50 = dyn base7(<sym class1>, <lang names(subs)>);
      goto L5(r50);
    L6(r53):
      match = ldf match in base;
      r55 = dyn match(class21, r53, NA_INT, NULL);
      goto L5(r55);
    L7(dx5):
      st i = dx5;
      sym10 = ldf length;
      base10 = ldf length in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L32() else L33();
    L25():
      subs2 = ld subs;
      subs3 = force? subs2;
      checkMissing(subs3);
      names2 = ldf names in base;
      r54 = dyn names2(subs3);
      goto L6(r54);
    L26():
      r52 = dyn base8(<sym subs>);
      goto L6(r52);
    L27():
      dr4 = tryDispatchBuiltin.1("[", i1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L29() else L28(dr4);
    L28(i3):
      sym9 = ldf `is.na`;
      base9 = ldf `is.na` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L30() else L31();
    L8(i6, r57):
      r59 = `!`(r57);
      __4 = ldf `[` in base;
      r60 = dyn __4(i6, r59);
      goto L7(r60);
    L9(r62):
      c22 = `as.logical`(r62);
      if c22 then L34() else L10();
    L29():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L7(dx4);
    L30():
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      is_na = ldf `is.na` in base;
      r58 = dyn is_na(i8);
      goto L8(i3, r58);
    L31():
      r56 = dyn base9(<sym i>);
      goto L8(i3, r56);
    L32():
      i9 = ld i;
      i10 = force? i9;
      checkMissing(i10);
      length = ldf length in base;
      r63 = dyn length(i10);
      goto L9(r63);
    L33():
      r61 = dyn base10(<sym i>);
      goto L9(r61);
    L10():
      return FALSE;
    L34():
      subs4 = ld subs;
      subs5 = force? subs4;
      checkMissing(subs5);
      c23 = `is.object`(subs5);
      if c23 then L35() else L36(subs5);
    L11(dx7):
      return dx7;
    L35():
      dr6 = tryDispatchBuiltin.1("[[", subs5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L37() else L36(dr6);
    L36(subs7):
      i11 = ld i;
      i12 = force? i11;
      checkMissing(i12);
      c24 = `is.object`(i12);
      if c24 then L38() else L39(subs7, i12);
    L12(subs11, dx9):
      __6 = ldf `[[` in base;
      r65 = dyn __6(subs11, dx9);
      goto L11(r65);
    L37():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L11(dx6);
    L38():
      dr8 = tryDispatchBuiltin.1("[", i12);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L40() else L39(subs7, dr8);
    L39(subs9, i14):
      __5 = ldf `[` in base;
      r64 = dyn __5(i14, 1);
      goto L12(subs9, r64);
    L40():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L12(subs7, dx8);
    };
    r67 = dyn ____(p9, p14);
    check L26() else D6();
  D6():
    deopt 32 [r67];
  L26():
    popenv;
    return r67;
  }
}