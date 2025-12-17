fun main() {
  () -+> V { reg r:cls, reg isS3method:cls, reg r1:V, reg isS3method1:cls, reg r2:V, reg isS3method2:cls, reg r3:V, reg isS3method3:cls, reg r4:V, reg isS3method4:cls, reg r5:V, reg isS3method5:cls, reg r6:V, reg isS3method6:cls, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg c:cls, reg r10:V, reg ff:*, reg ff1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg isS3method7:cls, reg m:*, reg m1:V, reg p:p(V +), reg r12:V, reg c2:L, reg stop:cls, reg m2:*, reg m3:V, reg p1:p(V +), reg r14:V, reg i7:I, reg paste:cls, reg ff2:*, reg ff3:V, reg p2:p(V +), reg r17:V, reg m4:*, reg m5:V, reg s1:V, reg l1:I, reg i8:I, reg i9:I, reg i10:I, reg c3:L, reg x1:V, reg isS3method8:cls, reg m6:*, reg m7:V, reg p3:p(V +), reg r19:V, reg r20:V, reg c4:L, reg stop1:cls, reg m8:*, reg m9:V, reg p4:p(V +), reg r22:V, reg i15:I, reg stopifnot:cls, reg isS3method9:cls, reg r24:V, reg r25:V, reg p5:p(V +), reg isS3method10:cls, reg r27:V, reg r28:V, reg p6:p(V +), reg isS3method11:cls, reg r30:V, reg r31:V, reg p7:p(V +), reg isS3method12:cls, reg r33:V, reg r34:V, reg p8:p(V +), reg isS3method13:cls, reg r36:V, reg p9:p(V +), reg isS3method14:cls, reg r38:V, reg p10:p(V +), reg isS3method15:cls, reg r40:V, reg p11:p(V +), reg isS3method16:cls, reg r42:V, reg r43:V, reg p12:p(V +), reg isS3method17:cls, reg r45:V, reg r46:V, reg p13:p(V +), reg r48:V |
    mkenv;
    r = clos inner450295064;
    st isS3method = r;
    isS3method = ldf isS3method;
    check L9() else D0();
  D0():
    deopt 4 [];
  L9():
    r1 = dyn isS3method("t");
    check L10() else D1();
  D1():
    deopt 6 [r1];
  L10():
    isS3method1 = ldf isS3method;
    check L11() else D2();
  D2():
    deopt 8 [];
  L11():
    r2 = dyn isS3method1("t.default");
    check L12() else D3();
  D3():
    deopt 10 [r2];
  L12():
    isS3method2 = ldf isS3method;
    check L13() else D4();
  D4():
    deopt 12 [];
  L13():
    r3 = dyn isS3method2("t.ts");
    check L14() else D5();
  D5():
    deopt 14 [r3];
  L14():
    isS3method3 = ldf isS3method;
    check L15() else D6();
  D6():
    deopt 16 [];
  L15():
    r4 = dyn isS3method3("t.test");
    check L16() else D7();
  D7():
    deopt 18 [r4];
  L16():
    isS3method4 = ldf isS3method;
    check L17() else D8();
  D8():
    deopt 20 [];
  L17():
    r5 = dyn isS3method4("t.data.frame");
    check L18() else D9();
  D9():
    deopt 22 [r5];
  L18():
    isS3method5 = ldf isS3method;
    check L19() else D10();
  D10():
    deopt 24 [];
  L19():
    r6 = dyn isS3method5("t.lm");
    check L20() else D11();
  D11():
    deopt 26 [r6];
  L20():
    isS3method6 = ldf isS3method;
    check L21() else D12();
  D12():
    deopt 28 [];
  L21():
    r7 = dyn isS3method6("t.foo.bar");
    check L22() else D13();
  D13():
    deopt 30 [r7];
  L22():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r9):
    st ff = r9;
    ff = ld ff;
    check L26() else D15();
  L23():
    c = ldf c in base;
    r10 = dyn c("as.list", "as.matrix", "is.na", "row.names", "row.names<-");
    check L25() else D14();
  L24():
    r8 = dyn base("as.list", "as.matrix", "is.na", "row.names", "row.names<-");
    goto L0(r8);
  D14():
    deopt 39 [r10];
  D15():
    deopt 41 [ff];
  L25():
    goto L0(r10);
  L26():
    ff1 = force? ff;
    checkMissing(ff1);
    s = toForSeq(ff1);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L27() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st m = x;
    isS3method7 = ldf isS3method;
    check L28() else D16();
  L27():
    paste = ldf paste;
    check L34() else D20();
  D16():
    deopt 44 [i2];
  D20():
    deopt 58 [];
  L28():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r12 = dyn isS3method7(p);
    check L29() else D17();
  L34():
    p2 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    r17 = dyn paste[, , sep](p2, "data.frame", ".");
    check L35() else D21();
  D17():
    deopt 46 [i2, r12];
  D21():
    deopt 63 [r17];
  L29():
    c2 = `as.logical`(r12);
    if c2 then L30() else L2();
  L35():
    st m4 = r17;
    m4 = ld m4;
    check L36() else D22();
  D22():
    deopt 65 [m4];
  L2():
    goto L3(i2);
  L3(i7):
    goto L1(i7);
  L30():
    stop = ldf stop;
    check L31() else D18();
  L36():
    m5 = force? m4;
    checkMissing(m5);
    s1 = toForSeq(m5);
    l1 = length(s1);
    i8 = 0;
    goto L5(i8);
  D18():
    deopt 48 [i2];
  L5(i9):
    i10 = `+`.1(i9, 1);
    c3 = `<`.1(l1, i10);
    if c3 then L37() else L8();
  L31():
    p1 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r14 = dyn stop("wrongly declared an S3 method: ", p1);
    check L32() else D19();
  D19():
    deopt 51 [i2, r14];
  L8():
    x1 = `[[`(s1, i10, NULL, TRUE);
    st m = x1;
    isS3method8 = ldf isS3method;
    check L38() else D23();
  L32():
    goto L3(i2);
  L37():
    stopifnot = ldf stopifnot;
    check L44() else D27();
  D23():
    deopt 68 [i10];
  D27():
    deopt 83 [];
  L38():
    p3 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r19 = dyn isS3method8(p3);
    check L39() else D24();
  L44():
    p5 = prom<V +>{
      isS3method9 = ldf isS3method;
      r24 = dyn isS3method9("t");
      r25 = `!`(r24);
      return r25;
    };
    p6 = prom<V +>{
      isS3method10 = ldf isS3method;
      r27 = dyn isS3method10("t.test");
      r28 = `!`(r27);
      return r28;
    };
    p7 = prom<V +>{
      isS3method11 = ldf isS3method;
      r30 = dyn isS3method11("qr.coef");
      r31 = `!`(r30);
      return r31;
    };
    p8 = prom<V +>{
      isS3method12 = ldf isS3method;
      r33 = dyn isS3method12("sort.list");
      r34 = `!`(r33);
      return r34;
    };
    p9 = prom<V +>{
      isS3method13 = ldf isS3method;
      r36 = dyn isS3method13("t.default");
      return r36;
    };
    p10 = prom<V +>{
      isS3method14 = ldf isS3method;
      r38 = dyn isS3method14("t.ts");
      return r38;
    };
    p11 = prom<V +>{
      isS3method15 = ldf isS3method;
      r40 = dyn isS3method15("t.data.frame");
      return r40;
    };
    p12 = prom<V +>{
      isS3method16 = ldf isS3method;
      r42 = dyn isS3method16("t.lm");
      r43 = `!`(r42);
      return r43;
    };
    p13 = prom<V +>{
      isS3method17 = ldf isS3method;
      r45 = dyn isS3method17("t.foo.bar");
      r46 = `!`(r45);
      return r46;
    };
    r48 = dyn stopifnot(p5, p6, p7, p8, p9, p10, p11, p12, p13);
    check L45() else D28();
  D24():
    deopt 70 [i10, r19];
  D28():
    deopt 93 [r48];
  L39():
    r20 = `!`(r19);
    c4 = `as.logical`(r20);
    if c4 then L40() else L6();
  L45():
    popenv;
    return r48;
  L6():
    goto L7(i10);
  L7(i15):
    goto L5(i15);
  L40():
    stop1 = ldf stop;
    check L41() else D25();
  D25():
    deopt 73 [i10];
  L41():
    p4 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      return m9;
    };
    r22 = dyn stop1("not an S3 method: ", p4);
    check L42() else D26();
  D26():
    deopt 76 [i10, r22];
  L42():
    goto L7(i10);
  }
}
fun inner450295064(method, f, class, envir) {
  (reg method:*, reg f:*, reg class:*, reg envir:*) -+> V { var method:*, var f:*, var class:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg paste:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg class1:*, reg class2:V, reg p2:p(V +), reg r7:V, reg strsplit:cls, reg method1:*, reg method2:V, reg p3:p(V +), reg r10:V, reg c1:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg f_c:*, reg f_c1:V, reg length:cls, reg r16:V, reg nfc:*, reg nfc1:V, reg r17:V, reg c2:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg c7:L, reg r19:V, reg f_c2:*, reg f_c3:V, reg c8:L, reg r20:V, reg c9:L, reg c10:V, reg c12:L, reg c13:V, reg f_c4:*, reg f_c5:V, reg c15:L, reg c17:L, reg f_c7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c19:L, reg dx3:V, reg __1:cls, reg r21:V, reg r22:V, reg c20:L, reg c21:V, reg c23:L, reg nfc2:*, reg nfc3:V, reg r25:V, reg c24:L, reg f_c8:*, reg f_c9:V, reg c25:L, reg f_c11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r26:V, reg f_c12:*, reg f_c13:V, reg c26:L, reg f_c15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r27:V, reg nfc4:*, reg nfc5:V, reg r28:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c27:L, reg x:V, reg isS3method:cls, reg paste1:cls, reg f_c16:*, reg f_c17:V, reg c28:L, reg f_c19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg j:*, reg j1:V, reg r29:V, reg r30:V, reg __4:cls, reg r31:V, reg p4:p(V +), reg r33:V, reg p5:p(V +), reg paste2:cls, reg f_c20:*, reg f_c21:V, reg c29:L, reg f_c23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg j2:*, reg j3:V, reg nfc6:*, reg nfc7:V, reg r35:V, reg __5:cls, reg r36:V, reg p6:p(V +), reg r38:V, reg p7:p(V +), reg envir1:*, reg envir2:V, reg p8:p(V +), reg r41:V, reg c30:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg f3:*, reg f4:V, reg getKnownS3generics:cls, reg r46:V, reg r47:V, reg any:cls, reg r48:V, reg r49:V, reg c31:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg findGeneric:cls, reg f5:*, reg f6:V, reg p9:p(V +), reg envir3:*, reg envir4:V, reg p10:p(V +), reg r54:V, reg nzchar:cls, reg r55:V, reg r56:V, reg c32:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg get0:cls, reg method3:*, reg method4:V, reg p11:p(V +), reg envir5:*, reg envir6:V, reg p12:p(V +), reg r64:V, reg c33:V, reg r65:V, reg c34:L, reg isNamespace:cls, reg environment:cls, reg m:*, reg m1:V, reg p13:p(V +), reg r67:V, reg p14:p(V +), reg r69:V, reg c35:L, reg environmentName:cls, reg em:*, reg em1:V, reg p15:p(V +), reg r71:V, reg r72:V, reg is_primitive:cls, reg m2:*, reg m3:V, reg p16:p(V +), reg r74:V, reg c36:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r75:V, reg r76:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r77:V, reg r78:V, reg method5:*, reg method6:V, reg __6:cls, reg r79:V, reg r80:cls, reg pkg:*, reg pkg1:V, reg p17:p(V +), reg r82:V, reg match:cls, reg r83:V, reg is_na:cls, reg r84:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r87:V, reg r88:V, reg _knownS3Generics:*, reg _knownS3Generics1:V, reg c37:L, reg _knownS3Generics3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg f7:*, reg f8:V, reg __7:cls, reg r89:V, reg is_na1:cls, reg r90:V, reg r91:V, reg c38:L, reg asNamespace:cls, reg w:*, reg w1:V, reg p18:p(V +), reg r93:V, reg r94:V, reg _in_:cls, reg f9:*, reg f10:V, reg p19:p(V +), reg ___:cls, reg r96:V, reg r97:cls, reg r98:V, reg p20:p(V +), reg r100:V, reg c39:L, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg get1:cls, reg f11:*, reg f12:V, reg p21:p(V +), reg envir7:*, reg envir8:V, reg p22:p(V +), reg r103:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r104:V, reg r105:V, reg _isMethodsDispatchOn:cls, reg r106:V, reg c40:L, reg c42:V, reg __8:cls, reg r107:V, reg r108:cls, reg genfun:*, reg genfun1:V, reg p23:p(V +), reg r110:V, reg c43:L, reg c44:V, reg c46:L, reg __9:cls, reg r111:V, reg r112:cls, reg genfun2:*, reg genfun3:V, reg p24:p(V +), reg r114:V, reg _defenv_for_S3_registry:cls, reg genfun4:*, reg genfun5:V, reg p25:p(V +), reg r117:V, reg defenv:*, reg defenv1:V, reg c47:L, reg defenv3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __10:cls, reg r118:V, reg exists:cls, reg method7:*, reg method8:V, reg p26:p(V +), reg S3Table:*, reg S3Table1:V, reg p27:p(V +), reg r121:V |
    mkenv;
    st method = method;
    st f = f;
    st class = class;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L2(r3):
    c = `as.logical`(r3);
    if c then L46() else L3();
  L44():
    missing = ldf missing in base;
    r4 = dyn missing(<sym method>);
    goto L2(r4);
  L45():
    r2 = dyn base(<sym method>);
    goto L2(r2);
  L3():
    strsplit = ldf strsplit;
    check L50() else D2();
  L4():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L93() else L94();
  L46():
    paste = ldf paste;
    check L47() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 12 [];
  L20(r45):
    r49 = `!`(r45);
    c31 = `as.logical`(r49);
    if c31 then L99() else L21();
  L47():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p2 = prom<V +>{
      class1 = ld class;
      class2 = force? class1;
      checkMissing(class2);
      return class2;
    };
    r7 = dyn paste[, , sep](p1, p2, ".");
    check L48() else D1();
  L50():
    p3 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r10 = dyn strsplit[, , fixed](p3, ".", TRUE);
    check L51() else D3();
  L93():
    f3 = ld f;
    check L95() else D15();
  L94():
    r44 = dyn base3(<lang `==`(f, getKnownS3generics())>);
    goto L20(r44);
  D1():
    deopt 9 [r7];
  D3():
    deopt 17 [r10];
  D15():
    deopt 94 [f3];
  L21():
    goto L25();
  L25():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L109() else L110();
  L48():
    st method = r7;
    goto L4();
  L51():
    c1 = `is.object`(r10);
    if c1 then L52() else L53(r10);
  L95():
    f4 = force? f3;
    checkMissing(f4);
    getKnownS3generics = ldf getKnownS3generics;
    check L96() else D16();
  L99():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L100() else L101();
  D16():
    deopt 96 [f4];
  L5(dx1):
    st `f.c` = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  L22(r51):
    r56 = `!`(r51);
    c32 = `as.logical`(r56);
    if c32 then L105() else L23();
  L26(r61):
    r65 = `!`(r61);
    c34 = `as.logical`(r65);
    if c34 then L113() else L27();
  L52():
    dr = tryDispatchBuiltin.1("[[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(dr);
  L53(r12):
    __ = ldf `[[` in base;
    r13 = dyn __(r12, 1.0);
    goto L5(r13);
  L96():
    r46 = dyn getKnownS3generics();
    check L97() else D17();
  L100():
    findGeneric = ldf findGeneric;
    check L102() else D19();
  L101():
    r50 = dyn base4(<lang `<-`(f, findGeneric(f, envir))>);
    goto L22(r50);
  L109():
    get0 = ldf get0;
    check L111() else D22();
  L110():
    r60 = dyn base5(<lang `<-`(m, get0(method, envir=envir, mode="function"))>);
    goto L26(r60);
  D17():
    deopt 97 [f4, r46];
  D19():
    deopt 105 [];
  D22():
    deopt 122 [];
  L6(r15):
    st nfc = r15;
    nfc = ld nfc;
    check L59() else D6();
  L23():
    goto L25();
  L27():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L136() else L137();
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L55():
    f_c = ld `f.c`;
    check L57() else D4();
  L56():
    r14 = dyn base1(<sym f.c>);
    goto L6(r14);
  L97():
    r47 = `==`(f4, r46);
    any = ldf any in base;
    r48 = dyn any(r47);
    check L98() else D18();
  L102():
    p9 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p10 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r54 = dyn findGeneric(p9, p10);
    check L103() else D20();
  L105():
    popenv;
    return FALSE;
  L111():
    p11 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p12 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    r64 = dyn get0[, envir, mode](p11, p12, "function");
    check L112() else D23();
  L113():
    isNamespace = ldf isNamespace;
    check L114() else D24();
  D4():
    deopt 24 [f_c];
  D6():
    deopt 29 [nfc];
  D18():
    deopt 100 [r48];
  D20():
    deopt 108 [r54];
  D23():
    deopt 128 [r64];
  D24():
    deopt 133 [];
  L34(r88):
    r91 = `!`(r88);
    c38 = `as.logical`(r91);
    if c38 then L144() else L36();
  L57():
    f_c1 = force? f_c;
    checkMissing(f_c1);
    length = ldf length in base;
    r16 = dyn length(f_c1);
    check L58() else D5();
  L59():
    nfc1 = force? nfc;
    checkMissing(nfc1);
    r17 = `<`(nfc1, 2.0);
    c2 = `as.logical`(r17);
    if c2 then L7(c2) else L60();
  L98():
    goto L20(r48);
  L103():
    st f = r54;
    nzchar = ldf nzchar in base;
    r55 = dyn nzchar(r54);
    check L104() else D21();
  L112():
    st m = r64;
    c33 = `==`(r64, NULL);
    goto L26(c33);
  L114():
    p14 = prom<V +>{
      environment = ldf environment;
      p13 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        return m1;
      };
      r67 = dyn environment(p13);
      st em = r67;
      invisible.0();
      return r67;
    };
    r69 = dyn isNamespace(p14);
    check L115() else D25();
  L136():
    _knownS3Generics = ld `.knownS3Generics`;
    check L138() else D36();
  L137():
    r87 = dyn base8(<lang `<-`(w, `[`(.knownS3Generics, f))>);
    goto L34(r87);
  D5():
    deopt 27 [r16];
  D21():
    deopt 111 [r55];
  D25():
    deopt 135 [r69];
  D36():
    deopt 174 [_knownS3Generics];
  L7(c3):
    c12 = `as.logical`(c3);
    if c12 then L9(c12) else L65();
  L36():
    _in_ = ldf `%in%`;
    check L148() else D41();
  L37(r94):
    st defenv = r94;
    defenv = ld defenv;
    check L170() else D55();
  L58():
    goto L6(r16);
  L60():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L61() else L62();
  L104():
    goto L22(r55);
  L115():
    c35 = `as.logical`(r69);
    if c35 then L116() else L28();
  L138():
    _knownS3Generics1 = force? _knownS3Generics;
    checkMissing(_knownS3Generics1);
    c37 = `is.object`(_knownS3Generics1);
    if c37 then L139() else L140(_knownS3Generics1);
  L144():
    asNamespace = ldf asNamespace;
    check L145() else D39();
  D39():
    deopt 184 [];
  D41():
    deopt 188 [];
  D55():
    deopt 234 [defenv];
  L8(c7, r19):
    r20 = `!`(r19);
    c9 = `as.logical`(r20);
    c10 = `||`(c7, c9);
    goto L7(c10);
  L9(c13):
    c23 = `as.logical`(c13);
    if c23 then L71() else L11();
  L28():
    is_primitive = ldf `is.primitive`;
    check L120() else D28();
  L29(r72):
    st pkg = r72;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L124() else L125();
  L35(dx13):
    st w = dx13;
    is_na1 = ldf `is.na` in base;
    r90 = dyn is_na1(dx13);
    check L143() else D38();
  L61():
    f_c2 = ld `f.c`;
    check L63() else D7();
  L62():
    r18 = dyn base2(<sym f.c>);
    goto L8(c2, r18);
  L65():
    f_c4 = ld `f.c`;
    check L66() else D8();
  L116():
    environmentName = ldf environmentName;
    check L117() else D26();
  L139():
    dr12 = tryDispatchBuiltin.1("[", _knownS3Generics1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L141() else L140(dr12);
  L140(_knownS3Generics3):
    f7 = ld f;
    check L142() else D37();
  L145():
    p18 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    r93 = dyn asNamespace(p18);
    check L146() else D40();
  L148():
    p19 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    p20 = prom<V +>{
      ___ = ldf `:::`;
      r96 = dyn ___("tools", ".get_internal_S3_generics");
      checkFun.0(r96);
      r97 = r96 as cls;
      r98 = dyn r97();
      return r98;
    };
    r100 = dyn _in_(p19, p20);
    check L149() else D42();
  L170():
    defenv1 = force? defenv;
    checkMissing(defenv1);
    c47 = `is.object`(defenv1);
    if c47 then L171() else L172(defenv1);
  D7():
    deopt 34 [c2, f_c2];
  D8():
    deopt 39 [c12, f_c4];
  D26():
    deopt 137 [];
  D28():
    deopt 141 [];
  D37():
    deopt 176 [_knownS3Generics3, f7];
  D38():
    deopt 181 [r90];
  D40():
    deopt 186 [r93];
  D42():
    deopt 191 [r100];
  L11():
    nfc2 = ld nfc;
    check L74() else D9();
  L31(r76):
    popenv;
    return r76;
  L43(dx15):
    st S3Table = dx15;
    exists = ldf exists;
    check L174() else D56();
  L63():
    f_c3 = force? f_c2;
    checkMissing(f_c3);
    c8 = `is.character`(f_c3);
    goto L8(c2, c8);
  L66():
    f_c5 = force? f_c4;
    checkMissing(f_c5);
    c15 = `is.object`(f_c5);
    if c15 then L67() else L68(c12, f_c5);
  L71():
    popenv;
    return FALSE;
  L117():
    p15 = prom<V +>{
      em = ld em;
      em1 = force? em;
      checkMissing(em1);
      return em1;
    };
    r71 = dyn environmentName(p15);
    check L118() else D27();
  L120():
    p16 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r74 = dyn is_primitive(p16);
    check L121() else D29();
  L124():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L126() else L127();
  L125():
    r75 = dyn base6(<lang match(method, `::`(tools, nonS3methods)(pkg))>);
    goto L31(r75);
  L141():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L35(dx12);
  L142():
    f8 = force? f7;
    __7 = ldf `[` in base;
    r89 = dyn __7(_knownS3Generics3, f8);
    goto L35(r89);
  L143():
    goto L34(r90);
  L146():
    goto L37(r93);
  L149():
    c39 = `as.logical`(r100);
    if c39 then L150() else L38();
  L171():
    dr14 = tryDispatchBuiltin.1("[[", defenv1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L173() else L172(dr14);
  L172(defenv3):
    __10 = ldf `[[` in base;
    r118 = dyn __10(defenv3, ".__S3MethodsTable__.");
    goto L43(r118);
  D9():
    deopt 52 [nfc2];
  D27():
    deopt 139 [r71];
  D29():
    deopt 143 [r74];
  D56():
    deopt 241 [];
  L10(c19, dx3):
    r22 = `==`(dx3, "");
    c20 = `as.logical`(r22);
    c21 = `||`(c19, c20);
    goto L9(c21);
  L32(r78):
    is_na = ldf `is.na` in base;
    r84 = dyn is_na(r78);
    check L133() else D35();
  L38():
    get1 = ldf get;
    check L153() else D44();
  L67():
    dr2 = tryDispatchBuiltin.1("[[", f_c5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L69() else L68(c12, dr2);
  L68(c17, f_c7):
    __1 = ldf `[[` in base;
    r21 = dyn __1(f_c7, 1);
    goto L10(c17, r21);
  L74():
    nfc3 = force? nfc2;
    checkMissing(nfc3);
    r25 = `==`(nfc3, 2.0);
    c24 = `as.logical`(r25);
    if c24 then L75() else L13();
  L118():
    goto L29(r71);
  L121():
    c36 = `as.logical`(r74);
    if c36 then L122() else L30();
  L126():
    method5 = ld method;
    check L128() else D30();
  L127():
    r77 = dyn base7(<sym method>, <lang `::`(tools, nonS3methods)(pkg)>);
    goto L32(r77);
  L150():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L151() else D43();
  L173():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L43(dx14);
  L174():
    p26 = prom<V +>{
      method7 = ld method;
      method8 = force? method7;
      checkMissing(method8);
      return method8;
    };
    p27 = prom<V +>{
      S3Table = ld S3Table;
      S3Table1 = force? S3Table;
      checkMissing(S3Table1);
      return S3Table1;
    };
    r121 = dyn exists[, envir, inherits](p26, p27, FALSE);
    check L175() else D57();
  D30():
    deopt 153 [method5];
  D35():
    deopt 168 [r84];
  D43():
    deopt 192 [_BaseNamespaceEnv];
  D44():
    deopt 195 [];
  D57():
    deopt 247 [r121];
  L13():
    nfc4 = ld nfc;
    check L85() else D12();
  L30():
    goto L29(NULL);
  L69():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(c12, dx2);
  L75():
    f_c8 = ld `f.c`;
    check L76() else D10();
  L122():
    goto L29("base");
  L128():
    method6 = force? method5;
    checkMissing(method6);
    __6 = ldf `::`;
    check L129() else D31();
  L133():
    goto L31(r84);
  L151():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    goto L37(_BaseNamespaceEnv1);
  L153():
    p21 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    p22 = prom<V +>{
      envir7 = ld envir;
      envir8 = force? envir7;
      checkMissing(envir8);
      return envir8;
    };
    r103 = dyn get1[, mode, envir](p21, "function", p22);
    check L154() else D45();
  L175():
    popenv;
    return r121;
  D10():
    deopt 56 [f_c8];
  D12():
    deopt 69 [2.0, nfc4];
  D31():
    deopt 156 [];
  D45():
    deopt 201 [r103];
  L76():
    f_c9 = force? f_c8;
    checkMissing(f_c9);
    c25 = `is.object`(f_c9);
    if c25 then L77() else L78(f_c9);
  L85():
    nfc5 = force? nfc4;
    checkMissing(nfc5);
    r28 = `:`(2.0, nfc5);
    s = toForSeq(r28);
    l = length(s);
    i = 0;
    goto L16(i);
  L129():
    r79 = dyn __6("tools", "nonS3methods");
    check L130() else D32();
  L154():
    st genfun = r103;
    sym9 = ldf `.isMethodsDispatchOn`;
    base9 = ldf `.isMethodsDispatchOn` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L155() else L156();
  D32():
    deopt 159 [r79];
  L14(dx5):
    st f = dx5;
    f_c12 = ld `f.c`;
    check L80() else D11();
  L16(i1):
    i2 = `+`.1(i1, 1);
    c27 = `<`.1(l, i2);
    if c27 then L86() else L19();
  L39(r105):
    c40 = `as.logical`(r105);
    if c40 then L158() else L40(c40);
  L77():
    dr4 = tryDispatchBuiltin.1("[[", f_c9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L79() else L78(dr4);
  L78(f_c11):
    __2 = ldf `[[` in base;
    r26 = dyn __2(f_c11, 1);
    goto L14(r26);
  L130():
    checkFun.0(r79);
    r80 = r79 as cls;
    p17 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r82 = dyn r80(p17);
    check L131() else D33();
  L155():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r106 = dyn _isMethodsDispatchOn();
    check L157() else D46();
  L156():
    r104 = dyn base9();
    goto L39(r104);
  D11():
    deopt 62 [f_c12];
  D33():
    deopt 162 [r82];
  D46():
    deopt 206 [r106];
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    isS3method = ldf isS3method;
    check L87() else D13();
  L40(c42):
    c46 = `as.logical`(c42);
    if c46 then L163() else L41();
  L79():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L80():
    f_c13 = force? f_c12;
    checkMissing(f_c13);
    c26 = `is.object`(f_c13);
    if c26 then L81() else L82(f_c13);
  L86():
    popenv;
    return FALSE;
  L131():
    match = ldf match in base;
    r83 = dyn match(method6, r82, NA_INT, NULL);
    check L132() else D34();
  L157():
    goto L39(r106);
  L158():
    __8 = ldf `::`;
    check L159() else D47();
  D13():
    deopt 73 [i2];
  D34():
    deopt 166 [r83];
  D47():
    deopt 208 [c40];
  L15(dx7):
    st class = dx7;
    goto L4();
  L41():
    goto L42();
  L42():
    _defenv_for_S3_registry = ldf `.defenv_for_S3_registry`;
    check L168() else D53();
  L81():
    dr6 = tryDispatchBuiltin.1("[[", f_c13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(dr6);
  L82(f_c15):
    __3 = ldf `[[` in base;
    r27 = dyn __3(f_c15, 2);
    goto L15(r27);
  L87():
    p5 = prom<V +>{
      paste1 = ldf paste;
      p4 = prom<V +>{
        f_c16 = ld `f.c`;
        f_c17 = force? f_c16;
        checkMissing(f_c17);
        c28 = `is.object`(f_c17);
        if c28 then L1() else L2(f_c17);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", f_c17);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(f_c19):
        j = ld j;
        j1 = force? j;
        checkMissing(j1);
        r29 = `-`(j1, 1.0);
        r30 = `:`(1.0, r29);
        __4 = ldf `[` in base;
        r31 = dyn __4(f_c19, r30);
        goto L0(r31);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r33 = dyn paste1[, collapse](p4, ".");
      return r33;
    };
    p7 = prom<V +>{
      paste2 = ldf paste;
      p6 = prom<V +>{
        f_c20 = ld `f.c`;
        f_c21 = force? f_c20;
        checkMissing(f_c21);
        c29 = `is.object`(f_c21);
        if c29 then L1() else L2(f_c21);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", f_c21);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(f_c23):
        j2 = ld j;
        j3 = force? j2;
        checkMissing(j3);
        nfc6 = ld nfc;
        nfc7 = force? nfc6;
        checkMissing(nfc7);
        r35 = `:`(j3, nfc7);
        __5 = ldf `[` in base;
        r36 = dyn __5(f_c23, r35);
        goto L0(r36);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r38 = dyn paste2[, collapse](p6, ".");
      return r38;
    };
    p8 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r41 = dyn isS3method[f, class, envir](p5, p7, p8);
    check L88() else D14();
  L132():
    goto L32(r83);
  L159():
    r107 = dyn __8("methods", "is");
    check L160() else D48();
  L163():
    __9 = ldf `::`;
    check L164() else D50();
  D14():
    deopt 80 [i2, r41];
  D48():
    deopt 211 [c40, r107];
  D50():
    deopt 218 [];
  D53():
    deopt 230 [];
  L83():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L88():
    c30 = `as.logical`(r41);
    if c30 then L89() else L17();
  L160():
    checkFun.0(r107);
    r108 = r107 as cls;
    p23 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r110 = dyn r108(p23, "genericFunction");
    check L161() else D49();
  L164():
    r111 = dyn __9("methods", "selectMethod");
    check L165() else D51();
  L168():
    p25 = prom<V +>{
      genfun4 = ld genfun;
      genfun5 = force? genfun4;
      checkMissing(genfun5);
      return genfun5;
    };
    r117 = dyn _defenv_for_S3_registry(p25);
    check L169() else D54();
  D49():
    deopt 215 [c40, r110];
  D51():
    deopt 221 [r111];
  D54():
    deopt 232 [r117];
  L17():
    goto L16(i2);
  L89():
    popenv;
    return TRUE;
  L161():
    c43 = `as.logical`(r110);
    c44 = `&&`(c40, c43);
    goto L40(c44);
  L165():
    checkFun.0(r111);
    r112 = r111 as cls;
    p24 = prom<V +>{
      genfun2 = ld genfun;
      genfun3 = force? genfun2;
      checkMissing(genfun3);
      return genfun3;
    };
    r114 = dyn r112(p24, "ANY");
    check L166() else D52();
  L169():
    goto L37(r117);
  D52():
    deopt 225 [r114];
  L166():
    st genfun = r114;
    goto L42();
  }
}