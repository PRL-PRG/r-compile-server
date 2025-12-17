fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner942904222;
    st cacheGenericsMetaData = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner942904222(f, fdef, attach, where, package, methods) {
  (reg f:*, reg fdef:*, reg attach:*, reg where:*, reg package:*, reg methods:*) -+> V { var f:*, var fdef:*, var attach:*, reg attach_isMissing:L, reg attach_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var package:*, var methods:*, reg is:cls, reg fdef1:*, reg fdef2:V, reg p2:p(V +), reg r5:V, reg r6:V, reg c:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg missing:cls, reg r17:V, reg c1:L, reg __:cls, reg r18:V, reg finalDefaultMethod:cls, reg __1:cls, reg r20:V, reg p6:p(V +), reg r22:V, reg dispatchIsInternal:cls, reg fdef3:*, reg fdef4:V, reg p7:p(V +), reg r24:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg missing1:cls, reg r27:V, reg c3:L, reg setPrimitiveMethods:cls, reg f3:*, reg f4:V, reg p8:p(V +), reg deflt:*, reg deflt1:V, reg p9:p(V +), reg fdef5:*, reg fdef6:V, reg p10:p(V +), reg r31:V, reg r32:V, reg setPrimitiveMethods1:cls, reg f5:*, reg f6:V, reg p11:p(V +), reg deflt2:*, reg deflt3:V, reg p12:p(V +), reg fdef7:*, reg fdef8:V, reg p13:p(V +), reg methods1:*, reg methods2:V, reg p14:p(V +), reg r37:V, reg isGroup:cls, reg f7:*, reg f8:V, reg p15:p(V +), reg fdef9:*, reg fdef10:V, reg p16:p(V +), reg r41:V, reg c4:L, reg __2:cls, reg r42:V, reg members:*, reg members1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg getGeneric:cls, reg ff:*, reg ff1:V, reg p17:p(V +), reg where1:*, reg where2:V, reg p18:p(V +), reg r45:V, reg is1:cls, reg ffdef:*, reg ffdef1:V, reg p19:p(V +), reg r47:V, reg c6:L, reg Recall:cls, reg ff2:*, reg ff3:V, reg p20:p(V +), reg ffdef2:*, reg ffdef3:V, reg p21:p(V +), reg attach1:*, reg attach2:V, reg p22:p(V +), reg where3:*, reg where4:V, reg p23:p(V +), reg _getMethodsTable:cls, reg ffdef4:*, reg ffdef5:V, reg p24:p(V +), reg r53:V, reg p25:p(V +), reg r55:V, reg i7:I |
    mkenv;
    st f = f;
    st fdef = fdef;
    attach_isMissing = missing.0(attach);
    if attach_isMissing then L0(TRUE) else L0(attach);
  L0(attach_orDefault):
    st attach = attach_orDefault;
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
    st package = package;
    st methods = methods;
    is = ldf is;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p2 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r5 = dyn is(p2, "genericFunction");
    check L19() else D1();
  D1():
    deopt 4 [r5];
  L19():
    r6 = `!`(r5);
    c = `as.logical`(r6);
    if c then L20() else L3();
  L3():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L20():
    warning = ldf warning;
    check L21() else D2();
  D2():
    deopt 7 [];
  L5(r16):
    c1 = `as.logical`(r16);
    if c1 then L27() else L6();
  L21():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        p3 = prom<V +>{
          f1 = ld f;
          f2 = force? f1;
          checkMissing(f2);
          return f2;
        };
        r8 = dyn sQuote(p3);
        return r8;
      };
      r10 = dyn gettextf("no methods found for %s; cacheGenericsMetaData() will have no effect", p4);
      return r10;
    };
    r12 = dyn warning[, domain](p5, NA_LGL);
    check L22() else D3();
  L25():
    missing = ldf missing in base;
    r17 = dyn missing(<sym package>);
    goto L5(r17);
  L26():
    r15 = dyn base(<sym package>);
    goto L5(r15);
  D3():
    deopt 11 [r12];
  L6():
    goto L7();
  L7():
    finalDefaultMethod = ldf finalDefaultMethod;
    check L29() else D4();
  L22():
    popenv;
    return FALSE;
  L27():
    __ = ldf `@` in base;
    r18 = dyn __(<sym fdef>, <sym package>);
    st package = r18;
    goto L7();
  D4():
    deopt 26 [];
  L29():
    p6 = prom<V +>{
      __1 = ldf `@` in base;
      r20 = dyn __1(<sym fdef>, <sym default>);
      return r20;
    };
    r22 = dyn finalDefaultMethod(p6);
    check L30() else D5();
  D5():
    deopt 28 [r22];
  L30():
    st deflt = r22;
    dispatchIsInternal = ldf dispatchIsInternal;
    check L31() else D6();
  D6():
    deopt 31 [];
  L31():
    p7 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r24 = dyn dispatchIsInternal(p7);
    check L32() else D7();
  D7():
    deopt 33 [r24];
  L32():
    c2 = `as.logical`(r24);
    if c2 then L33() else L8();
  L8():
    isGroup = ldf isGroup;
    check L43() else D12();
  L12():
    popenv;
    return TRUE;
  L33():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  D12():
    deopt 54 [];
  L9(r26):
    c3 = `as.logical`(r26);
    if c3 then L36() else L10();
  L34():
    missing1 = ldf missing in base;
    r27 = dyn missing1(<sym methods>);
    goto L9(r27);
  L35():
    r25 = dyn base1(<sym methods>);
    goto L9(r25);
  L43():
    p15 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p16 = prom<V +>{
      fdef9 = ld fdef;
      fdef10 = force? fdef9;
      checkMissing(fdef10);
      return fdef10;
    };
    r41 = dyn isGroup[, fdef](p15, p16);
    check L44() else D13();
  D13():
    deopt 58 [r41];
  L10():
    setPrimitiveMethods1 = ldf setPrimitiveMethods;
    check L40() else D10();
  L11(r32):
    goto L12();
  L36():
    setPrimitiveMethods = ldf setPrimitiveMethods;
    check L37() else D8();
  L44():
    c4 = `as.logical`(r41);
    if c4 then L45() else L13();
  D8():
    deopt 38 [];
  D10():
    deopt 46 [];
  L13():
    goto L12();
  L37():
    p8 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p9 = prom<V +>{
      deflt = ld deflt;
      deflt1 = force? deflt;
      checkMissing(deflt1);
      return deflt1;
    };
    p10 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    r31 = dyn setPrimitiveMethods(p8, p9, "reset", p10, NULL);
    check L38() else D9();
  L40():
    p11 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p12 = prom<V +>{
      deflt2 = ld deflt;
      deflt3 = force? deflt2;
      checkMissing(deflt3);
      return deflt3;
    };
    p13 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    p14 = prom<V +>{
      methods1 = ld methods;
      methods2 = force? methods1;
      checkMissing(methods2);
      return methods2;
    };
    r37 = dyn setPrimitiveMethods1(p11, p12, "set", p13, p14);
    check L41() else D11();
  L45():
    __2 = ldf `@` in base;
    r42 = dyn __2(<sym fdef>, <sym groupMembers>);
    st members = r42;
    members = ld members;
    check L46() else D14();
  D9():
    deopt 44 [r31];
  D11():
    deopt 52 [r37];
  D14():
    deopt 62 [members];
  L38():
    goto L11(r31);
  L41():
    goto L11(r37);
  L46():
    members1 = force? members;
    checkMissing(members1);
    s = toForSeq(members1);
    l = length(s);
    i = 0;
    goto L14(i);
  L14(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L47() else L17();
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st ff = x;
    getGeneric = ldf getGeneric;
    check L48() else D15();
  L47():
    goto L12();
  D15():
    deopt 65 [i2];
  L48():
    p17 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    p18 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r45 = dyn getGeneric[, where](p17, p18);
    check L49() else D16();
  D16():
    deopt 69 [i2, r45];
  L49():
    st ffdef = r45;
    is1 = ldf is;
    check L50() else D17();
  D17():
    deopt 72 [i2];
  L50():
    p19 = prom<V +>{
      ffdef = ld ffdef;
      ffdef1 = force? ffdef;
      checkMissing(ffdef1);
      return ffdef1;
    };
    r47 = dyn is1(p19, "genericFunction");
    check L51() else D18();
  D18():
    deopt 75 [i2, r47];
  L51():
    c6 = `as.logical`(r47);
    if c6 then L52() else L15();
  L15():
    goto L16(i2);
  L16(i7):
    goto L14(i7);
  L52():
    Recall = ldf Recall;
    check L53() else D19();
  D19():
    deopt 77 [i2];
  L53():
    p20 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    p21 = prom<V +>{
      ffdef2 = ld ffdef;
      ffdef3 = force? ffdef2;
      checkMissing(ffdef3);
      return ffdef3;
    };
    p22 = prom<V +>{
      attach1 = ld attach;
      attach2 = force? attach1;
      checkMissing(attach2);
      return attach2;
    };
    p23 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    p25 = prom<V +>{
      _getMethodsTable = ldf `.getMethodsTable`;
      p24 = prom<V +>{
        ffdef4 = ld ffdef;
        ffdef5 = force? ffdef4;
        checkMissing(ffdef5);
        return ffdef5;
      };
      r53 = dyn _getMethodsTable(p24);
      return r53;
    };
    r55 = dyn Recall[, , , , methods](p20, p21, p22, p23, p25);
    check L54() else D20();
  D20():
    deopt 84 [i2, r55];
  L54():
    goto L16(i2);
  }
}