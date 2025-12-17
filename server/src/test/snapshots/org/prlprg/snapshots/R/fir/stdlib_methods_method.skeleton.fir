fun main() {
  () -+> V { reg r:cls, reg setwd:cls, reg tempdir:cls, reg r1:V, reg p:p(V +), reg r3:V, reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg method_skeleton:cls, reg r9:V, reg method_skeleton1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg file:cls, reg r15:V, reg method_skeleton2:cls, reg con:*, reg con1:V, reg p3:p(V +), reg r17:V, reg method_skeleton3:cls, reg con2:*, reg con3:V, reg p4:p(V +), reg r19:V, reg method_skeleton4:cls, reg con4:*, reg con5:V, reg p5:p(V +), reg r21:V, reg close:cls, reg con6:*, reg con7:V, reg p6:p(V +), reg r23:V, reg setwd1:cls, reg oWD:*, reg oWD1:V, reg p7:p(V +), reg r25:V |
    mkenv;
    r = clos inner3970751355;
    st `method.skeleton` = r;
    setwd = ldf setwd;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      tempdir = ldf tempdir;
      r1 = dyn tempdir();
      return r1;
    };
    r3 = dyn setwd(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    st oWD = r3;
    setClass = ldf setClass;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c = ldf c in base;
      r6 = dyn c("numeric", "numeric");
      goto L0(r6);
    L2():
      r4 = dyn base[x, y]("numeric", "numeric");
      goto L0(r4);
    };
    r8 = dyn setClass[, slots]("track", p1);
    check L3() else D3();
  D3():
    deopt 13 [r8];
  L3():
    method_skeleton = ldf `method.skeleton`;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    r9 = dyn method_skeleton("show", "track");
    check L5() else D5();
  D5():
    deopt 18 [r9];
  L5():
    method_skeleton1 = ldf `method.skeleton`;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c1 = ldf c in base;
      r12 = dyn c1("track", "track");
      goto L0(r12);
    L2():
      r10 = dyn base1("track", "track");
      goto L0(r10);
    };
    r14 = dyn method_skeleton1("Ops", p2);
    check L7() else D7();
  D7():
    deopt 23 [r14];
  L7():
    file = ldf file;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    r15 = dyn file("./Math_track.R", "w");
    check L9() else D9();
  D9():
    deopt 28 [r15];
  L9():
    st con = r15;
    method_skeleton2 = ldf `method.skeleton`;
    check L10() else D10();
  D10():
    deopt 31 [];
  L10():
    p3 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r17 = dyn method_skeleton2("Math", "track", p3);
    check L11() else D11();
  D11():
    deopt 35 [r17];
  L11():
    method_skeleton3 = ldf `method.skeleton`;
    check L12() else D12();
  D12():
    deopt 37 [];
  L12():
    p4 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r19 = dyn method_skeleton3("exp", "track", p4);
    check L13() else D13();
  D13():
    deopt 41 [r19];
  L13():
    method_skeleton4 = ldf `method.skeleton`;
    check L14() else D14();
  D14():
    deopt 43 [];
  L14():
    p5 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    r21 = dyn method_skeleton4("log", "track", p5);
    check L15() else D15();
  D15():
    deopt 47 [r21];
  L15():
    close = ldf close;
    check L16() else D16();
  D16():
    deopt 49 [];
  L16():
    p6 = prom<V +>{
      con6 = ld con;
      con7 = force? con6;
      checkMissing(con7);
      return con7;
    };
    r23 = dyn close(p6);
    check L17() else D17();
  D17():
    deopt 51 [r23];
  L17():
    setwd1 = ldf setwd;
    check L18() else D18();
  D18():
    deopt 53 [];
  L18():
    p7 = prom<V +>{
      oWD = ld oWD;
      oWD1 = force? oWD;
      checkMissing(oWD1);
      return oWD1;
    };
    r25 = dyn setwd1(p7);
    check L19() else D19();
  D19():
    deopt 55 [r25];
  L19():
    popenv;
    return r25;
  }
}
fun inner3970751355(generic, signature, file, external, where) {
  (reg generic:*, reg signature:*, reg file:*, reg external:*, reg where:*) -+> V { var generic:*, var signature:*, var file:*, var external:*, reg external_isMissing:L, reg external_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg getGeneric:cls, reg generic1:*, reg generic2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg fdef:*, reg fdef1:V, reg c:V, reg c1:L, reg implicitGeneric:cls, reg generic3:*, reg generic4:V, reg p4:p(V +), reg where3:*, reg where4:V, reg p5:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg fdef2:*, reg fdef3:V, reg c2:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg generic5:*, reg generic6:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V, reg r20:V, reg __:cls, reg r22:V, reg matchSignature:cls, reg signature1:*, reg signature2:V, reg p9:p(V +), reg fdef4:*, reg fdef5:V, reg p10:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg signature3:*, reg signature4:V, reg length:cls, reg r28:V, reg r29:V, reg c4:L, reg __1:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg signature5:*, reg signature6:V, reg length1:cls, reg r34:V, reg l:*, reg length__:cls, reg r35:V, reg r36:cls, reg formals:cls, reg fdef6:*, reg fdef7:V, reg p11:p(V +), reg r38:V, reg l1:*, reg formals__:cls, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg quote:cls, reg r42:V, reg l2:*, reg body__:cls, reg r43:V, reg paste:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg generic7:*, reg generic8:V, reg signature7:*, reg signature8:V, reg c5:cls, reg r46:V, reg p12:p(V +), reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg missing:cls, reg r51:V, reg c6:L, reg paste1:cls, reg methodName:*, reg methodName1:V, reg p13:p(V +), reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg paste2:cls, reg generic9:*, reg generic10:V, reg p14:p(V +), reg r58:V, reg paste3:cls, reg paste4:cls, reg sigNames:*, reg sigNames1:V, reg p15:p(V +), reg signature9:*, reg signature10:V, reg p16:p(V +), reg r61:V, reg p17:p(V +), reg r63:V, reg c7:cls, reg r64:V, reg deparse:cls, reg method:*, reg method1:V, reg p18:p(V +), reg r66:V, reg isFALSE:cls, reg external1:*, reg external2:V, reg p19:p(V +), reg r68:V, reg c8:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg output:*, reg output1:V, reg paste5:cls, reg method2:*, reg method3:V, reg p20:p(V +), reg r72:V, reg c9:cls, reg r73:V, reg is:cls, reg external3:*, reg external4:V, reg p21:p(V +), reg r76:V, reg c10:L, reg toString:cls, reg external5:*, reg external6:V, reg p22:p(V +), reg r78:V, reg paste6:cls, reg methodName2:*, reg methodName3:V, reg p23:p(V +), reg method4:*, reg method5:V, reg c11:L, reg method7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r81:V, reg p24:p(V +), reg r83:V, reg l3:*, reg c12:L, reg r85:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r88:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r89:V, reg r90:V, reg method8:*, reg method9:V, reg output2:*, reg output3:V, reg paste7:cls, reg methodName4:*, reg methodName5:V, reg p25:p(V +), reg r92:V, reg c13:cls, reg r93:V, reg writeLines:cls, reg output4:*, reg output5:V, reg p26:p(V +), reg file1:*, reg file2:V, reg p27:p(V +), reg r96:V, reg message:cls, reg gettextf1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg file3:*, reg file4:V, reg c14:L, reg c15:L, reg file5:*, reg file6:V, reg p28:p(V +), reg r100:V, reg p29:p(V +), reg r102:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r103:V, reg r104:V, reg file7:*, reg file8:V, reg invisible:cls, reg r105:V |
    mkenv;
    st generic = generic;
    st signature = signature;
    st file = file;
    external_isMissing = missing.0(external);
    if external_isMissing then L0(FALSE) else L0(external);
  L0(external_orDefault):
    st external = external_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    getGeneric = ldf getGeneric;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    p2 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn getGeneric[, where](p2, p3);
    check L27() else D1();
  D1():
    deopt 5 [r6];
  L27():
    st fdef = r6;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L3(r8):
    c1 = `as.logical`(r8);
    if c1 then L31() else L4();
  L28():
    fdef = ld fdef;
    check L30() else D2();
  L29():
    r7 = dyn base(<sym fdef>);
    goto L3(r7);
  D2():
    deopt 8 [fdef];
  L4():
    __ = ldf `@` in base;
    r22 = dyn __(<sym fdef>, <sym generic>);
    st generic = r22;
    goto L8();
  L8():
    matchSignature = ldf matchSignature;
    check L42() else D8();
  L30():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c = `==`(fdef1, NULL);
    goto L3(c);
  L31():
    implicitGeneric = ldf implicitGeneric;
    check L32() else D3();
  D3():
    deopt 12 [];
  D8():
    deopt 34 [];
  L32():
    p4 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    p5 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r11 = dyn implicitGeneric[, where](p4, p5);
    check L33() else D4();
  L42():
    p9 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p10 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    r25 = dyn matchSignature(p9, p10);
    check L43() else D9();
  D4():
    deopt 16 [r11];
  D9():
    deopt 37 [r25];
  L33():
    st fdef = r11;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L43():
    st signature = r25;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L5(r13):
    c3 = `as.logical`(r13);
    if c3 then L37() else L6();
  L9(r27):
    r29 = `==`(r27, 0.0);
    c4 = `as.logical`(r29);
    if c4 then L48() else L10();
  L34():
    fdef2 = ld fdef;
    check L36() else D5();
  L35():
    r12 = dyn base1(<sym fdef>);
    goto L5(r12);
  L44():
    signature3 = ld signature;
    check L46() else D10();
  L45():
    r26 = dyn base2(<sym signature>);
    goto L9(r26);
  D5():
    deopt 19 [fdef2];
  D10():
    deopt 41 [signature3];
  L6():
    goto L7(NULL);
  L7(r20):
    goto L8();
  L10():
    goto L11();
  L11():
    __1 = ldf `@` in base;
    r31 = dyn __1(<sym fdef>, <sym signature>);
    st sigNames = r31;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L36():
    fdef3 = force? fdef2;
    checkMissing(fdef3);
    c2 = `==`(fdef3, NULL);
    goto L5(c2);
  L37():
    stop = ldf stop;
    check L38() else D6();
  L46():
    signature4 = force? signature3;
    checkMissing(signature4);
    length = ldf length in base;
    r28 = dyn length(signature4);
    check L47() else D11();
  L48():
    st signature = "ANY";
    goto L11();
  D6():
    deopt 23 [];
  D11():
    deopt 44 [r28];
  L12(r33):
    l = ld sigNames;
    length__ = ldf `length<-`;
    check L54() else D14();
  L38():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          generic5 = ld generic;
          generic6 = force? generic5;
          checkMissing(generic6);
          return generic6;
        };
        r15 = dyn sQuote(p6);
        return r15;
      };
      r17 = dyn gettextf("no function definition found for %s", p7);
      return r17;
    };
    r19 = dyn stop[, domain](p8, NA_LGL);
    check L39() else D7();
  L47():
    goto L9(r28);
  L50():
    signature5 = ld signature;
    check L52() else D12();
  L51():
    r32 = dyn base3(<sym signature>);
    goto L12(r32);
  D7():
    deopt 27 [r19];
  D12():
    deopt 57 [signature5];
  D14():
    deopt 62 [r33, l, r33];
  L39():
    goto L7(r19);
  L52():
    signature6 = force? signature5;
    checkMissing(signature6);
    length1 = ldf length in base;
    r34 = dyn length1(signature6);
    check L53() else D13();
  L54():
    r35 = dyn length__(l, NULL, r33);
    check L55() else D15();
  D13():
    deopt 60 [r34];
  D15():
    deopt 64 [r33, r35];
  L53():
    goto L12(r34);
  L55():
    st sigNames = r35;
    r36 = clos inner2708337952;
    st method = r36;
    formals = ldf formals;
    check L56() else D16();
  D16():
    deopt 70 [];
  L56():
    p11 = prom<V +>{
      fdef6 = ld fdef;
      fdef7 = force? fdef6;
      checkMissing(fdef7);
      return fdef7;
    };
    r38 = dyn formals(p11);
    check L57() else D17();
  D17():
    deopt 72 [r38];
  L57():
    l1 = ld method;
    formals__ = ldf `formals<-`;
    check L58() else D18();
  D18():
    deopt 74 [r38, l1, r38];
  L58():
    r39 = dyn formals__(l1, NULL, r38);
    check L59() else D19();
  D19():
    deopt 76 [r38, r39];
  L59():
    st method = r39;
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L13(r41):
    l2 = ld method;
    body__ = ldf `body<-`;
    check L62() else D20();
  L60():
    quote = ldf quote in base;
    r42 = dyn quote(<lang {
      stop("need a definition for the method here")
    }>);
    goto L13(r42);
  L61():
    r40 = dyn base4(<lang {
      stop("need a definition for the method here")
    }>);
    goto L13(r40);
  D20():
    deopt 82 [r41, l2, r41];
  L62():
    r43 = dyn body__(l2, NULL, r41);
    check L63() else D21();
  D21():
    deopt 84 [r41, r43];
  L63():
    st method = r43;
    paste = ldf paste;
    check L64() else D22();
  D22():
    deopt 87 [];
  L64():
    p12 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      generic7 = ld generic;
      generic8 = force? generic7;
      checkMissing(generic8);
      signature7 = ld signature;
      signature8 = force? signature7;
      checkMissing(signature8);
      c5 = ldf c in base;
      r46 = dyn c5(generic8, signature8);
      goto L0(r46);
    L2():
      r44 = dyn base5(<sym generic>, <sym signature>);
      goto L0(r44);
    };
    r48 = dyn paste[, collapse](p12, "_");
    check L65() else D23();
  D23():
    deopt 91 [r48];
  L65():
    st methodName = r48;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L14(r50):
    c6 = `as.logical`(r50);
    if c6 then L68() else L15();
  L66():
    missing = ldf missing in base;
    r51 = dyn missing(<sym file>);
    goto L14(r51);
  L67():
    r49 = dyn base6(<sym file>);
    goto L14(r49);
  L15():
    goto L16();
  L16():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  L68():
    paste1 = ldf paste0;
    check L69() else D24();
  D24():
    deopt 97 [];
  L17(r56):
    st output = r56;
    deparse = ldf deparse;
    check L79() else D31();
  L69():
    p13 = prom<V +>{
      methodName = ld methodName;
      methodName1 = force? methodName;
      checkMissing(methodName1);
      return methodName1;
    };
    r53 = dyn paste1(p13, ".R");
    check L70() else D25();
  L72():
    paste2 = ldf paste0;
    check L74() else D26();
  L73():
    r55 = dyn base7(<lang paste0("setMethod(\"", generic, "\",")>, <lang paste0("    signature(", paste0(sigNames, " = \"", signature, "\"", collapse=", "), "),")>);
    goto L17(r55);
  D25():
    deopt 100 [r53];
  D26():
    deopt 107 [];
  D31():
    deopt 122 [];
  L70():
    st file = r53;
    goto L16();
  L74():
    p14 = prom<V +>{
      generic9 = ld generic;
      generic10 = force? generic9;
      checkMissing(generic10);
      return generic10;
    };
    r58 = dyn paste2("setMethod(\"", p14, "\",");
    check L75() else D27();
  L79():
    p18 = prom<V +>{
      method = ld method;
      method1 = force? method;
      checkMissing(method1);
      return method1;
    };
    r66 = dyn deparse(p18);
    check L80() else D32();
  D27():
    deopt 111 [r58];
  D32():
    deopt 124 [r66];
  L75():
    paste3 = ldf paste0;
    check L76() else D28();
  L80():
    st method = r66;
    isFALSE = ldf isFALSE;
    check L81() else D33();
  D28():
    deopt 113 [];
  D33():
    deopt 127 [];
  L76():
    p17 = prom<V +>{
      paste4 = ldf paste0;
      p15 = prom<V +>{
        sigNames = ld sigNames;
        sigNames1 = force? sigNames;
        checkMissing(sigNames1);
        return sigNames1;
      };
      p16 = prom<V +>{
        signature9 = ld signature;
        signature10 = force? signature9;
        checkMissing(signature10);
        return signature10;
      };
      r61 = dyn paste4[, , , , collapse](p15, " = \"", p16, "\"", ", ");
      return r61;
    };
    r63 = dyn paste3("    signature(", p17, "),");
    check L77() else D29();
  L81():
    p19 = prom<V +>{
      external1 = ld external;
      external2 = force? external1;
      checkMissing(external2);
      return external2;
    };
    r68 = dyn isFALSE(p19);
    check L82() else D34();
  D29():
    deopt 117 [r63];
  D34():
    deopt 129 [r68];
  L77():
    c7 = ldf c in base;
    r64 = dyn c7(r58, r63);
    check L78() else D30();
  L82():
    c8 = `as.logical`(r68);
    if c8 then L83() else L18();
  D30():
    deopt 119 [r64];
  L18():
    is = ldf is;
    check L91() else D39();
  L20():
    writeLines = ldf writeLines;
    check L109() else D50();
  L78():
    goto L17(r64);
  L83():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  D39():
    deopt 144 [];
  D50():
    deopt 184 [];
  L19(r70):
    st output = r70;
    goto L20();
  L84():
    output = ld output;
    check L86() else D35();
  L85():
    r69 = dyn base8(<sym output>, <lang paste0("    ", method)>, ")");
    goto L19(r69);
  L91():
    p21 = prom<V +>{
      external3 = ld external;
      external4 = force? external3;
      checkMissing(external4);
      return external4;
    };
    r76 = dyn is(p21, "character");
    check L92() else D40();
  L109():
    p26 = prom<V +>{
      output4 = ld output;
      output5 = force? output4;
      checkMissing(output5);
      return output5;
    };
    p27 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r96 = dyn writeLines(p26, p27);
    check L110() else D51();
  D35():
    deopt 132 [output];
  D40():
    deopt 147 [r76];
  D51():
    deopt 187 [r96];
  L86():
    output1 = force? output;
    checkMissing(output1);
    paste5 = ldf paste0;
    check L87() else D36();
  L92():
    c10 = `as.logical`(r76);
    if c10 then L93() else L21();
  L110():
    message = ldf message;
    check L111() else D52();
  D36():
    deopt 135 [];
  D52():
    deopt 189 [];
  L21():
    goto L22();
  L22():
    paste6 = ldf paste0;
    check L97() else D43();
  L87():
    p20 = prom<V +>{
      method2 = ld method;
      method3 = force? method2;
      checkMissing(method3);
      return method3;
    };
    r72 = dyn paste5("    ", p20);
    check L88() else D37();
  L93():
    toString = ldf toString;
    check L94() else D41();
  L111():
    p29 = prom<V +>{
      gettextf1 = ldf gettextf;
      p28 = prom<V +>{
        sym10 = ldf `is.character`;
        base10 = ldf `is.character` in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L2() else L3();
      L0(r98):
        c15 = `as.logical`(r98);
        if c15 then L4() else L1();
      L2():
        file3 = ld file;
        file4 = force? file3;
        checkMissing(file4);
        c14 = `is.character`(file4);
        goto L0(c14);
      L3():
        r97 = dyn base10(<sym file>);
        goto L0(r97);
      L1():
        return "connection";
      L4():
        file5 = ld file;
        file6 = force? file5;
        checkMissing(file6);
        return file6;
      };
      r100 = dyn gettextf1("Skeleton of method written to %s", p28);
      return r100;
    };
    r102 = dyn message[, domain](p29, NA_LGL);
    check L112() else D53();
  D37():
    deopt 138 [r72];
  D41():
    deopt 149 [];
  D43():
    deopt 156 [];
  D53():
    deopt 193 [r102];
  L88():
    c9 = ldf c in base;
    r73 = dyn c9(output1, r72, ")");
    check L89() else D38();
  L94():
    p22 = prom<V +>{
      external5 = ld external;
      external6 = force? external5;
      checkMissing(external6);
      return external6;
    };
    r78 = dyn toString(p22);
    check L95() else D42();
  L97():
    p23 = prom<V +>{
      methodName2 = ld methodName;
      methodName3 = force? methodName2;
      checkMissing(methodName3);
      return methodName3;
    };
    p24 = prom<V +>{
      method4 = ld method;
      method5 = force? method4;
      checkMissing(method5);
      c11 = `is.object`(method5);
      if c11 then L1() else L2(method5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", method5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(method7):
      __2 = ldf `[[` in base;
      r81 = dyn __2(method7, 1);
      goto L0(r81);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r83 = dyn paste6("`", p23, "` <- ", p24);
    check L98() else D44();
  L112():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L113() else L114();
  D38():
    deopt 141 [r73];
  D42():
    deopt 151 [r78];
  D44():
    deopt 161 [r83];
  L25(r104):
    popenv;
    return r104;
  L89():
    goto L19(r73);
  L95():
    st methodName = r78;
    goto L22();
  L98():
    l3 = ld method;
    c12 = `is.object`(l3);
    if c12 then L99() else L100(r83, l3);
  L113():
    file7 = ld file;
    check L115() else D54();
  L114():
    r103 = dyn base11(<sym file>);
    goto L25(r103);
  D54():
    deopt 196 [file7];
  L23(dx3):
    st method = dx3;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L102() else L103();
  L99():
    dr2 = tryDispatchBuiltin.0("[[<-", l3, r83);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L101() else L100(r83, dr2);
  L100(r85, l5):
    ____ = ldf `[[<-` in base;
    r88 = dyn ____(l5, r83, 1);
    goto L23(r88);
  L115():
    file8 = force? file7;
    checkMissing(file8);
    invisible = ldf invisible in base;
    r105 = dyn invisible(file8);
    check L116() else D55();
  D55():
    deopt 199 [r105];
  L24(r90):
    st output = r90;
    goto L20();
  L101():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L102():
    method8 = ld method;
    check L104() else D45();
  L103():
    r89 = dyn base9(<sym method>, "", <sym output>, <lang paste0("  `", methodName, "`)")>);
    goto L24(r89);
  L116():
    goto L25(r105);
  D45():
    deopt 169 [method8];
  L104():
    method9 = force? method8;
    checkMissing(method9);
    output2 = ld output;
    check L105() else D46();
  D46():
    deopt 172 [output2];
  L105():
    output3 = force? output2;
    checkMissing(output3);
    paste7 = ldf paste0;
    check L106() else D47();
  D47():
    deopt 175 [];
  L106():
    p25 = prom<V +>{
      methodName4 = ld methodName;
      methodName5 = force? methodName4;
      checkMissing(methodName5);
      return methodName5;
    };
    r92 = dyn paste7("  `", p25, "`)");
    check L107() else D48();
  D48():
    deopt 179 [r92];
  L107():
    c13 = ldf c in base;
    r93 = dyn c13(method9, "", output3, r92);
    check L108() else D49();
  D49():
    deopt 181 [r93];
  L108():
    goto L24(r93);
  }
}
fun inner2708337952() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}