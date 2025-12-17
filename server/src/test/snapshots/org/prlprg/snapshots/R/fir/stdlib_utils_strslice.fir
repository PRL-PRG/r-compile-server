fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3781722631;
    st strslice = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3781722631(x, split, proto, fixed, perl, useBytes) {
  (reg x:*, reg split:*, reg proto:*, reg fixed:*, reg perl:*, reg useBytes:*) -+> V { var x:*, var split:*, var proto:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg strsplit:cls, reg x1:*, reg x2:V, reg p:p(V +), reg split1:*, reg split2:V, reg p1:p(V +), reg fixed1:*, reg fixed2:V, reg p2:p(V +), reg perl1:*, reg perl2:V, reg p3:p(V +), reg useBytes1:*, reg useBytes2:V, reg p4:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg proto1:*, reg proto2:V, reg length:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg str:*, reg str1:V, reg length1:cls, reg r11:V, reg r12:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg str2:*, reg str3:V, reg c1:L, reg str5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg length2:cls, reg r16:V, reg ntokens:*, reg ntokens1:V, reg r17:V, reg c2:L, reg stop:cls, reg r18:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg unique:cls, reg lengths:cls, reg str6:*, reg str7:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg r25:V, reg length3:cls, reg r26:V, reg r27:V, reg c3:L, reg stop1:cls, reg r28:V, reg matrix:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg unlist:cls, reg str8:*, reg str9:V, reg p7:p(V +), reg r33:V, reg as_character:cls, reg r34:V, reg p8:p(V +), reg ntokens2:*, reg ntokens3:V, reg p9:p(V +), reg r37:V, reg conformToProto:cls, reg mat:*, reg mat1:V, reg p10:p(V +), reg proto3:*, reg proto4:V, reg p11:p(V +), reg r40:V |
    mkenv;
    st x = x;
    st split = split;
    st proto = proto;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L0(FALSE) else L0(fixed);
  L0(fixed_orDefault):
    st fixed = fixed_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L2(FALSE) else L2(useBytes);
  L2(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    strsplit = ldf strsplit;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      split1 = ld split;
      split2 = force? split1;
      checkMissing(split2);
      return split2;
    };
    p2 = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      return fixed2;
    };
    p3 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p4 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r5 = dyn strsplit[, , fixed, perl, useBytes](p, p1, p2, p3, p4);
    check L14() else D1();
  D1():
    deopt 10 [r5];
  L14():
    st str = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L3(r7):
    st ntokens = r7;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L15():
    proto1 = ld proto;
    check L17() else D2();
  L16():
    r6 = dyn base(<sym proto>);
    goto L3(r6);
  D2():
    deopt 14 [proto1];
  L4(r10):
    r12 = `>`(r10, 0);
    c = `as.logical`(r12);
    if c then L23() else L5();
  L17():
    proto2 = force? proto1;
    checkMissing(proto2);
    length = ldf length in base;
    r8 = dyn length(proto2);
    check L18() else D3();
  L19():
    str = ld str;
    check L21() else D4();
  L20():
    r9 = dyn base1(<sym str>);
    goto L4(r9);
  D3():
    deopt 17 [r8];
  D4():
    deopt 21 [str];
  L5():
    goto L12();
  L12():
    matrix = ldf matrix;
    check L46() else D16();
  L18():
    goto L3(r8);
  L21():
    str1 = force? str;
    checkMissing(str1);
    length1 = ldf length in base;
    r11 = dyn length1(str1);
    check L22() else D5();
  L23():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  D5():
    deopt 24 [r11];
  D16():
    deopt 61 [];
  L6(r14):
    ntokens = ld ntokens;
    check L31() else D8();
  L22():
    goto L4(r11);
  L24():
    str2 = ld str;
    check L26() else D6();
  L25():
    r13 = dyn base2(<lang `[[`(str, 1)>);
    goto L6(r13);
  L46():
    p8 = prom<V +>{
      sym4 = ldf `as.character`;
      base4 = ldf `as.character` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      unlist = ldf unlist;
      p7 = prom<V +>{
        str8 = ld str;
        str9 = force? str8;
        checkMissing(str9);
        return str9;
      };
      r33 = dyn unlist(p7);
      as_character = ldf `as.character` in base;
      r34 = dyn as_character(r33);
      goto L0(r34);
    L2():
      r30 = dyn base4(<lang unlist(str)>);
      goto L0(r30);
    };
    p9 = prom<V +>{
      ntokens2 = ld ntokens;
      ntokens3 = force? ntokens2;
      checkMissing(ntokens3);
      return ntokens3;
    };
    r37 = dyn matrix[, ncol, byrow](p8, p9, TRUE);
    check L47() else D17();
  D6():
    deopt 29 [str2];
  D8():
    deopt 35 [r14, ntokens];
  D17():
    deopt 67 [r37];
  L26():
    str3 = force? str2;
    checkMissing(str3);
    c1 = `is.object`(str3);
    if c1 then L27() else L28(str3);
  L31():
    ntokens1 = force? ntokens;
    checkMissing(ntokens1);
    r17 = `!=`(r14, ntokens1);
    c2 = `as.logical`(r17);
    if c2 then L32() else L8();
  L47():
    st mat = r37;
    conformToProto = ldf conformToProto;
    check L48() else D18();
  D18():
    deopt 70 [];
  L7(dx1):
    length2 = ldf length in base;
    r16 = dyn length2(dx1);
    check L30() else D7();
  L8():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L9(r19):
    goto L12();
  L27():
    dr = tryDispatchBuiltin.1("[[", str3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(str5):
    __ = ldf `[[` in base;
    r15 = dyn __(str5, 1);
    goto L7(r15);
  L32():
    stop = ldf stop;
    check L33() else D9();
  L48():
    p10 = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      return mat1;
    };
    p11 = prom<V +>{
      proto3 = ld proto;
      proto4 = force? proto3;
      checkMissing(proto4);
      return proto4;
    };
    r40 = dyn conformToProto(p10, p11);
    check L49() else D19();
  D7():
    deopt 35 [r16];
  D9():
    deopt 39 [];
  D19():
    deopt 73 [r40];
  L10(r21):
    r27 = `>`(r21, 1);
    c3 = `as.logical`(r27);
    if c3 then L41() else L11();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L30():
    goto L6(r16);
  L33():
    r18 = dyn stop("The number of tokens != 'length(proto)'");
    check L34() else D10();
  L36():
    unique = ldf unique;
    check L38() else D11();
  L37():
    r20 = dyn base3(<lang unique(lengths(str))>);
    goto L10(r20);
  L49():
    popenv;
    return r40;
  D10():
    deopt 41 [r18];
  D11():
    deopt 45 [];
  L11():
    goto L9(NULL);
  L34():
    goto L9(r18);
  L38():
    p6 = prom<V +>{
      lengths = ldf lengths;
      p5 = prom<V +>{
        str6 = ld str;
        str7 = force? str6;
        checkMissing(str7);
        return str7;
      };
      r23 = dyn lengths(p5);
      return r23;
    };
    r25 = dyn unique(p6);
    check L39() else D12();
  L41():
    stop1 = ldf stop;
    check L42() else D14();
  D12():
    deopt 47 [r25];
  D14():
    deopt 53 [];
  L39():
    length3 = ldf length in base;
    r26 = dyn length3(r25);
    check L40() else D13();
  L42():
    r28 = dyn stop1("The number of tokens is not consistent across 'x'");
    check L43() else D15();
  D13():
    deopt 49 [r26];
  D15():
    deopt 55 [r28];
  L40():
    goto L10(r26);
  L43():
    goto L9(r28);
  }
}