fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner170918803;
    st `.debugcall` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner170918803(call, op) {
  (reg call:*, reg op:*) -+> V { var call:*, var op:*, reg deparse:cls, reg call1:*, reg call2:V, reg c:L, reg call4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg get:cls, reg funsym:*, reg funsym1:V, reg p1:p(V +), reg parent_frame:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg isNamespaceLoaded:cls, reg r7:V, reg is_primitive:cls, reg func:*, reg func1:V, reg p3:p(V +), reg r9:V, reg c1:L, reg have_methods:*, reg have_methods1:V, reg c2:L, reg __1:cls, reg r10:V, reg r11:cls, reg func2:*, reg func3:V, reg p4:p(V +), reg r13:V, reg r14:V, reg r15:V, reg func4:*, reg func5:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg func6:*, reg func7:V, reg c3:V, reg c4:L, reg stop:cls, reg r18:V, reg match_call:cls, reg func8:*, reg func9:V, reg p5:p(V +), reg call5:*, reg call6:V, reg p6:p(V +), reg r22:V, reg parent_frame1:cls, reg r23:V, reg have_methods2:*, reg have_methods3:V, reg c5:L, reg c7:V, reg __2:cls, reg r24:V, reg r25:cls, reg funsym2:*, reg funsym3:V, reg p7:p(V +), reg env:*, reg env1:V, reg p8:p(V +), reg r28:V, reg c8:L, reg c9:V, reg isS4Generic:*, reg isS4Generic1:V, reg r29:V, reg c11:L, reg isS3stdGeneric:cls, reg func10:*, reg func11:V, reg p9:p(V +), reg r31:V, reg s3ret:*, reg s3ret1:V, reg c12:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r32:V, reg r33:V, reg s3ret2:*, reg s3ret3:V, reg names:cls, reg r34:V, reg eval:cls, reg mcall:*, reg mcall1:V, reg c13:L, reg mcall3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __3:cls, reg r35:V, reg p10:p(V +), reg env2:*, reg env3:V, reg p11:p(V +), reg r38:V, reg getS3method:cls, reg genname:*, reg genname1:V, reg p12:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg arg:*, reg arg1:V, reg class:cls, reg r42:V, reg p13:p(V +), reg r44:V, reg _signatureFromCall:cls, reg func12:*, reg func13:V, reg p14:p(V +), reg mcall4:*, reg mcall5:V, reg p15:p(V +), reg env4:*, reg env5:V, reg p16:p(V +), reg r50:V, reg op1:cls, reg func14:*, reg func15:V, reg p17:p(V +), reg sig:*, reg sig1:V, reg p18:p(V +), reg r53:V |
    mkenv;
    st call = call;
    st op = op;
    deparse = ldf deparse;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      c = `is.object`(call2);
      if c then L1() else L2(call2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", call2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(call4):
      __ = ldf `[[` in base;
      r = dyn __(call4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn deparse(p);
    check L14() else D1();
  D1():
    deopt 3 [r2];
  L14():
    st funsym = r2;
    get = ldf get;
    check L15() else D2();
  D2():
    deopt 6 [];
  L15():
    p1 = prom<V +>{
      funsym = ld funsym;
      funsym1 = force? funsym;
      checkMissing(funsym1);
      return funsym1;
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r4 = dyn parent_frame(2);
      return r4;
    };
    r6 = dyn get[, , mode](p1, p2, "function");
    check L16() else D3();
  D3():
    deopt 11 [r6];
  L16():
    st func = r6;
    isNamespaceLoaded = ldf isNamespaceLoaded;
    check L17() else D4();
  D4():
    deopt 14 [];
  L17():
    r7 = dyn isNamespaceLoaded("methods");
    check L18() else D5();
  D5():
    deopt 16 [r7];
  L18():
    st `have.methods` = r7;
    is_primitive = ldf `is.primitive`;
    check L19() else D6();
  D6():
    deopt 19 [];
  L19():
    p3 = prom<V +>{
      func = ld func;
      func1 = force? func;
      checkMissing(func1);
      return func1;
    };
    r9 = dyn is_primitive(p3);
    check L20() else D7();
  D7():
    deopt 21 [r9];
  L20():
    c1 = `as.logical`(r9);
    if c1 then L21() else L0();
  L0():
    func4 = ld func;
    check L29() else D12();
  L3(r15):
    st func = r15;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L21():
    have_methods = ld `have.methods`;
    check L22() else D8();
  D8():
    deopt 22 [have_methods];
  D12():
    deopt 34 [func4];
  L4(r17):
    c4 = `as.logical`(r17);
    if c4 then L33() else L5();
  L22():
    have_methods1 = force? have_methods;
    checkMissing(have_methods1);
    c2 = `as.logical`(have_methods1);
    if c2 then L23() else L1();
  L29():
    func5 = force? func4;
    checkMissing(func5);
    goto L3(func5);
  L30():
    func6 = ld func;
    check L32() else D13();
  L31():
    r16 = dyn base(<sym func>);
    goto L4(r16);
  D13():
    deopt 38 [func6];
  L1():
    goto L2(NULL);
  L2(r14):
    goto L3(r14);
  L5():
    goto L6();
  L6():
    match_call = ldf `match.call`;
    check L37() else D16();
  L23():
    __1 = ldf `::`;
    check L24() else D9();
  L32():
    func7 = force? func6;
    checkMissing(func7);
    c3 = `==`(func7, NULL);
    goto L4(c3);
  L33():
    stop = ldf stop;
    check L34() else D14();
  D9():
    deopt 25 [];
  D14():
    deopt 42 [];
  D16():
    deopt 48 [];
  L24():
    r10 = dyn __1("methods", "getGeneric");
    check L25() else D10();
  L34():
    r18 = dyn stop("Cannot debug primitive functions unless they are implicit generics (requires loading the methods package)");
    check L35() else D15();
  L37():
    p5 = prom<V +>{
      func8 = ld func;
      func9 = force? func8;
      checkMissing(func9);
      return func9;
    };
    p6 = prom<V +>{
      call5 = ld call;
      call6 = force? call5;
      checkMissing(call6);
      return call6;
    };
    r22 = dyn match_call(p5, p6);
    check L38() else D17();
  D10():
    deopt 28 [r10];
  D15():
    deopt 44 [r18];
  D17():
    deopt 51 [r22];
  L25():
    checkFun.0(r10);
    r11 = r10 as cls;
    p4 = prom<V +>{
      func2 = ld func;
      func3 = force? func2;
      checkMissing(func3);
      return func3;
    };
    r13 = dyn r11(p4);
    check L26() else D11();
  L35():
    goto L6();
  L38():
    st mcall = r22;
    parent_frame1 = ldf `parent.frame`;
    check L39() else D18();
  D11():
    deopt 31 [r13];
  D18():
    deopt 54 [];
  L26():
    goto L2(r13);
  L39():
    r23 = dyn parent_frame1(2);
    check L40() else D19();
  D19():
    deopt 56 [r23];
  L40():
    st env = r23;
    have_methods2 = ld `have.methods`;
    check L41() else D20();
  D20():
    deopt 58 [have_methods2];
  L41():
    have_methods3 = force? have_methods2;
    checkMissing(have_methods3);
    c5 = `as.logical`(have_methods3);
    if c5 then L42() else L7(c5);
  L7(c7):
    st isS4Generic = c7;
    isS4Generic = ld isS4Generic;
    check L47() else D24();
  L42():
    __2 = ldf `::`;
    check L43() else D21();
  D21():
    deopt 61 [c5];
  D24():
    deopt 71 [isS4Generic];
  L43():
    r24 = dyn __2("methods", "isGeneric");
    check L44() else D22();
  L47():
    isS4Generic1 = force? isS4Generic;
    checkMissing(isS4Generic1);
    r29 = `!`(isS4Generic1);
    c11 = `as.logical`(r29);
    if c11 then L48() else L8();
  D22():
    deopt 64 [c5, r24];
  L8():
    _signatureFromCall = ldf `.signatureFromCall`;
    check L63() else D34();
  L12():
    op1 = ldf op;
    check L65() else D36();
  L44():
    checkFun.0(r24);
    r25 = r24 as cls;
    p7 = prom<V +>{
      funsym2 = ld funsym;
      funsym3 = force? funsym2;
      checkMissing(funsym3);
      return funsym3;
    };
    p8 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r28 = dyn r25(p7, p8);
    check L45() else D23();
  L48():
    isS3stdGeneric = ldf isS3stdGeneric;
    check L49() else D25();
  D23():
    deopt 68 [c5, r28];
  D25():
    deopt 75 [];
  D34():
    deopt 107 [];
  D36():
    deopt 114 [];
  L45():
    c8 = `as.logical`(r28);
    c9 = `&&`(c5, c8);
    goto L7(c9);
  L49():
    p9 = prom<V +>{
      func10 = ld func;
      func11 = force? func10;
      checkMissing(func11);
      return func11;
    };
    r31 = dyn isS3stdGeneric(p9);
    check L50() else D26();
  L63():
    p14 = prom<V +>{
      func12 = ld func;
      func13 = force? func12;
      checkMissing(func13);
      return func13;
    };
    p15 = prom<V +>{
      mcall4 = ld mcall;
      mcall5 = force? mcall4;
      checkMissing(mcall5);
      return mcall5;
    };
    p16 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r50 = dyn _signatureFromCall(p14, p15, p16);
    check L64() else D35();
  L65():
    p17 = prom<V +>{
      func14 = ld func;
      func15 = force? func14;
      checkMissing(func15);
      return func15;
    };
    p18 = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    r53 = dyn op1[, signature](p17, p18);
    check L66() else D37();
  D26():
    deopt 77 [r31];
  D35():
    deopt 111 [r50];
  D37():
    deopt 118 [r53];
  L50():
    st s3ret = r31;
    s3ret = ld s3ret;
    check L51() else D27();
  L64():
    st sig = r50;
    goto L12();
  L66():
    popenv;
    return r53;
  D27():
    deopt 79 [s3ret];
  L51():
    s3ret1 = force? s3ret;
    checkMissing(s3ret1);
    c12 = `as.logical`(s3ret1);
    if c12 then L52() else L9();
  L9():
    goto L11();
  L11():
    st sig = NULL;
    goto L12();
  L52():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L53() else L54();
  L10(r33):
    st genname = r33;
    eval = ldf eval;
    check L57() else D30();
  L53():
    s3ret2 = ld s3ret;
    check L55() else D28();
  L54():
    r32 = dyn base1(<sym s3ret>);
    goto L10(r32);
  D28():
    deopt 83 [s3ret2];
  D30():
    deopt 89 [];
  L55():
    s3ret3 = force? s3ret2;
    checkMissing(s3ret3);
    names = ldf names in base;
    r34 = dyn names(s3ret3);
    check L56() else D29();
  L57():
    p10 = prom<V +>{
      mcall = ld mcall;
      mcall1 = force? mcall;
      checkMissing(mcall1);
      c13 = `is.object`(mcall1);
      if c13 then L1() else L2(mcall1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", mcall1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(mcall3):
      __3 = ldf `[[` in base;
      r35 = dyn __3(mcall3, 2);
      goto L0(r35);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p11 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r38 = dyn eval[, envir](p10, p11);
    check L58() else D31();
  D29():
    deopt 86 [r34];
  D31():
    deopt 93 [r38];
  L56():
    goto L10(r34);
  L58():
    st arg = r38;
    getS3method = ldf getS3method;
    check L59() else D32();
  D32():
    deopt 96 [];
  L59():
    p12 = prom<V +>{
      genname = ld genname;
      genname1 = force? genname;
      checkMissing(genname1);
      return genname1;
    };
    p13 = prom<V +>{
      sym2 = ldf class;
      base2 = ldf class in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      arg = ld arg;
      arg1 = force? arg;
      checkMissing(arg1);
      class = ldf class in base;
      r42 = dyn class(arg1);
      goto L0(r42);
    L2():
      r40 = dyn base2(<sym arg>);
      goto L0(r40);
    };
    r44 = dyn getS3method(p12, p13);
    check L60() else D33();
  D33():
    deopt 99 [r44];
  L60():
    st func = r44;
    goto L11();
  }
}