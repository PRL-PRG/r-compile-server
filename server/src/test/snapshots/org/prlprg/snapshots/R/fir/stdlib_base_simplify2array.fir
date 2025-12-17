fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1440831031;
    st simplify2array = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1440831031(x, higher, except) {
  (reg x:*, reg higher:*, reg except:*) -+> V { var x:*, var higher:*, reg higher_isMissing:L, reg higher_orDefault:*, var except:*, reg except_isMissing:L, reg except_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg x3:*, reg x4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg unique:cls, reg lengths:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg length1:cls, reg r16:V, reg r17:V, reg c2:L, reg x7:*, reg x8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg except1:*, reg except2:V, reg as_integer:cls, reg r22:V, reg except3:*, reg except4:V, reg c3:L, reg except6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg except7:*, reg except8:V, reg r23:V, reg __:cls, reg r24:V, reg common_len:*, reg common_len1:V, reg r25:V, reg c4:L, reg c6:V, reg _in_:cls, reg except9:*, reg except10:V, reg p3:p(V +), reg r27:V, reg c7:L, reg c8:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg x9:*, reg x10:V, reg length2:cls, reg r30:V, reg unlist:cls, reg x11:*, reg x12:V, reg p4:p(V +), reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg r35:*, reg r36:V, reg length3:cls, reg r37:V, reg n:*, reg n1:V, reg r38:V, reg c11:L, reg r39:*, reg r40:V, reg x13:*, reg x14:V, reg _in_1:cls, reg common_len2:*, reg common_len3:V, reg p5:p(V +), reg except11:*, reg except12:V, reg p6:p(V +), reg r43:V, reg r44:V, reg c12:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg x15:*, reg x16:V, reg length4:cls, reg r47:V, reg unlist1:cls, reg x17:*, reg x18:V, reg p7:p(V +), reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg r52:*, reg r53:V, reg c13:V, reg c14:L, reg x19:*, reg x20:V, reg higher1:*, reg higher2:V, reg c15:L, reg c17:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg c20:L, reg r55:V, reg unique1:cls, reg lapply:cls, reg x21:*, reg x22:V, reg p8:p(V +), reg dim:*, reg dim1:V, reg p9:p(V +), reg r58:V, reg p10:p(V +), reg r60:V, reg length5:cls, reg r61:V, reg r62:V, reg c21:L, reg c22:V, reg c24:L, reg c26:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg c29:L, reg r64:V, reg c_dim:*, reg c_dim1:V, reg c30:L, reg c32:L, reg c_dim3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c34:L, reg dx3:V, reg __1:cls, reg r65:V, reg is_numeric:cls, reg r66:V, reg c35:L, reg c36:V, reg c38:L, reg c40:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg c43:L, reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg c46:L, reg r70:V, reg c_dim4:*, reg c_dim5:V, reg n2:*, reg n3:V, reg c47:cls, reg r71:V, reg prod:cls, reg r72:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r75:V, reg c50:L, reg r76:V, reg r77:V, reg r78:*, reg r79:V, reg length6:cls, reg r80:V, reg r81:V, reg c51:L, reg c52:V, reg c54:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r82:V, reg r83:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg r85:V, reg x23:*, reg x24:V, reg c55:L, reg x26:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r86:V, reg dimnames:cls, reg r87:V, reg c56:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg r89:V, reg x27:*, reg x28:V, reg names:cls, reg r90:V, reg iN1:*, reg iN2:V, reg c57:L, reg c59:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r91:V, reg c62:L, reg r92:V, reg n4:*, reg n5:V, reg c63:V, reg c64:L, reg c65:V, reg r93:V, reg c67:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r94:V, reg r95:V, reg iN3:*, reg iN4:V, reg c68:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r96:V, reg r97:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r98:V, reg r99:V, reg n6:*, reg n7:V, reg list:cls, reg r100:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r101:V, reg r102:V, reg c_dim6:*, reg c_dim7:V, reg length7:cls, reg r103:V, reg rep_int:cls, reg r104:V, reg r105:V, reg n8:*, reg n9:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r106:V, reg r107:V, reg n10:*, reg n11:V, reg list1:cls, reg r108:V, reg c69:cls, reg r109:V, reg r110:V, reg array:cls, reg r111:*, reg r112:V, reg p11:p(V +), reg d:*, reg d1:V, reg p12:p(V +), reg dnam:*, reg dnam1:V, reg p13:p(V +), reg r116:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r117:V, reg r118:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r119:V, reg r120:V, reg common_len4:*, reg common_len5:V, reg n12:*, reg n13:V, reg c70:cls, reg r121:V, reg prod1:cls, reg r122:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r125:V, reg r126:V, reg r127:V, reg r128:*, reg r129:V, reg length8:cls, reg r130:V, reg r131:V, reg c71:L, reg array1:cls, reg r132:*, reg r133:V, reg p14:p(V +), reg d2:*, reg d3:V, reg p15:p(V +), reg sym25:cls, reg base25:cls, reg guard25:L, reg r136:V, reg r137:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r138:V, reg r139:V, reg x29:*, reg x30:V, reg c72:L, reg x32:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r140:V, reg names1:cls, reg r141:V, reg c73:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r144:V, reg r145:V, reg r146:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r149:V, reg r150:V, reg r151:V, reg x33:*, reg x34:V, reg names2:cls, reg r152:V, reg c74:V, reg r153:V, reg r154:V, reg c75:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r155:V, reg r156:V, reg n14:*, reg n15:V, reg n16:*, reg n17:V, reg list2:cls, reg r157:V, reg p16:p(V +), reg r159:V, reg x35:*, reg x36:V, reg x37:*, reg x38:V |
    mkenv;
    st x = x;
    higher_isMissing = missing.0(higher);
    if higher_isMissing then L0(TRUE) else L0(higher);
  L0(higher_orDefault):
    st higher = higher_orDefault;
    except_isMissing = missing.0(except);
    if except_isMissing then L1() else L2(except);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(0, 1);
      goto L0(r2);
    L2():
      r = dyn base(0, 1);
      goto L0(r);
    };
    goto L2(p);
  L2(except_orDefault):
    st except = except_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L3(r5):
    r7 = `!`(r5);
    c1 = `as.logical`(r7);
    if c1 then L53() else L4();
  L49():
    x1 = ld x;
    check L51() else D0();
  L50():
    r4 = dyn base1(<sym x>);
    goto L3(r4);
  D0():
    deopt 2 [x1];
  L4():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L51():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r6 = dyn length(x2);
    check L52() else D1();
  L53():
    x3 = ld x;
    check L54() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 7 [x3];
  L6(r11):
    r17 = `>`(r11, 1);
    c2 = `as.logical`(r17);
    if c2 then L62() else L7();
  L52():
    goto L3(r6);
  L54():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L57():
    unique = ldf unique;
    check L59() else D3();
  L58():
    r10 = dyn base2(<lang `<-`(common.len, unique(lengths(x)))>);
    goto L6(r10);
  D3():
    deopt 15 [];
  L7():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L59():
    p2 = prom<V +>{
      lengths = ldf lengths;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r13 = dyn lengths(p1);
      return r13;
    };
    r15 = dyn unique(p2);
    check L60() else D4();
  L62():
    x7 = ld x;
    check L63() else D6();
  D4():
    deopt 17 [r15];
  D6():
    deopt 23 [x7];
  L9(r21):
    st except = r21;
    except3 = ld except;
    check L70() else D9();
  L60():
    st `common.len` = r15;
    length1 = ldf length in base;
    r16 = dyn length1(r15);
    check L61() else D5();
  L63():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L66():
    except1 = ld except;
    check L68() else D7();
  L67():
    r20 = dyn base3(<sym except>);
    goto L9(r20);
  D5():
    deopt 20 [r16];
  D7():
    deopt 30 [except1];
  D9():
    deopt 35 [except3];
  L61():
    goto L6(r16);
  L68():
    except2 = force? except1;
    checkMissing(except2);
    as_integer = ldf `as.integer` in base;
    r22 = dyn as_integer(except2);
    check L69() else D8();
  L70():
    except4 = force? except3;
    checkMissing(except4);
    c3 = `is.object`(except4);
    if c3 then L71() else L72(except4);
  D8():
    deopt 33 [r22];
  L10(dx1):
    st except = dx1;
    common_len = ld `common.len`;
    check L75() else D11();
  L69():
    goto L9(r22);
  L71():
    dr = tryDispatchBuiltin.1("[", except4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L73() else L72(dr);
  L72(except6):
    except7 = ld except;
    check L74() else D10();
  D10():
    deopt 37 [except6, except7];
  D11():
    deopt 43 [common_len];
  L73():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L74():
    except8 = force? except7;
    checkMissing(except8);
    r23 = `<=`(except8, 1);
    __ = ldf `[` in base;
    r24 = dyn __(except6, r23);
    goto L10(r24);
  L75():
    common_len1 = force? common_len;
    checkMissing(common_len1);
    r25 = `==`(common_len1, 1);
    c4 = `as.logical`(r25);
    if c4 then L76() else L11(c4);
  L11(c6):
    c10 = `as.logical`(c6);
    if c10 then L80() else L12();
  L76():
    _in_ = ldf `%in%`;
    check L77() else D12();
  D12():
    deopt 48 [c4];
  L12():
    _in_1 = ldf `%in%`;
    check L97() else D23();
  L77():
    p3 = prom<V +>{
      except9 = ld except;
      except10 = force? except9;
      checkMissing(except10);
      return except10;
    };
    r27 = dyn _in_(1, p3);
    check L78() else D13();
  L80():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  D13():
    deopt 51 [c4, r27];
  D23():
    deopt 80 [];
  L13(r29):
    st n = r29;
    unlist = ldf unlist;
    check L85() else D16();
  L78():
    c7 = `as.logical`(r27);
    c8 = `&&`(c4, c7);
    goto L11(c8);
  L81():
    x9 = ld x;
    check L83() else D14();
  L82():
    r28 = dyn base4(<sym x>);
    goto L13(r28);
  L97():
    p5 = prom<V +>{
      common_len2 = ld `common.len`;
      common_len3 = force? common_len2;
      checkMissing(common_len3);
      return common_len3;
    };
    p6 = prom<V +>{
      except11 = ld except;
      except12 = force? except11;
      checkMissing(except12);
      return except12;
    };
    r43 = dyn _in_1(p5, p6);
    check L98() else D24();
  D14():
    deopt 55 [x9];
  D16():
    deopt 61 [];
  D24():
    deopt 83 [r43];
  L83():
    x10 = force? x9;
    checkMissing(x10);
    length2 = ldf length in base;
    r30 = dyn length2(x10);
    check L84() else D15();
  L85():
    p4 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r32 = dyn unlist[, recursive](p4, FALSE);
    check L86() else D17();
  L98():
    r44 = `!`(r43);
    c12 = `as.logical`(r44);
    if c12 then L99() else L16();
  D15():
    deopt 58 [r30];
  D17():
    deopt 65 [r32];
  L16():
    x37 = ld x;
    check L208() else D70();
  L84():
    goto L13(r30);
  L86():
    st r = r32;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  L99():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L100() else L101();
  D70():
    deopt 250 [x37];
  L14(r34):
    n = ld n;
    check L91() else D20();
  L17(r46):
    st n = r46;
    unlist1 = ldf unlist;
    check L104() else D27();
  L87():
    r35 = ld r;
    check L89() else D18();
  L88():
    r33 = dyn base5(<sym r>);
    goto L14(r33);
  L100():
    x15 = ld x;
    check L102() else D25();
  L101():
    r45 = dyn base6(<sym x>);
    goto L17(r45);
  L208():
    x38 = force? x37;
    checkMissing(x38);
    popenv;
    return x38;
  D18():
    deopt 69 [r35];
  D20():
    deopt 72 [r34, n];
  D25():
    deopt 87 [x15];
  D27():
    deopt 93 [];
  L89():
    r36 = force? r35;
    checkMissing(r36);
    length3 = ldf length in base;
    r37 = dyn length3(r36);
    check L90() else D19();
  L91():
    n1 = force? n;
    checkMissing(n1);
    r38 = `==`(r34, n1);
    c11 = `as.logical`(r38);
    if c11 then L92() else L15();
  L102():
    x16 = force? x15;
    checkMissing(x16);
    length4 = ldf length in base;
    r47 = dyn length4(x16);
    check L103() else D26();
  L104():
    p7 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r49 = dyn unlist1[, recursive, `use.names`](p7, FALSE, FALSE);
    check L105() else D28();
  D19():
    deopt 72 [r37];
  D26():
    deopt 90 [r47];
  D28():
    deopt 99 [r49];
  L15():
    x13 = ld x;
    check L95() else D22();
  L90():
    goto L14(r37);
  L92():
    r39 = ld r;
    check L93() else D21();
  L103():
    goto L17(r47);
  L105():
    st r = r49;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L106() else L107();
  D21():
    deopt 75 [r39];
  D22():
    deopt 77 [x13];
  L18(r51):
    c14 = `as.logical`(r51);
    if c14 then L109() else L19();
  L93():
    r40 = force? r39;
    checkMissing(r40);
    popenv;
    return r40;
  L95():
    x14 = force? x13;
    checkMissing(x14);
    popenv;
    return x14;
  L106():
    r52 = ld r;
    check L108() else D29();
  L107():
    r50 = dyn base7(<sym r>);
    goto L18(r50);
  D29():
    deopt 102 [r52];
  L19():
    higher1 = ld higher;
    check L112() else D31();
  L108():
    r53 = force? r52;
    checkMissing(r53);
    c13 = `==`(r53, NULL);
    goto L18(c13);
  L109():
    x19 = ld x;
    check L110() else D30();
  D30():
    deopt 105 [x19];
  D31():
    deopt 107 [higher1];
  L110():
    x20 = force? x19;
    checkMissing(x20);
    popenv;
    return x20;
  L112():
    higher2 = force? higher1;
    checkMissing(higher2);
    c15 = `as.logical`(higher2);
    if c15 then L113() else L20(c15);
  L20(c17):
    c24 = `as.logical`(c17);
    if c24 then L120() else L22(c24);
  L113():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L114() else L115();
  L21(c20, r55):
    r62 = `==`(r55, 1.0);
    c21 = `as.logical`(r62);
    c22 = `&&`(c20, c21);
    goto L20(c22);
  L22(c26):
    c38 = `as.logical`(c26);
    if c38 then L129() else L25(c38);
  L114():
    unique1 = ldf unique;
    check L116() else D32();
  L115():
    r54 = dyn base8(<lang `<-`(c.dim, unique(lapply(x, dim)))>);
    goto L21(c15, r54);
  L120():
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L121() else L122();
  D32():
    deopt 112 [c15];
  L23(c29, r64):
    c35 = `as.logical`(r64);
    c36 = `&&`(c29, c35);
    goto L22(c36);
  L25(c40):
    c54 = `as.logical`(c40);
    if c54 then L143() else L29();
  L116():
    p10 = prom<V +>{
      lapply = ldf lapply;
      p8 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        return x22;
      };
      p9 = prom<V +>{
        dim = ld dim;
        dim1 = force? dim;
        checkMissing(dim1);
        return dim1;
      };
      r58 = dyn lapply(p8, p9);
      return r58;
    };
    r60 = dyn unique1(p10);
    check L117() else D33();
  L121():
    c_dim = ld `c.dim`;
    check L123() else D35();
  L122():
    r63 = dyn base9(<lang `<-`(c.dim, `[[`(c.dim, 1))>);
    goto L23(c24, r63);
  L129():
    sym10 = ldf prod;
    base10 = ldf prod in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L130() else L131();
  D33():
    deopt 114 [c15, r60];
  D35():
    deopt 123 [c24, c_dim];
  L26(c43, r68):
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L138() else L139();
  L29():
    sym22 = ldf prod;
    base22 = ldf prod in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L190() else L191();
  L117():
    st `c.dim` = r60;
    length5 = ldf length in base;
    r61 = dyn length5(r60);
    check L118() else D34();
  L123():
    c_dim1 = force? c_dim;
    checkMissing(c_dim1);
    c30 = `is.object`(c_dim1);
    if c30 then L124() else L125(c24, c_dim1);
  L130():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L132() else L133();
  L131():
    r67 = dyn base10(<lang `<-`(d, c(c.dim, n))>);
    goto L26(c38, r67);
  L143():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L144() else L145();
  D34():
    deopt 117 [c15, r61];
  L24(c34, dx3):
    st `c.dim` = dx3;
    is_numeric = ldf `is.numeric` in base;
    r66 = dyn is_numeric(dx3);
    check L127() else D36();
  L27(c46, r70):
    st d = r70;
    prod = ldf prod in base;
    r72 = dyn prod(r70);
    check L137() else D40();
  L28(c50, r76, r77):
    r81 = `==`(r76, r77);
    c51 = `as.logical`(r81);
    c52 = `&&`(c50, c51);
    goto L25(c52);
  L30(r83):
    st iN1 = r83;
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L153() else L154();
  L45(r118):
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L198() else L199();
  L118():
    goto L21(c15, r61);
  L124():
    dr2 = tryDispatchBuiltin.1("[[", c_dim1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L126() else L125(c24, dr2);
  L125(c32, c_dim3):
    __1 = ldf `[[` in base;
    r65 = dyn __1(c_dim3, 1);
    goto L24(c32, r65);
  L132():
    c_dim4 = ld `c.dim`;
    check L134() else D37();
  L133():
    r69 = dyn base11(<sym c.dim>, <sym n>);
    goto L27(c38, r69);
  L138():
    r78 = ld r;
    check L140() else D41();
  L139():
    r75 = dyn base12(<sym r>);
    goto L28(c43, r68, r75);
  L144():
    sym14 = ldf dimnames;
    base14 = ldf dimnames in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L146() else L147();
  L145():
    r82 = dyn base13(<lang `<-`(n1, dimnames(`[[`(x, 1)))>);
    goto L30(r82);
  L190():
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L192() else L193();
  L191():
    r117 = dyn base22(<lang `<-`(d, c(common.len, n))>);
    goto L45(r117);
  D36():
    deopt 130 [c34, r66];
  D37():
    deopt 136 [c38, c_dim4];
  D40():
    deopt 144 [c46, r72];
  D41():
    deopt 146 [c43, r68, r78];
  L31(r85):
    st n1 = r85;
    c56 = `==`(r85, NULL);
    goto L30(c56);
  L33(r89):
    st n2 = r89;
    iN1 = ld iN1;
    check L157() else D47();
  L46(r120):
    st d = r120;
    prod1 = ldf prod in base;
    r122 = dyn prod1(r120);
    check L197() else D64();
  L47(r126, r127):
    r131 = `==`(r126, r127);
    c71 = `as.logical`(r131);
    if c71 then L202() else L48();
  L126():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(c24, dx2);
  L127():
    goto L23(c34, r66);
  L134():
    c_dim5 = force? c_dim4;
    checkMissing(c_dim5);
    n2 = ld n;
    check L135() else D38();
  L137():
    goto L26(c46, r72);
  L140():
    r79 = force? r78;
    checkMissing(r79);
    length6 = ldf length in base;
    r80 = dyn length6(r79);
    check L141() else D42();
  L146():
    x23 = ld x;
    check L148() else D43();
  L147():
    r84 = dyn base14(<lang `[[`(x, 1)>);
    goto L31(r84);
  L153():
    x27 = ld x;
    check L155() else D45();
  L154():
    r88 = dyn base15(<sym x>);
    goto L33(r88);
  L192():
    common_len4 = ld `common.len`;
    check L194() else D61();
  L193():
    r119 = dyn base23(<sym common.len>, <sym n>);
    goto L46(r119);
  L198():
    r128 = ld r;
    check L200() else D65();
  L199():
    r125 = dyn base24(<sym r>);
    goto L47(r118, r125);
  D38():
    deopt 138 [c38, n2];
  D42():
    deopt 149 [c43, r68, r80];
  D43():
    deopt 155 [x23];
  D45():
    deopt 167 [x27];
  D47():
    deopt 172 [iN1];
  D61():
    deopt 225 [common_len4];
  D64():
    deopt 233 [r122];
  D65():
    deopt 235 [r118, r128];
  L48():
    x35 = ld x;
    check L206() else D69();
  L135():
    n3 = force? n2;
    checkMissing(n3);
    c47 = ldf c in base;
    r71 = dyn c47(c_dim5, n3);
    check L136() else D39();
  L141():
    goto L28(c43, r68, r80);
  L148():
    x24 = force? x23;
    checkMissing(x24);
    c55 = `is.object`(x24);
    if c55 then L149() else L150(x24);
  L155():
    x28 = force? x27;
    checkMissing(x28);
    names = ldf names in base;
    r90 = dyn names(x28);
    check L156() else D46();
  L157():
    iN2 = force? iN1;
    checkMissing(iN2);
    c57 = `as.logical`(iN2);
    if c57 then L158() else L34(c57);
  L194():
    common_len5 = force? common_len4;
    checkMissing(common_len5);
    n12 = ld n;
    check L195() else D62();
  L197():
    goto L45(r122);
  L200():
    r129 = force? r128;
    checkMissing(r129);
    length8 = ldf length in base;
    r130 = dyn length8(r129);
    check L201() else D66();
  L202():
    array1 = ldf array;
    check L203() else D67();
  D39():
    deopt 141 [c38, r71];
  D46():
    deopt 170 [r90];
  D62():
    deopt 227 [n12];
  D66():
    deopt 238 [r118, r130];
  D67():
    deopt 241 [];
  D69():
    deopt 248 [x35];
  L32(dx5):
    dimnames = ldf dimnames in base;
    r87 = dyn dimnames(dx5);
    check L152() else D44();
  L34(c59):
    r93 = `!`(c59);
    c67 = `as.logical`(r93);
    if c67 then L163() else L36();
  L136():
    goto L27(c38, r71);
  L149():
    dr4 = tryDispatchBuiltin.1("[[", x24);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L151() else L150(dr4);
  L150(x26):
    __2 = ldf `[[` in base;
    r86 = dyn __2(x26, 1);
    goto L32(r86);
  L156():
    goto L33(r90);
  L158():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L159() else L160();
  L195():
    n13 = force? n12;
    checkMissing(n13);
    c70 = ldf c in base;
    r121 = dyn c70(common_len5, n13);
    check L196() else D63();
  L201():
    goto L47(r118, r130);
  L203():
    p14 = prom<V +>{
      r132 = ld r;
      r133 = force? r132;
      checkMissing(r133);
      return r133;
    };
    p15 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    p16 = prom<V +>{
      sym25 = ldf `is.null`;
      base25 = ldf `is.null` in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L7() else L8();
    L0(r137):
      sym27 = ldf `is.null`;
      base27 = ldf `is.null` in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L14() else L15();
    L7():
      sym26 = ldf names;
      base26 = ldf names in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L9() else L10();
    L8():
      r136 = dyn base25(<lang `<-`(n1, names(`[[`(x, 1)))>);
      goto L0(r136);
    L1(r139):
      st n1 = r139;
      c73 = `==`(r139, NULL);
      goto L0(c73);
    L3(r145, r146):
      r153 = `&&`(r145, r146);
      r154 = `!`(r153);
      c75 = `as.logical`(r154);
      if c75 then L18() else L5();
    L9():
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c72 = `is.object`(x30);
      if c72 then L11() else L12(x30);
    L10():
      r138 = dyn base26(<lang `[[`(x, 1)>);
      goto L1(r138);
    L14():
      sym28 = ldf names;
      base28 = ldf names in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L16() else L17();
    L15():
      r144 = dyn base27(<lang `<-`(n2, names(x))>);
      goto L3(r137, r144);
    L2(dx7):
      names1 = ldf names in base;
      r141 = dyn names1(dx7);
      goto L1(r141);
    L4(r150, r151):
      st n2 = r151;
      c74 = `==`(r151, NULL);
      goto L3(r150, c74);
    L5():
      invisible.0();
      return NULL;
    L11():
      dr6 = tryDispatchBuiltin.1("[[", x30);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L13() else L12(dr6);
    L12(x32):
      __3 = ldf `[[` in base;
      r140 = dyn __3(x32, 1);
      goto L2(r140);
    L16():
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      names2 = ldf names in base;
      r152 = dyn names2(x34);
      goto L4(r137, r152);
    L17():
      r149 = dyn base28(<sym x>);
      goto L4(r137, r149);
    L18():
      sym29 = ldf list;
      base29 = ldf list in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L19() else L20();
    L6(r156):
      return r156;
    L13():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    L19():
      n14 = ld n1;
      n15 = force? n14;
      checkMissing(n15);
      n16 = ld n2;
      n17 = force? n16;
      checkMissing(n17);
      list2 = ldf list in base;
      r157 = dyn list2(n15, n17);
      goto L6(r157);
    L20():
      r155 = dyn base29(<sym n1>, <sym n2>);
      goto L6(r155);
    };
    r159 = dyn array1[, dim, dimnames](p14, p15, p16);
    check L204() else D68();
  L206():
    x36 = force? x35;
    checkMissing(x36);
    popenv;
    return x36;
  D44():
    deopt 161 [r87];
  D63():
    deopt 230 [r121];
  D68():
    deopt 247 [r159];
  L35(c62, r92):
    c64 = `as.logical`(r92);
    c65 = `&&`(c62, c64);
    goto L34(c65);
  L36():
    goto L44(NULL);
  L44(r110):
    st dnam = r110;
    array = ldf array;
    check L187() else D59();
  L151():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx4);
  L152():
    goto L31(r87);
  L159():
    n4 = ld n2;
    check L161() else D48();
  L160():
    r91 = dyn base16(<sym n2>);
    goto L35(c57, r91);
  L163():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L164() else L165();
  L196():
    goto L46(r121);
  L204():
    popenv;
    return r159;
  D48():
    deopt 175 [c57, n4];
  D59():
    deopt 214 [];
  L37(r95):
    goto L44(r95);
  L161():
    n5 = force? n4;
    checkMissing(n5);
    c63 = `==`(n5, NULL);
    goto L35(c57, c63);
  L164():
    iN3 = ld iN1;
    check L166() else D49();
  L165():
    r94 = dyn base17(<lang if(iN1, rep.int(list(n1), length(c.dim)), n1)>, <lang list(n2)>);
    goto L37(r94);
  L187():
    p11 = prom<V +>{
      r111 = ld r;
      r112 = force? r111;
      checkMissing(r112);
      return r112;
    };
    p12 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p13 = prom<V +>{
      dnam = ld dnam;
      dnam1 = force? dnam;
      checkMissing(dnam1);
      return dnam1;
    };
    r116 = dyn array[, dim, dimnames](p11, p12, p13);
    check L188() else D60();
  D49():
    deopt 182 [iN3];
  D60():
    deopt 220 [r116];
  L166():
    iN4 = force? iN3;
    checkMissing(iN4);
    c68 = `as.logical`(iN4);
    if c68 then L167() else L38();
  L188():
    popenv;
    return r116;
  L38():
    n8 = ld n1;
    check L180() else D55();
  L42(r105):
    sym21 = ldf list;
    base21 = ldf list in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L181() else L182();
  L167():
    sym18 = ldf `rep.int`;
    base18 = ldf `rep.int` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L168() else L169();
  D55():
    deopt 200 [n8];
  L39(r97):
    goto L42(r97);
  L43(r107):
    c69 = ldf c in base;
    r109 = dyn c69(r105, r107);
    check L185() else D58();
  L168():
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L170() else L171();
  L169():
    r96 = dyn base18(<lang list(n1)>, <lang length(c.dim)>);
    goto L39(r96);
  L180():
    n9 = force? n8;
    checkMissing(n9);
    goto L42(n9);
  L181():
    n10 = ld n2;
    check L183() else D56();
  L182():
    r106 = dyn base21(<sym n2>);
    goto L43(r106);
  D56():
    deopt 204 [n10];
  D58():
    deopt 209 [r109];
  L40(r99):
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L174() else L175();
  L170():
    n6 = ld n1;
    check L172() else D50();
  L171():
    r98 = dyn base19(<sym n1>);
    goto L40(r98);
  L183():
    n11 = force? n10;
    checkMissing(n11);
    list1 = ldf list in base;
    r108 = dyn list1(n11);
    check L184() else D57();
  L185():
    goto L37(r109);
  D50():
    deopt 188 [n6];
  D57():
    deopt 207 [r108];
  L41(r102):
    rep_int = ldf `rep.int` in base;
    r104 = dyn rep_int(r99, r102);
    check L178() else D54();
  L172():
    n7 = force? n6;
    checkMissing(n7);
    list = ldf list in base;
    r100 = dyn list(n7);
    check L173() else D51();
  L174():
    c_dim6 = ld `c.dim`;
    check L176() else D52();
  L175():
    r101 = dyn base20(<sym c.dim>);
    goto L41(r101);
  L184():
    goto L43(r108);
  D51():
    deopt 191 [r100];
  D52():
    deopt 194 [c_dim6];
  D54():
    deopt 199 [r104];
  L173():
    goto L40(r100);
  L176():
    c_dim7 = force? c_dim6;
    checkMissing(c_dim7);
    length7 = ldf length in base;
    r103 = dyn length7(c_dim7);
    check L177() else D53();
  L178():
    goto L39(r104);
  D53():
    deopt 197 [r103];
  L177():
    goto L41(r103);
  }
}