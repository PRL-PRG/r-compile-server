fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg setGeneric:cls, reg r2:V, reg setMethod:cls, reg r3:cls, reg p:p(V +), reg r5:V, reg hasMethod:cls, reg r6:V, reg hasMethod1:cls, reg r7:V, reg existsMethod:cls, reg r8:V, reg hasMethod2:cls, reg r9:V, reg hasMethod3:cls, reg r10:V, reg stopifnot:cls, reg isGeneric:cls, reg r11:V, reg p1:p(V +), reg hasMethod4:cls, reg r13:V, reg p2:p(V +), reg hasMethod5:cls, reg r15:V, reg p3:p(V +), reg existsMethod1:cls, reg r17:V, reg r18:V, reg p4:p(V +), reg hasMethod6:cls, reg r20:V, reg p5:p(V +), reg hasMethod7:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg removeGeneric:cls, reg r25:V |
    mkenv;
    r = clos inner114861000;
    st getMethod = r;
    r1 = clos inner2501545716;
    st testFun = r1;
    setGeneric = ldf setGeneric;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r2 = dyn setGeneric("testFun");
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    setMethod = ldf setMethod;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p = prom<V +>{
      r3 = clos inner2501545716;
      return r3;
    };
    r5 = dyn setMethod("testFun", "numeric", p);
    check L3() else D3();
  D3():
    deopt 15 [r5];
  L3():
    hasMethod = ldf hasMethod;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    r6 = dyn hasMethod("testFun", "numeric");
    check L5() else D5();
  D5():
    deopt 20 [r6];
  L5():
    hasMethod1 = ldf hasMethod;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    r7 = dyn hasMethod1("testFun", "integer");
    check L7() else D7();
  D7():
    deopt 25 [r7];
  L7():
    existsMethod = ldf existsMethod;
    check L8() else D8();
  D8():
    deopt 27 [];
  L8():
    r8 = dyn existsMethod("testFun", "integer");
    check L9() else D9();
  D9():
    deopt 30 [r8];
  L9():
    hasMethod2 = ldf hasMethod;
    check L10() else D10();
  D10():
    deopt 32 [];
  L10():
    r9 = dyn hasMethod2("testFun");
    check L11() else D11();
  D11():
    deopt 34 [r9];
  L11():
    hasMethod3 = ldf hasMethod;
    check L12() else D12();
  D12():
    deopt 36 [];
  L12():
    r10 = dyn hasMethod3("testFun", "ANY");
    check L13() else D13();
  D13():
    deopt 39 [r10];
  L13():
    stopifnot = ldf stopifnot;
    check L14() else D14();
  D14():
    deopt 41 [];
  L14():
    p1 = prom<V +>{
      isGeneric = ldf isGeneric;
      r11 = dyn isGeneric("testFun");
      return r11;
    };
    p2 = prom<V +>{
      hasMethod4 = ldf hasMethod;
      r13 = dyn hasMethod4("testFun", "numeric");
      return r13;
    };
    p3 = prom<V +>{
      hasMethod5 = ldf hasMethod;
      r15 = dyn hasMethod5("testFun", "integer");
      return r15;
    };
    p4 = prom<V +>{
      existsMethod1 = ldf existsMethod;
      r17 = dyn existsMethod1("testFun", "integer");
      r18 = `!`(r17);
      return r18;
    };
    p5 = prom<V +>{
      hasMethod6 = ldf hasMethod;
      r20 = dyn hasMethod6("testFun");
      return r20;
    };
    p6 = prom<V +>{
      hasMethod7 = ldf hasMethod;
      r22 = dyn hasMethod7("testFun", "ANY");
      return r22;
    };
    r24 = dyn stopifnot(p1, p2, p3, p4, p5, p6);
    check L15() else D15();
  D15():
    deopt 48 [r24];
  L15():
    removeGeneric = ldf removeGeneric;
    check L16() else D16();
  D16():
    deopt 50 [];
  L16():
    r25 = dyn removeGeneric("testFun");
    check L17() else D17();
  D17():
    deopt 52 [r25];
  L17():
    popenv;
    return r25;
  }
}
fun inner114861000(f, signature, where, optional, mlist, fdef) {
  (reg f:*, reg signature:*, reg where:*, reg optional:*, reg mlist:*, reg fdef:*) -+> V { var f:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var mlist:*, var fdef:*, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg r9:V, reg c:L, reg _NamespaceOrEnvironment:cls, reg where1:*, reg where2:V, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg env:*, reg env1:V, reg c1:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg deparse:cls, reg where3:*, reg where4:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg env2:*, reg env3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg missing1:cls, reg r23:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg missing2:cls, reg r26:V, reg c4:L, reg getGeneric:cls, reg f1:*, reg f2:V, reg p7:p(V +), reg r28:V, reg r29:V, reg getGeneric1:cls, reg f3:*, reg f4:V, reg p8:p(V +), reg where5:*, reg where6:V, reg p9:p(V +), reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg fdef1:*, reg fdef2:V, reg c5:V, reg c6:L, reg getGeneric2:cls, reg f5:*, reg f6:V, reg p10:p(V +), reg r36:V, reg is:cls, reg fdef3:*, reg fdef4:V, reg p11:p(V +), reg r39:V, reg r40:V, reg c7:L, reg optional1:*, reg optional2:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg f7:*, reg f8:V, reg c9:L, reg r45:V, reg c10:L, reg deparse1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg substitute:cls, reg r48:V, reg p12:p(V +), reg r50:V, reg stop1:cls, reg gettextf1:cls, reg f9:*, reg f10:V, reg p13:p(V +), reg r53:V, reg p14:p(V +), reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg missing3:cls, reg r59:V, reg c11:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg missing4:cls, reg r62:V, reg c12:L, reg getMethodsForDispatch:cls, reg fdef5:*, reg fdef6:V, reg p15:p(V +), reg r64:V, reg r65:V, reg _getMethodsTableMetaData:cls, reg fdef7:*, reg fdef8:V, reg p16:p(V +), reg where7:*, reg where8:V, reg p17:p(V +), reg optional3:*, reg optional4:V, reg p18:p(V +), reg r69:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:V, reg mlist1:*, reg mlist2:V, reg is_environment:cls, reg r73:V, reg c13:L, reg matchSignature:cls, reg signature1:*, reg signature2:V, reg p19:p(V +), reg fdef9:*, reg fdef10:V, reg p20:p(V +), reg r76:V, reg _findMethodInTable:cls, reg signature3:*, reg signature4:V, reg p21:p(V +), reg mlist3:*, reg mlist4:V, reg p22:p(V +), reg fdef11:*, reg fdef12:V, reg p23:p(V +), reg r80:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg value:*, reg value1:V, reg c14:V, reg c15:L, reg c17:V, reg optional5:*, reg optional6:V, reg r83:V, reg c18:L, reg c19:V, reg c21:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r84:V, reg r85:V, reg f11:*, reg f12:V, reg c22:L, reg r86:V, reg c23:L, reg deparse2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r87:V, reg r88:V, reg substitute1:cls, reg r89:V, reg p24:p(V +), reg r91:V, reg stop2:cls, reg gettextf2:cls, reg f13:*, reg f14:V, reg p25:p(V +), reg paste:cls, reg signature5:*, reg signature6:V, reg p26:p(V +), reg r95:V, reg p27:p(V +), reg r97:V, reg p28:p(V +), reg r99:V, reg value2:*, reg value3:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r103:V, reg r104:V, reg mlist5:*, reg mlist6:V, reg c24:V, reg c25:L, reg mlist7:*, reg mlist8:V, reg stop3:cls, reg r106:V |
    mkenv;
    st f = f;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L0() else L1(signature);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(signature_orDefault):
    st signature = signature_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p2 = prom<V +>{
      topenv = ldf topenv;
      p1 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r2 = dyn parent_frame();
        return r2;
      };
      r4 = dyn topenv(p1);
      return r4;
    };
    goto L3(p2);
  L3(where_orDefault):
    st where = where_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L4(FALSE) else L4(optional);
  L4(optional_orDefault):
    st optional = optional_orDefault;
    st mlist = mlist;
    st fdef = fdef;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L5(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L46() else L6();
  L44():
    missing = ldf missing in base;
    r8 = dyn missing(<sym where>);
    goto L5(r8);
  L45():
    r6 = dyn base(<sym where>);
    goto L5(r6);
  L6():
    goto L10();
  L10():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L46():
    _NamespaceOrEnvironment = ldf `.NamespaceOrEnvironment`;
    check L47() else D0();
  D0():
    deopt 5 [];
  L11(r22):
    c3 = `as.logical`(r22);
    if c3 then L60() else L12();
  L47():
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r11 = dyn _NamespaceOrEnvironment(p3);
    check L48() else D1();
  L58():
    missing1 = ldf missing in base;
    r23 = dyn missing1(<sym fdef>);
    goto L11(r23);
  L59():
    r21 = dyn base2(<sym fdef>);
    goto L11(r21);
  D1():
    deopt 7 [r11];
  L12():
    goto L18();
  L18():
    is = ldf is;
    check L77() else D13();
  L48():
    st env = r11;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L60():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  D13():
    deopt 61 [];
  L7(r13):
    c2 = `as.logical`(r13);
    if c2 then L52() else L8();
  L13(r25):
    c4 = `as.logical`(r25);
    if c4 then L63() else L14();
  L49():
    env = ld env;
    check L51() else D2();
  L50():
    r12 = dyn base1(<sym env>);
    goto L7(r12);
  L61():
    missing2 = ldf missing in base;
    r26 = dyn missing2(<sym where>);
    goto L13(r26);
  L62():
    r24 = dyn base3(<sym where>);
    goto L13(r24);
  L77():
    p11 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r39 = dyn is(p11, "genericFunction");
    check L78() else D14();
  D2():
    deopt 10 [env];
  D14():
    deopt 64 [r39];
  L8():
    goto L9();
  L9():
    env2 = ld env;
    check L56() else D5();
  L14():
    getGeneric1 = ldf getGeneric;
    check L67() else D8();
  L15(r29):
    goto L18();
  L51():
    env1 = force? env;
    checkMissing(env1);
    c1 = `==`(env1, NULL);
    goto L7(c1);
  L52():
    stop = ldf stop;
    check L53() else D3();
  L63():
    getGeneric = ldf getGeneric;
    check L64() else D6();
  L78():
    r40 = `!`(r39);
    c7 = `as.logical`(r40);
    if c7 then L79() else L19();
  D3():
    deopt 14 [];
  D5():
    deopt 21 [env2];
  D6():
    deopt 33 [];
  D8():
    deopt 39 [];
  L19():
    goto L25();
  L25():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  L53():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        deparse = ldf deparse;
        p4 = prom<V +>{
          where3 = ld where;
          where4 = force? where3;
          checkMissing(where4);
          return where4;
        };
        r15 = dyn deparse(p4);
        return r15;
      };
      r17 = dyn gettextf("no environment or package corresponding to argument where=%s", p5);
      return r17;
    };
    r19 = dyn stop[, domain](p6, NA_LGL);
    check L54() else D4();
  L56():
    env3 = force? env2;
    checkMissing(env3);
    st where = env3;
    goto L10();
  L64():
    p7 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r28 = dyn getGeneric(p7, FALSE);
    check L65() else D7();
  L67():
    p8 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p9 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r32 = dyn getGeneric1[, , where](p8, FALSE, p9);
    check L68() else D9();
  L79():
    optional1 = ld optional;
    check L80() else D15();
  D4():
    deopt 18 [r19];
  D7():
    deopt 36 [r28];
  D9():
    deopt 44 [r32];
  D15():
    deopt 66 [optional1];
  L26(r58):
    c11 = `as.logical`(r58);
    if c11 then L96() else L27();
  L54():
    goto L9();
  L65():
    st fdef = r28;
    goto L15(r28);
  L68():
    st fdef = r32;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L80():
    optional2 = force? optional1;
    checkMissing(optional2);
    c8 = `as.logical`(optional2);
    if c8 then L81() else L20();
  L94():
    missing3 = ldf missing in base;
    r59 = dyn missing3(<sym mlist>);
    goto L26(r59);
  L95():
    r57 = dyn base7(<sym mlist>);
    goto L26(r57);
  L16(r34):
    c6 = `as.logical`(r34);
    if c6 then L72() else L17();
  L20():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L84() else L85();
  L27():
    goto L31();
  L31():
    sym9 = ldf `is.environment`;
    base9 = ldf `is.environment` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L106() else L107();
  L69():
    fdef1 = ld fdef;
    check L71() else D10();
  L70():
    r33 = dyn base4(<sym fdef>);
    goto L16(r33);
  L81():
    popenv;
    return NULL;
  L96():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  D10():
    deopt 47 [fdef1];
  L17():
    goto L15(NULL);
  L22(r44):
    r45 = `!`(r44);
    c10 = `as.logical`(r45);
    if c10 then L87() else L23();
  L28(r61):
    c12 = `as.logical`(r61);
    if c12 then L99() else L29();
  L32(r72):
    c13 = `as.logical`(r72);
    if c13 then L110() else L33();
  L71():
    fdef2 = force? fdef1;
    checkMissing(fdef2);
    c5 = `==`(fdef2, NULL);
    goto L16(c5);
  L72():
    getGeneric2 = ldf getGeneric;
    check L73() else D11();
  L84():
    f7 = ld f;
    check L86() else D16();
  L85():
    r43 = dyn base5(<sym f>);
    goto L22(r43);
  L97():
    missing4 = ldf missing in base;
    r62 = dyn missing4(<sym where>);
    goto L28(r62);
  L98():
    r60 = dyn base8(<sym where>);
    goto L28(r60);
  L106():
    mlist1 = ld mlist;
    check L108() else D25();
  L107():
    r71 = dyn base9(<sym mlist>);
    goto L32(r71);
  D11():
    deopt 51 [];
  D16():
    deopt 74 [f7];
  D25():
    deopt 114 [mlist1];
  L23():
    goto L24();
  L24():
    stop1 = ldf stop;
    check L91() else D19();
  L29():
    _getMethodsTableMetaData = ldf `.getMethodsTableMetaData`;
    check L103() else D23();
  L30(r65):
    st mlist = r65;
    goto L31();
  L33():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L135() else L136();
  L73():
    p10 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r36 = dyn getGeneric2(p10, FALSE);
    check L74() else D12();
  L86():
    f8 = force? f7;
    checkMissing(f8);
    c9 = `is.character`(f8);
    goto L22(c9);
  L87():
    deparse1 = ldf deparse1;
    check L88() else D17();
  L99():
    getMethodsForDispatch = ldf getMethodsForDispatch;
    check L100() else D21();
  L108():
    mlist2 = force? mlist1;
    checkMissing(mlist2);
    is_environment = ldf `is.environment` in base;
    r73 = dyn is_environment(mlist2);
    check L109() else D26();
  L110():
    matchSignature = ldf matchSignature;
    check L111() else D27();
  D12():
    deopt 54 [r36];
  D17():
    deopt 79 [];
  D19():
    deopt 86 [];
  D21():
    deopt 100 [];
  D23():
    deopt 104 [];
  D26():
    deopt 117 [r73];
  D27():
    deopt 119 [];
  L42(r104):
    c25 = `as.logical`(r104);
    if c25 then L138() else L43();
  L74():
    st fdef = r36;
    goto L15(r36);
  L88():
    p12 = prom<V +>{
      sym6 = ldf substitute;
      base6 = ldf substitute in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      substitute = ldf substitute in base;
      r48 = dyn substitute(<sym f>);
      goto L0(r48);
    L2():
      r46 = dyn base6(<sym f>);
      goto L0(r46);
    };
    r50 = dyn deparse1(p12);
    check L89() else D18();
  L91():
    p14 = prom<V +>{
      gettextf1 = ldf gettextf;
      p13 = prom<V +>{
        f9 = ld f;
        f10 = force? f9;
        checkMissing(f10);
        return f10;
      };
      r53 = dyn gettextf1("no generic function found for '%s'", p13);
      return r53;
    };
    r55 = dyn stop1[, domain](p14, NA_LGL);
    check L92() else D20();
  L100():
    p15 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    r64 = dyn getMethodsForDispatch(p15);
    check L101() else D22();
  L103():
    p16 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    p17 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    p18 = prom<V +>{
      optional3 = ld optional;
      optional4 = force? optional3;
      checkMissing(optional4);
      return optional4;
    };
    r69 = dyn _getMethodsTableMetaData(p16, p17, p18);
    check L104() else D24();
  L109():
    goto L32(r73);
  L111():
    p19 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p20 = prom<V +>{
      fdef9 = ld fdef;
      fdef10 = force? fdef9;
      checkMissing(fdef10);
      return fdef10;
    };
    r76 = dyn matchSignature(p19, p20);
    check L112() else D28();
  L135():
    mlist5 = ld mlist;
    check L137() else D39();
  L136():
    r103 = dyn base13(<sym mlist>);
    goto L42(r103);
  D18():
    deopt 81 [r50];
  D20():
    deopt 90 [r55];
  D22():
    deopt 102 [r64];
  D24():
    deopt 108 [r69];
  D28():
    deopt 122 [r76];
  D39():
    deopt 161 [mlist5];
  L43():
    stop3 = ldf stop;
    check L142() else D41();
  L89():
    st f = r50;
    goto L24();
  L92():
    goto L25();
  L101():
    goto L30(r64);
  L104():
    goto L30(r69);
  L112():
    st signature = r76;
    _findMethodInTable = ldf `.findMethodInTable`;
    check L113() else D29();
  L137():
    mlist6 = force? mlist5;
    checkMissing(mlist6);
    c24 = `==`(mlist6, NULL);
    goto L42(c24);
  L138():
    mlist7 = ld mlist;
    check L139() else D40();
  D29():
    deopt 125 [];
  D40():
    deopt 164 [mlist7];
  D41():
    deopt 170 [];
  L113():
    p21 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p22 = prom<V +>{
      mlist3 = ld mlist;
      mlist4 = force? mlist3;
      checkMissing(mlist4);
      return mlist4;
    };
    p23 = prom<V +>{
      fdef11 = ld fdef;
      fdef12 = force? fdef11;
      checkMissing(fdef12);
      return fdef12;
    };
    r80 = dyn _findMethodInTable(p21, p22, p23);
    check L114() else D30();
  L139():
    mlist8 = force? mlist7;
    checkMissing(mlist8);
    popenv;
    return mlist8;
  L142():
    r106 = dyn stop3[, domain]("defunct methods list search", NA_LGL);
    check L143() else D42();
  D30():
    deopt 129 [r80];
  D42():
    deopt 174 [r106];
  L114():
    st value = r80;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  L143():
    popenv;
    return r106;
  L34(r82):
    c15 = `as.logical`(r82);
    if c15 then L118() else L35(c15);
  L115():
    value = ld value;
    check L117() else D31();
  L116():
    r81 = dyn base10(<sym value>);
    goto L34(r81);
  D31():
    deopt 132 [value];
  L35(c17):
    c21 = `as.logical`(c17);
    if c21 then L121() else L36();
  L117():
    value1 = force? value;
    checkMissing(value1);
    c14 = `==`(value1, NULL);
    goto L34(c14);
  L118():
    optional5 = ld optional;
    check L119() else D32();
  D32():
    deopt 135 [c15, optional5];
  L36():
    goto L40();
  L40():
    value2 = ld value;
    check L132() else D38();
  L119():
    optional6 = force? optional5;
    checkMissing(optional6);
    r83 = `!`(optional6);
    c18 = `as.logical`(r83);
    c19 = `&&`(c15, c18);
    goto L35(c19);
  L121():
    sym11 = ldf `is.character`;
    base11 = ldf `is.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L122() else L123();
  D38():
    deopt 157 [value2];
  L37(r85):
    r86 = `!`(r85);
    c23 = `as.logical`(r86);
    if c23 then L125() else L38();
  L122():
    f11 = ld f;
    check L124() else D33();
  L123():
    r84 = dyn base11(<sym f>);
    goto L37(r84);
  L132():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D33():
    deopt 140 [f11];
  L38():
    goto L39();
  L39():
    stop2 = ldf stop;
    check L129() else D36();
  L124():
    f12 = force? f11;
    checkMissing(f12);
    c22 = `is.character`(f12);
    goto L37(c22);
  L125():
    deparse2 = ldf deparse1;
    check L126() else D34();
  D34():
    deopt 145 [];
  D36():
    deopt 152 [];
  L126():
    p24 = prom<V +>{
      sym12 = ldf substitute;
      base12 = ldf substitute in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r88):
      return r88;
    L1():
      substitute1 = ldf substitute in base;
      r89 = dyn substitute1(<sym f>);
      goto L0(r89);
    L2():
      r87 = dyn base12(<sym f>);
      goto L0(r87);
    };
    r91 = dyn deparse2(p24);
    check L127() else D35();
  L129():
    p28 = prom<V +>{
      gettextf2 = ldf gettextf;
      p25 = prom<V +>{
        f13 = ld f;
        f14 = force? f13;
        checkMissing(f14);
        return f14;
      };
      p27 = prom<V +>{
        paste = ldf paste;
        p26 = prom<V +>{
          signature5 = ld signature;
          signature6 = force? signature5;
          checkMissing(signature6);
          return signature6;
        };
        r95 = dyn paste[, collapse](p26, ", ");
        return r95;
      };
      r97 = dyn gettextf2("no method found for function '%s' and signature %s", p25, p27);
      return r97;
    };
    r99 = dyn stop2(p28);
    check L130() else D37();
  D35():
    deopt 147 [r91];
  D37():
    deopt 154 [r99];
  L127():
    st f = r91;
    goto L39();
  L130():
    goto L40();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}