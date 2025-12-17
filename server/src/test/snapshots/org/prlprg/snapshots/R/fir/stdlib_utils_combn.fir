fun main() {
  () -+> V { reg r:cls, reg combn:cls, reg letters:*, reg letters1:V, reg c:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V, reg combn1:cls, reg min:*, reg min1:V, reg p1:p(V +), reg r5:V, reg combn2:cls, reg r6:cls, reg p2:p(V +), reg r8:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg round:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg r16:V, reg m:*, reg m1:V, reg length:cls, reg r17:V, reg r18:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg m2:*, reg m3:V, reg is_array:cls, reg r22:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg round1:cls, reg r28:V, reg c1:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg r34:V, reg mm:*, reg mm1:V, reg dim:cls, reg r35:V, reg r36:V, reg p5:p(V +), reg r38:V, reg combn3:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg c2:cls, reg r41:V, reg p6:p(V +), reg tabulate:*, reg tabulate1:V, reg p7:p(V +), reg r44:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg n:*, reg n1:V, reg r45:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c4:L, reg x1:V, reg stopifnot1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg combn4:cls, reg n2:*, reg n3:V, reg p8:p(V +), reg m4:*, reg m5:V, reg p9:p(V +), reg r50:V, reg is_array1:cls, reg r51:V, reg p10:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg cc:*, reg cc1:V, reg dim1:cls, reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg r60:V, reg m6:*, reg m7:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg r65:V, reg n4:*, reg n5:V, reg m8:*, reg m9:V, reg choose:cls, reg r66:V, reg c5:cls, reg r67:V, reg r68:V, reg p11:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg cc2:*, reg cc3:V, reg combn5:cls, reg n6:*, reg n7:V, reg p12:p(V +), reg m10:*, reg m11:V, reg p13:p(V +), reg identity:*, reg identity1:V, reg p14:p(V +), reg r75:V, reg identical:cls, reg r76:V, reg c6:L, reg c7:V, reg m12:*, reg m13:V, reg r77:V, reg c9:L, reg c10:V, reg p15:p(V +), reg r79:V |
    mkenv;
    r = clos inner4097313510;
    st combn = r;
    combn = ldf combn;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c = `is.object`(letters1);
      if c then L1() else L2(letters1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", letters1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(letters3):
      __ = ldf `[` in base;
      r1 = dyn __(letters3, <int 1, 2, 3, 4>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn combn(p, 2.0);
    check L5() else D1();
  D1():
    deopt 7 [r3];
  L5():
    combn1 = ldf combn;
    check L6() else D2();
  D2():
    deopt 9 [];
  L6():
    p1 = prom<V +>{
      min = ld min;
      min1 = force? min;
      checkMissing(min1);
      return min1;
    };
    r5 = dyn combn1(10.0, 5.0, p1);
    check L7() else D3();
  D3():
    deopt 13 [r5];
  L7():
    st m = r5;
    combn2 = ldf combn;
    check L8() else D4();
  D4():
    deopt 16 [];
  L8():
    p2 = prom<V +>{
      r6 = clos inner2501545716;
      return r6;
    };
    r8 = dyn combn2(15.0, 6.0, p2);
    check L9() else D5();
  D5():
    deopt 20 [r8];
  L9():
    st mm = r8;
    stopifnot = ldf stopifnot;
    check L10() else D6();
  D6():
    deopt 23 [];
  L10():
    p3 = prom<V +>{
      sym = ldf round;
      base = ldf round in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r10):
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L2():
      round = ldf round in base;
      r11 = dyn round(<lang choose(10.0, 5.0)>);
      goto L0(r11);
    L3():
      r9 = dyn base(<lang choose(10.0, 5.0)>);
      goto L0(r9);
    L1(r15, r16):
      r18 = `==`(r15, r16);
      return r18;
    L4():
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      length = ldf length in base;
      r17 = dyn length(m1);
      goto L1(r10, r17);
    L5():
      r14 = dyn base1(<sym m>);
      goto L1(r10, r14);
    };
    p4 = prom<V +>{
      sym2 = ldf `is.array`;
      base2 = ldf `is.array` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      is_array = ldf `is.array` in base;
      r22 = dyn is_array(m3);
      goto L0(r22);
    L2():
      r20 = dyn base2(<sym m>);
      goto L0(r20);
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r25):
      sym5 = ldf dim;
      base5 = ldf dim in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L7() else L8();
    L3():
      sym4 = ldf round;
      base4 = ldf round in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L4():
      r24 = dyn base3(2.0, 3.0, <lang round(choose(15.0, 6.0))>);
      goto L0(r24);
    L1(r27):
      c1 = ldf c in base;
      r29 = dyn c1(2.0, 3.0, r27);
      goto L0(r29);
    L2(r33, r34):
      r36 = `==`(r33, r34);
      return r36;
    L5():
      round1 = ldf round in base;
      r28 = dyn round1(<lang choose(15.0, 6.0)>);
      goto L1(r28);
    L6():
      r26 = dyn base4(<lang choose(15.0, 6.0)>);
      goto L1(r26);
    L7():
      mm = ld mm;
      mm1 = force? mm;
      checkMissing(mm1);
      dim = ldf dim in base;
      r35 = dyn dim(mm1);
      goto L2(r25, r35);
    L8():
      r32 = dyn base5(<sym mm>);
      goto L2(r25, r32);
    };
    r38 = dyn stopifnot(p3, p4, p5);
    check L11() else D7();
  D7():
    deopt 27 [r38];
  L11():
    combn3 = ldf combn;
    check L12() else D8();
  D8():
    deopt 29 [];
  L12():
    p6 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c2 = ldf c in base;
      r41 = dyn c2(1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 3.0, 3.0, 4.0);
      goto L0(r41);
    L2():
      r39 = dyn base6(1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 3.0, 3.0, 4.0);
      goto L0(r39);
    };
    p7 = prom<V +>{
      tabulate = ld tabulate;
      tabulate1 = force? tabulate;
      checkMissing(tabulate1);
      return tabulate1;
    };
    r44 = dyn combn3[, , , nbins](p6, 3.0, p7, 4.0);
    check L13() else D9();
  D9():
    deopt 35 [r44];
  L13():
    s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L14() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st n = x;
    n = ld n;
    check L15() else D10();
  L14():
    invisible.0();
    popenv;
    return i2;
  D10():
    deopt 39 [i2, 0.0, n];
  L15():
    n1 = force? n;
    checkMissing(n1);
    r45 = `:`(0.0, n1);
    s1 = toForSeq(r45);
    l1 = length(s1);
    i5 = 0;
    goto L1(i2, i5);
  L1(i6, i7):
    i8 = `+`.1(i7, 1);
    c4 = `<`.1(l1, i8);
    if c4 then L16() else L2();
  L2():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st m = x1;
    stopifnot1 = ldf stopifnot;
    check L17() else D11();
  L16():
    goto L0(i6);
  D11():
    deopt 43 [i6, i8];
  L17():
    p10 = prom<V +>{
      sym7 = ldf `is.array`;
      base7 = ldf `is.array` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      combn4 = ldf combn;
      p8 = prom<V +>{
        n2 = ld n;
        n3 = force? n2;
        checkMissing(n3);
        return n3;
      };
      p9 = prom<V +>{
        m4 = ld m;
        m5 = force? m4;
        checkMissing(m5);
        return m5;
      };
      r50 = dyn combn4(p8, p9);
      st cc = r50;
      is_array1 = ldf `is.array` in base;
      r51 = dyn is_array1(r50);
      goto L0(r51);
    L2():
      r46 = dyn base7(<lang `<-`(cc, combn(n, m))>);
      goto L0(r46);
    };
    p11 = prom<V +>{
      sym8 = ldf dim;
      base8 = ldf dim in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L3() else L4();
    L0(r54):
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L5() else L6();
    L3():
      cc = ld cc;
      cc1 = force? cc;
      checkMissing(cc1);
      dim1 = ldf dim in base;
      r55 = dyn dim1(cc1);
      goto L0(r55);
    L4():
      r53 = dyn base8(<sym cc>);
      goto L0(r53);
    L1(r59, r60):
      r68 = `==`(r59, r60);
      return r68;
    L5():
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      sym10 = ldf choose;
      base10 = ldf choose in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L7() else L8();
    L6():
      r58 = dyn base9(<sym m>, <lang choose(n, m)>);
      goto L1(r54, r58);
    L2(r64, r65):
      c5 = ldf c in base;
      r67 = dyn c5(m7, r65);
      goto L1(r64, r67);
    L7():
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      choose = ldf choose in base;
      r66 = dyn choose(n5, m9);
      goto L2(r54, r66);
    L8():
      r63 = dyn base10(<sym n>, <sym m>);
      goto L2(r54, r63);
    };
    p15 = prom<V +>{
      sym11 = ldf identical;
      base11 = ldf identical in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r71):
      c6 = `as.logical`(r71);
      if c6 then L1(c6) else L4();
    L2():
      cc2 = ld cc;
      cc3 = force? cc2;
      checkMissing(cc3);
      combn5 = ldf combn;
      p12 = prom<V +>{
        n6 = ld n;
        n7 = force? n6;
        checkMissing(n7);
        return n7;
      };
      p13 = prom<V +>{
        m10 = ld m;
        m11 = force? m10;
        checkMissing(m11);
        return m11;
      };
      p14 = prom<V +>{
        identity = ld identity;
        identity1 = force? identity;
        checkMissing(identity1);
        return identity1;
      };
      r75 = dyn combn5(p12, p13, p14);
      identical = ldf identical in base;
      r76 = dyn identical(cc3, r75, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r76);
    L3():
      r70 = dyn base11(<sym cc>, <lang combn(n, m, identity)>);
      goto L0(r70);
    L1(c7):
      return c7;
    L4():
      m12 = ld m;
      m13 = force? m12;
      checkMissing(m13);
      r77 = `==`(m13, 1.0);
      c9 = `as.logical`(r77);
      c10 = `||`(c6, c9);
      goto L1(c10);
    };
    r79 = dyn stopifnot1(p10, p11, p15);
    check L18() else D12();
  D12():
    deopt 47 [i6, i8, r79];
  L18():
    goto L1(i6, i8);
  }
}
fun inner4097313510(x, m, FUN, simplify, `...`) {
  (reg x:*, reg m:*, reg FUN:*, reg simplify:*, reg ddd:dots) -+> V { var x:*, var m:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, var `...`:dots?, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg m1:*, reg m2:V, reg length:cls, reg r2:V, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg m3:*, reg m4:V, reg is_numeric:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg m5:*, reg m6:V, reg r10:V, reg c:L, reg stop:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x1:*, reg x2:V, reg is_numeric1:cls, reg r15:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c6:L, reg r17:V, reg x3:*, reg x4:V, reg length1:cls, reg r18:V, reg r19:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg x5:*, reg x6:V, reg r20:V, reg c13:L, reg c14:V, reg c16:L, reg c18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c21:L, reg r22:V, reg x7:*, reg x8:V, reg trunc:cls, reg r23:V, reg x9:*, reg x10:V, reg r24:V, reg c22:L, reg c23:V, reg c25:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg x11:*, reg x12:V, reg r27:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg x13:*, reg x14:V, reg length2:cls, reg r31:V, reg n:*, reg n1:V, reg m7:*, reg m8:V, reg r32:V, reg c26:L, reg stop1:cls, reg r33:V, reg x15:*, reg x16:V, reg simplify1:*, reg simplify2:V, reg c27:L, reg is_factor:cls, reg x17:*, reg x18:V, reg p2:p(V +), reg r36:V, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg x19:*, reg x20:V, reg as_integer:cls, reg r39:V, reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg m9:*, reg m10:V, reg as_integer1:cls, reg r44:V, reg m11:*, reg m12:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg m13:*, reg m14:V, reg r47:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg FUN1:*, reg FUN2:V, reg c29:V, reg nofun:*, reg nofun1:V, reg r50:V, reg c30:L, reg c32:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg c35:L, reg r52:V, reg FUN3:*, reg FUN4:V, reg is_function:cls, reg r53:V, reg r54:V, reg c36:L, reg c37:V, reg c39:L, reg stop2:cls, reg r55:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r57:V, reg r58:V, reg nofun2:*, reg nofun3:V, reg c40:L, reg x21:*, reg x22:V, reg c41:L, reg x24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg a:*, reg a1:V, reg __:cls, reg r59:V, reg dx2:V, reg FUN5:cls, reg x25:*, reg x26:V, reg c42:L, reg x28:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg a2:*, reg a3:V, reg __1:cls, reg r60:V, reg p3:p(V +), reg ddd1:dots?, reg r62:V, reg length3:cls, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r66:V, reg r67:V, reg round:cls, reg r68:V, reg as_integer2:cls, reg r69:V, reg simplify3:*, reg simplify4:V, reg c43:L, reg nofun4:*, reg nofun5:V, reg c44:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r70:V, reg r71:V, reg m15:*, reg m16:V, reg count:*, reg count1:V, reg c45:cls, reg r72:V, reg r73:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r74:V, reg r75:V, reg r76:*, reg r77:V, reg dim:cls, reg r78:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r79:V, reg r80:V, reg d:*, reg d1:V, reg length4:cls, reg r81:V, reg r82:V, reg c46:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r83:V, reg r84:V, reg d2:*, reg d3:V, reg count2:*, reg count3:V, reg c47:cls, reg r85:V, reg len_r:*, reg len_r1:V, reg r86:V, reg c48:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r87:V, reg r88:V, reg len_r2:*, reg len_r3:V, reg count4:*, reg count5:V, reg c49:cls, reg r89:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r90:V, reg d4:*, reg d5:V, reg count6:*, reg count7:V, reg c50:cls, reg r91:V, reg simplify5:*, reg simplify6:V, reg c51:L, reg matrix:cls, reg r93:*, reg r94:V, reg p4:p(V +), reg len_r4:*, reg len_r5:V, reg p5:p(V +), reg count8:*, reg count9:V, reg p6:p(V +), reg r98:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r100:V, reg r101:V, reg count10:*, reg count11:V, reg vector:cls, reg r102:V, reg r103:*, reg r104:V, reg l:*, reg c52:L, reg r106:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg r108:V, reg dx6:V, reg ____:cls, reg r109:V, reg m17:*, reg m18:V, reg r110:V, reg c53:L, reg n2:*, reg n3:V, reg m19:*, reg m20:V, reg r111:V, reg r112:V, reg a4:*, reg a5:V, reg c54:L, reg a7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __2:cls, reg r113:V, reg nmmp1:*, reg nmmp2:V, reg r114:V, reg c55:L, reg e:*, reg e1:V, reg n4:*, reg n5:V, reg h:*, reg h1:V, reg r115:V, reg r116:V, reg c56:L, reg a8:*, reg a9:V, reg c57:L, reg a11:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg m21:*, reg m22:V, reg __3:cls, reg r117:V, reg a12:*, reg a13:V, reg c58:L, reg a15:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg m23:*, reg m24:V, reg h2:*, reg h3:V, reg r119:V, reg __4:cls, reg r120:V, reg h4:*, reg h5:V, reg r121:V, reg h6:*, reg h7:V, reg r122:V, reg e2:*, reg e3:V, reg j:*, reg j1:V, reg r123:V, reg l3:*, reg c59:L, reg r125:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg m25:*, reg m26:V, reg h8:*, reg h9:V, reg r128:V, reg j2:*, reg j3:V, reg r129:V, reg ___:cls, reg r130:V, reg nofun6:*, reg nofun7:V, reg c60:L, reg x29:*, reg x30:V, reg c61:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg a16:*, reg a17:V, reg __5:cls, reg r131:V, reg dx17:V, reg FUN6:cls, reg x33:*, reg x34:V, reg c62:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg a18:*, reg a19:V, reg __6:cls, reg r132:V, reg p7:p(V +), reg ddd2:dots?, reg r134:V, reg simplify7:*, reg simplify8:V, reg c63:L, reg r135:*, reg r136:V, reg l6:*, reg c64:L, reg r138:V, reg l8:*, reg dr18:V, reg dc9:L, reg dx20:V, reg r140:V, reg dx21:V, reg i:*, reg i1:V, reg ___1:cls, reg r141:V, reg r143:*, reg r144:V, reg l9:*, reg c65:L, reg r146:V, reg l11:*, reg dr20:V, reg dc10:L, reg dx22:V, reg r148:V, reg dx23:V, reg i2:*, reg i3:V, reg ____1:cls, reg r149:V, reg i4:*, reg i5:V, reg r150:V, reg simplify9:*, reg simplify10:V, reg c66:L, reg is_factor1:cls, reg x37:*, reg x38:V, reg p8:p(V +), reg r153:V, reg c67:L, reg levels:cls, reg x39:*, reg x40:V, reg p9:p(V +), reg r155:V, reg l12:*, reg levels__:cls, reg r156:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r157:V, reg r158:V, reg x41:*, reg x42:V, reg class:cls, reg r159:V, reg l13:*, reg class__:cls, reg r160:V, reg dim_use:*, reg dim_use1:V, reg l14:*, reg dim__:cls, reg r162:V, reg out:*, reg out1:V |
    mkenv;
    st x = x;
    st m = m;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0(NULL) else L0(FUN);
  L0(FUN_orDefault):
    st FUN = FUN_orDefault;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L1(TRUE) else L1(simplify);
  L1(simplify_orDefault):
    st simplify = simplify_orDefault;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L71() else D0();
  D0():
    deopt 1 [];
  L71():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `==`(r1, 1);
      return r3;
    L1():
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      length = ldf length in base;
      r2 = dyn length(m2);
      goto L0(r2);
    L2():
      r = dyn base(<sym m>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf `is.numeric`;
      base1 = ldf `is.numeric` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      m3 = ld m;
      m4 = force? m3;
      checkMissing(m4);
      is_numeric = ldf `is.numeric` in base;
      r7 = dyn is_numeric(m4);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym m>);
      goto L0(r5);
    };
    r9 = dyn stopifnot(p, p1);
    check L72() else D1();
  D1():
    deopt 4 [r9];
  L72():
    m5 = ld m;
    check L73() else D2();
  D2():
    deopt 5 [m5];
  L73():
    m6 = force? m5;
    checkMissing(m6);
    r10 = `<`(m6, 0.0);
    c = `as.logical`(r10);
    if c then L74() else L2();
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L78() else L79();
  L74():
    stop = ldf stop;
    check L75() else D3();
  D3():
    deopt 10 [];
  L4(r14):
    c1 = `as.logical`(r14);
    if c1 then L82() else L5(c1);
  L75():
    r11 = dyn stop[, domain]("m < 0", NA_LGL);
    check L76() else D4();
  L78():
    x1 = ld x;
    check L80() else D5();
  L79():
    r13 = dyn base2(<sym x>);
    goto L4(r13);
  D4():
    deopt 14 [r11];
  D5():
    deopt 19 [x1];
  L5(c3):
    c10 = `as.logical`(c3);
    if c10 then L88() else L7(c10);
  L76():
    goto L3();
  L80():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric1 = ldf `is.numeric` in base;
    r15 = dyn is_numeric1(x2);
    check L81() else D6();
  L82():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  D6():
    deopt 22 [r15];
  L6(c6, r17):
    r19 = `==`(r17, 1);
    c7 = `as.logical`(r19);
    c8 = `&&`(c6, c7);
    goto L5(c8);
  L7(c12):
    c16 = `as.logical`(c12);
    if c16 then L91() else L8(c16);
  L81():
    goto L4(r15);
  L83():
    x3 = ld x;
    check L85() else D7();
  L84():
    r16 = dyn base3(<sym x>);
    goto L6(c1, r16);
  L88():
    x5 = ld x;
    check L89() else D9();
  D7():
    deopt 25 [c1, x3];
  D9():
    deopt 32 [c10, x5];
  L8(c18):
    c25 = `as.logical`(c18);
    if c25 then L98() else L10();
  L85():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r18 = dyn length1(x4);
    check L86() else D8();
  L89():
    x6 = force? x5;
    checkMissing(x6);
    r20 = `>`(x6, 0.0);
    c13 = `as.logical`(r20);
    c14 = `&&`(c10, c13);
    goto L7(c14);
  L91():
    sym4 = ldf trunc;
    base4 = ldf trunc in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L92() else L93();
  D8():
    deopt 28 [c1, r18];
  L9(c21, r22):
    x9 = ld x;
    check L96() else D12();
  L10():
    goto L12();
  L12():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  L86():
    goto L6(c1, r18);
  L92():
    x7 = ld x;
    check L94() else D10();
  L93():
    r21 = dyn base4(<sym x>);
    goto L9(c16, r21);
  L98():
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  D10():
    deopt 39 [c16, x7];
  D12():
    deopt 42 [c21, r22, x9];
  L11(r26):
    st x = r26;
    goto L12();
  L13(r30):
    st n = r30;
    n = ld n;
    check L107() else D16();
  L94():
    x8 = force? x7;
    checkMissing(x8);
    trunc = ldf trunc in base;
    r23 = dyn trunc(x8);
    check L95() else D11();
  L96():
    x10 = force? x9;
    checkMissing(x10);
    r24 = `==`(r22, x10);
    c22 = `as.logical`(r24);
    c23 = `&&`(c21, c22);
    goto L8(c23);
  L99():
    x11 = ld x;
    check L101() else D13();
  L100():
    r25 = dyn base5(<sym x>);
    goto L11(r25);
  L103():
    x13 = ld x;
    check L105() else D14();
  L104():
    r29 = dyn base6(<sym x>);
    goto L13(r29);
  D11():
    deopt 42 [c16, r23];
  D13():
    deopt 47 [x11];
  D14():
    deopt 55 [x13];
  D16():
    deopt 60 [n];
  L95():
    goto L9(c16, r23);
  L101():
    x12 = force? x11;
    checkMissing(x12);
    r27 = seq_len(x12);
    goto L11(r27);
  L105():
    x14 = force? x13;
    checkMissing(x14);
    length2 = ldf length in base;
    r31 = dyn length2(x14);
    check L106() else D15();
  L107():
    n1 = force? n;
    checkMissing(n1);
    m7 = ld m;
    check L108() else D17();
  D15():
    deopt 58 [r31];
  D17():
    deopt 61 [n1, m7];
  L106():
    goto L13(r31);
  L108():
    m8 = force? m7;
    checkMissing(m8);
    r32 = `<`(n1, m8);
    c26 = `as.logical`(r32);
    if c26 then L109() else L14();
  L14():
    goto L15();
  L15():
    x15 = ld x;
    check L113() else D20();
  L109():
    stop1 = ldf stop;
    check L110() else D18();
  D18():
    deopt 65 [];
  D20():
    deopt 72 [x15];
  L110():
    r33 = dyn stop1[, domain]("n < m", NA_LGL);
    check L111() else D19();
  L113():
    x16 = force? x15;
    checkMissing(x16);
    st x0 = x16;
    simplify1 = ld simplify;
    check L114() else D21();
  D19():
    deopt 69 [r33];
  D21():
    deopt 75 [simplify1];
  L111():
    goto L15();
  L114():
    simplify2 = force? simplify1;
    checkMissing(simplify2);
    c27 = `as.logical`(simplify2);
    if c27 then L115() else L16();
  L16():
    goto L20();
  L20():
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L125() else L126();
  L115():
    is_factor = ldf `is.factor`;
    check L116() else D22();
  D22():
    deopt 78 [];
  L21(r43):
    st m = r43;
    st e = 0.0;
    m11 = ld m;
    check L129() else D28();
  L116():
    p2 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r36 = dyn is_factor(p2);
    check L117() else D23();
  L125():
    m9 = ld m;
    check L127() else D26();
  L126():
    r42 = dyn base8(<sym m>);
    goto L21(r42);
  D23():
    deopt 80 [r36];
  D26():
    deopt 94 [m9];
  D28():
    deopt 102 [m11];
  L117():
    c28 = `as.logical`(r36);
    if c28 then L118() else L17();
  L127():
    m10 = force? m9;
    checkMissing(m10);
    as_integer1 = ldf `as.integer` in base;
    r44 = dyn as_integer1(m10);
    check L128() else D27();
  L129():
    m12 = force? m11;
    checkMissing(m12);
    st h = m12;
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L130() else L131();
  D27():
    deopt 97 [r44];
  L17():
    goto L19(NULL);
  L19(r40):
    goto L20();
  L22(r46):
    st a = r46;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L133() else L134();
  L118():
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L119() else L120();
  L128():
    goto L21(r44);
  L130():
    m13 = ld m;
    check L132() else D29();
  L131():
    r45 = dyn base9(<sym m>);
    goto L22(r45);
  D29():
    deopt 106 [m13];
  L18(r38):
    st x = r38;
    goto L19(r38);
  L23(r49):
    st nofun = r49;
    nofun = ld nofun;
    check L136() else D31();
  L119():
    x19 = ld x;
    check L121() else D24();
  L120():
    r37 = dyn base7(<sym x>);
    goto L18(r37);
  L132():
    m14 = force? m13;
    checkMissing(m14);
    r47 = seq_len(m14);
    goto L22(r47);
  L133():
    FUN1 = ld FUN;
    check L135() else D30();
  L134():
    r48 = dyn base10(<sym FUN>);
    goto L23(r48);
  D24():
    deopt 83 [x19];
  D30():
    deopt 111 [FUN1];
  D31():
    deopt 115 [nofun];
  L121():
    x20 = force? x19;
    checkMissing(x20);
    as_integer = ldf `as.integer` in base;
    r39 = dyn as_integer(x20);
    check L122() else D25();
  L135():
    FUN2 = force? FUN1;
    checkMissing(FUN2);
    c29 = `==`(FUN2, NULL);
    goto L23(c29);
  L136():
    nofun1 = force? nofun;
    checkMissing(nofun1);
    r50 = `!`(nofun1);
    c30 = `as.logical`(r50);
    if c30 then L137() else L24(c30);
  D25():
    deopt 86 [r39];
  L24(c32):
    c39 = `as.logical`(c32);
    if c39 then L143() else L26();
  L122():
    goto L18(r39);
  L137():
    sym11 = ldf `is.function`;
    base11 = ldf `is.function` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L138() else L139();
  L25(c35, r52):
    r54 = `!`(r52);
    c36 = `as.logical`(r54);
    c37 = `&&`(c35, c36);
    goto L24(c37);
  L26():
    goto L27();
  L27():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L147() else L148();
  L138():
    FUN3 = ld FUN;
    check L140() else D32();
  L139():
    r51 = dyn base11(<sym FUN>);
    goto L25(c30, r51);
  L143():
    stop2 = ldf stop;
    check L144() else D34();
  D32():
    deopt 120 [c30, FUN3];
  D34():
    deopt 127 [];
  L28(r58):
    st `len.r` = r58;
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L160() else L161();
  L140():
    FUN4 = force? FUN3;
    checkMissing(FUN4);
    is_function = ldf `is.function` in base;
    r53 = dyn is_function(FUN4);
    check L141() else D33();
  L144():
    r55 = dyn stop2("'FUN' must be a function or NULL");
    check L145() else D35();
  L147():
    nofun2 = ld nofun;
    check L149() else D36();
  L148():
    r57 = dyn base12(<lang `<-`(r, if(nofun, `[`(x, a), FUN(`[`(x, a), ...)))>);
    goto L28(r57);
  D33():
    deopt 123 [c30, r53];
  D35():
    deopt 129 [r55];
  D36():
    deopt 134 [nofun2];
  L32(r65):
    st count = r65;
    simplify3 = ld simplify;
    check L165() else D43();
  L141():
    goto L25(c30, r53);
  L145():
    goto L27();
  L149():
    nofun3 = force? nofun2;
    checkMissing(nofun3);
    c40 = `as.logical`(nofun3);
    if c40 then L150() else L29();
  L160():
    sym14 = ldf round;
    base14 = ldf round in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L162() else L163();
  L161():
    r64 = dyn base13(<lang round(choose(n, m))>);
    goto L32(r64);
  D43():
    deopt 158 [simplify3];
  L29():
    FUN5 = ldf FUN;
    check L157() else D39();
  L31(dx2):
    st r = dx2;
    length3 = ldf length in base;
    r63 = dyn length3(dx2);
    check L159() else D41();
  L33(r67):
    as_integer2 = ldf `as.integer` in base;
    r69 = dyn as_integer2(r67);
    check L164() else D42();
  L150():
    x21 = ld x;
    check L151() else D37();
  L162():
    round = ldf round in base;
    r68 = dyn round(<lang choose(n, m)>);
    goto L33(r68);
  L163():
    r66 = dyn base14(<lang choose(n, m)>);
    goto L33(r66);
  L165():
    simplify4 = force? simplify3;
    checkMissing(simplify4);
    c43 = `as.logical`(simplify4);
    if c43 then L166() else L34();
  D37():
    deopt 136 [x21];
  D39():
    deopt 142 [];
  D41():
    deopt 148 [r63];
  D42():
    deopt 156 [r69];
  L34():
    goto L44();
  L44():
    simplify5 = ld simplify;
    check L204() else D62();
  L151():
    x22 = force? x21;
    checkMissing(x22);
    c41 = `is.object`(x22);
    if c41 then L152() else L153(x22);
  L157():
    p3 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c42 = `is.object`(x26);
      if c42 then L1() else L2(x26);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x26);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x28):
      a2 = ld a;
      a3 = force? a2;
      __1 = ldf `[` in base;
      r60 = dyn __1(x28, a3);
      goto L0(r60);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    ddd1 = ld `...`;
    r62 = dyn FUN5[, `...`](p3, ddd1);
    check L158() else D40();
  L159():
    goto L28(r63);
  L164():
    goto L32(r69);
  L166():
    nofun4 = ld nofun;
    check L167() else D44();
  D40():
    deopt 145 [r62];
  D44():
    deopt 160 [nofun4];
  D62():
    deopt 216 [simplify5];
  L30(dx1):
    goto L31(dx1);
  L152():
    dr = tryDispatchBuiltin.1("[", x22);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L154() else L153(dr);
  L153(x24):
    a = ld a;
    check L155() else D38();
  L158():
    goto L31(r62);
  L167():
    nofun5 = force? nofun4;
    checkMissing(nofun5);
    c44 = `as.logical`(nofun5);
    if c44 then L168() else L35();
  L204():
    simplify6 = force? simplify5;
    checkMissing(simplify6);
    c51 = `as.logical`(simplify6);
    if c51 then L205() else L45();
  D38():
    deopt 138 [x24, a];
  L35():
    sym16 = ldf dim;
    base16 = ldf dim in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L175() else L176();
  L37(r73):
    st `dim.use` = r73;
    goto L44();
  L45():
    sym21 = ldf vector;
    base21 = ldf vector in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L209() else L210();
  L46():
    m17 = ld m;
    check L217() else D68();
  L154():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(dx);
  L155():
    a1 = force? a;
    __ = ldf `[` in base;
    r59 = dyn __(x24, a1);
    goto L30(r59);
  L168():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L169() else L170();
  L205():
    matrix = ldf matrix;
    check L206() else D63();
  D63():
    deopt 219 [];
  D68():
    deopt 242 [m17];
  L36(r71):
    goto L37(r71);
  L38(r75):
    st d = r75;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L179() else L180();
  L47(r101):
    st out = r101;
    r103 = ld r;
    check L213() else D67();
  L169():
    m15 = ld m;
    check L171() else D45();
  L170():
    r70 = dyn base15(<sym m>, <sym count>);
    goto L36(r70);
  L175():
    r76 = ld r;
    check L177() else D48();
  L176():
    r74 = dyn base16(<sym r>);
    goto L38(r74);
  L206():
    p4 = prom<V +>{
      r93 = ld r;
      r94 = force? r93;
      checkMissing(r94);
      return r94;
    };
    p5 = prom<V +>{
      len_r4 = ld `len.r`;
      len_r5 = force? len_r4;
      checkMissing(len_r5);
      return len_r5;
    };
    p6 = prom<V +>{
      count8 = ld count;
      count9 = force? count8;
      checkMissing(count9);
      return count9;
    };
    r98 = dyn matrix[, nrow, ncol](p4, p5, p6);
    check L207() else D64();
  L209():
    count10 = ld count;
    check L211() else D65();
  L210():
    r100 = dyn base21("list", <sym count>);
    goto L47(r100);
  L217():
    m18 = force? m17;
    checkMissing(m18);
    r110 = `>`(m18, 0.0);
    c53 = `as.logical`(r110);
    if c53 then L218() else L49();
  D45():
    deopt 164 [m15];
  D48():
    deopt 172 [r76];
  D64():
    deopt 225 [r98];
  D65():
    deopt 230 [count10];
  D67():
    deopt 235 [r103];
  L39(r80):
    r82 = `>`(r80, 1);
    c46 = `as.logical`(r82);
    if c46 then L183() else L40();
  L49():
    goto L65();
  L65():
    simplify9 = ld simplify;
    check L279() else D99();
  L171():
    m16 = force? m15;
    checkMissing(m16);
    count = ld count;
    check L172() else D46();
  L177():
    r77 = force? r76;
    checkMissing(r77);
    dim = ldf dim in base;
    r78 = dyn dim(r77);
    check L178() else D49();
  L179():
    d = ld d;
    check L181() else D50();
  L180():
    r79 = dyn base17(<sym d>);
    goto L39(r79);
  L207():
    st out = r98;
    goto L46();
  L211():
    count11 = force? count10;
    checkMissing(count11);
    vector = ldf vector in base;
    r102 = dyn vector("list", count11);
    check L212() else D66();
  L213():
    r104 = force? r103;
    checkMissing(r104);
    l = ld out;
    c52 = `is.object`(l);
    if c52 then L214() else L215(r104, l);
  L218():
    st i = 2;
    n2 = ld n;
    check L219() else D69();
  D46():
    deopt 166 [count];
  D49():
    deopt 175 [r78];
  D50():
    deopt 179 [d];
  D66():
    deopt 233 [r102];
  D69():
    deopt 249 [n2];
  D99():
    deopt 353 [simplify9];
  L40():
    len_r = ld `len.r`;
    check L190() else D55();
  L48(r108, dx6):
    st out = dx6;
    goto L46();
  L172():
    count1 = force? count;
    checkMissing(count1);
    c45 = ldf c in base;
    r72 = dyn c45(m16, count1);
    check L173() else D47();
  L178():
    goto L38(r78);
  L181():
    d1 = force? d;
    checkMissing(d1);
    length4 = ldf length in base;
    r81 = dyn length4(d1);
    check L182() else D51();
  L183():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L184() else L185();
  L212():
    goto L47(r102);
  L214():
    dr4 = tryDispatchBuiltin.0("[[<-", l, r104);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L216() else L215(r104, dr4);
  L215(r106, l2):
    ____ = ldf `[[<-` in base;
    r109 = dyn ____(l2, r104, 1);
    goto L48(r106, r109);
  L219():
    n3 = force? n2;
    checkMissing(n3);
    m19 = ld m;
    check L220() else D70();
  L279():
    simplify10 = force? simplify9;
    checkMissing(simplify10);
    c66 = `as.logical`(simplify10);
    if c66 then L280() else L66();
  D47():
    deopt 169 [r72];
  D51():
    deopt 182 [r81];
  D55():
    deopt 193 [len_r];
  D70():
    deopt 250 [n3, m19];
  L41(r84):
    goto L37(r84);
  L66():
    goto L70();
  L70():
    out = ld out;
    check L299() else D113();
  L173():
    goto L36(r72);
  L182():
    goto L39(r81);
  L184():
    d2 = ld d;
    check L186() else D52();
  L185():
    r83 = dyn base18(<sym d>, <sym count>);
    goto L41(r83);
  L190():
    len_r1 = force? len_r;
    checkMissing(len_r1);
    r86 = `!=`(len_r1, 1);
    c48 = `as.logical`(r86);
    if c48 then L191() else L42();
  L216():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L48(r104, dx5);
  L220():
    m20 = force? m19;
    checkMissing(m20);
    r111 = `-`(n3, m20);
    r112 = `+`(r111, 1);
    st nmmp1 = r112;
    goto L64();
  L280():
    is_factor1 = ldf `is.factor`;
    check L281() else D100();
  D52():
    deopt 187 [d2];
  D100():
    deopt 356 [];
  D113():
    deopt 390 [out];
  L42():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L198() else L199();
  L64():
    a4 = ld a;
    check L221() else D71();
  L186():
    d3 = force? d2;
    checkMissing(d3);
    count2 = ld count;
    check L187() else D53();
  L191():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L192() else L193();
  L281():
    p8 = prom<V +>{
      x37 = ld x0;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    r153 = dyn is_factor1(p8);
    check L282() else D101();
  L299():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D53():
    deopt 189 [count2];
  D71():
    deopt 256 [a4];
  D101():
    deopt 358 [r153];
  L43(r88):
    goto L37(r88);
  L187():
    count3 = force? count2;
    checkMissing(count3);
    c47 = ldf c in base;
    r85 = dyn c47(d3, count3);
    check L188() else D54();
  L192():
    len_r2 = ld `len.r`;
    check L194() else D56();
  L193():
    r87 = dyn base19(<sym len.r>, <sym count>);
    goto L43(r87);
  L198():
    d4 = ld d;
    check L200() else D59();
  L199():
    r90 = dyn base20(<sym d>, <sym count>);
    goto L37(r90);
  L221():
    a5 = force? a4;
    checkMissing(a5);
    c54 = `is.object`(a5);
    if c54 then L222() else L223(a5);
  L282():
    c67 = `as.logical`(r153);
    if c67 then L283() else L67();
  D54():
    deopt 192 [r85];
  D56():
    deopt 199 [len_r2];
  D59():
    deopt 207 [d4];
  L50(dx8):
    nmmp1 = ld nmmp1;
    check L225() else D72();
  L67():
    goto L69();
  L69():
    dim_use = ld `dim.use`;
    check L295() else D110();
  L188():
    goto L41(r85);
  L194():
    len_r3 = force? len_r2;
    checkMissing(len_r3);
    count4 = ld count;
    check L195() else D57();
  L200():
    d5 = force? d4;
    checkMissing(d5);
    count6 = ld count;
    check L201() else D60();
  L222():
    dr6 = tryDispatchBuiltin.1("[", a5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L224() else L223(dr6);
  L223(a7):
    __2 = ldf `[` in base;
    r113 = dyn __2(a7, 1);
    goto L50(r113);
  L283():
    levels = ldf levels;
    check L284() else D102();
  D57():
    deopt 201 [count4];
  D60():
    deopt 209 [count6];
  D72():
    deopt 260 [dx8, nmmp1];
  D102():
    deopt 360 [];
  D110():
    deopt 381 [dim_use];
  L195():
    count5 = force? count4;
    checkMissing(count5);
    c49 = ldf c in base;
    r89 = dyn c49(len_r3, count5);
    check L196() else D58();
  L201():
    count7 = force? count6;
    checkMissing(count7);
    c50 = ldf c in base;
    r91 = dyn c50(d5, count7);
    check L202() else D61();
  L224():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L50(dx7);
  L225():
    nmmp2 = force? nmmp1;
    checkMissing(nmmp2);
    r114 = `!=`(dx8, nmmp2);
    c55 = `as.logical`(r114);
    if c55 then L226() else L51();
  L284():
    p9 = prom<V +>{
      x39 = ld x0;
      x40 = force? x39;
      checkMissing(x40);
      return x40;
    };
    r155 = dyn levels(p9);
    check L285() else D103();
  L295():
    dim_use1 = force? dim_use;
    checkMissing(dim_use1);
    l14 = ld out;
    dim__ = ldf `dim<-`;
    check L296() else D111();
  D58():
    deopt 204 [r89];
  D61():
    deopt 212 [r91];
  D103():
    deopt 362 [r155];
  D111():
    deopt 384 [dim_use1, l14, dim_use1];
  L51():
    goto L65();
  L196():
    goto L43(r89);
  L202():
    goto L37(r91);
  L226():
    e = ld e;
    check L227() else D73();
  L285():
    l12 = ld out;
    levels__ = ldf `levels<-`;
    check L286() else D104();
  L296():
    r162 = dyn dim__(l14, NULL, dim_use1);
    check L297() else D112();
  D73():
    deopt 263 [e];
  D104():
    deopt 364 [r155, l12, r155];
  D112():
    deopt 386 [dim_use1, r162];
  L227():
    e1 = force? e;
    checkMissing(e1);
    n4 = ld n;
    check L228() else D74();
  L286():
    r156 = dyn levels__(l12, NULL, r155);
    check L287() else D105();
  L297():
    st out = r162;
    goto L70();
  D74():
    deopt 264 [e1, n4];
  D105():
    deopt 366 [r155, r156];
  L228():
    n5 = force? n4;
    checkMissing(n5);
    h = ld h;
    check L229() else D75();
  L287():
    st out = r156;
    sym22 = ldf class;
    base22 = ldf class in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L288() else L289();
  D75():
    deopt 265 [e1, n5, h];
  L68(r158):
    l13 = ld out;
    class__ = ldf `class<-`;
    check L292() else D108();
  L229():
    h1 = force? h;
    checkMissing(h1);
    r115 = `-`(n5, h1);
    r116 = `<`(e1, r115);
    c56 = `as.logical`(r116);
    if c56 then L230() else L52();
  L288():
    x41 = ld x0;
    check L290() else D106();
  L289():
    r157 = dyn base22(<sym x0>);
    goto L68(r157);
  D106():
    deopt 370 [x41];
  D108():
    deopt 375 [r158, l13, r158];
  L52():
    a12 = ld a;
    check L237() else D78();
  L54():
    e2 = ld e;
    check L245() else D83();
  L230():
    st h = 1;
    a8 = ld a;
    check L231() else D76();
  L290():
    x42 = force? x41;
    checkMissing(x42);
    class = ldf class in base;
    r159 = dyn class(x42);
    check L291() else D107();
  L292():
    r160 = dyn class__(l13, NULL, r158);
    check L293() else D109();
  D76():
    deopt 272 [a8];
  D78():
    deopt 281 [a12];
  D83():
    deopt 299 [e2];
  D107():
    deopt 373 [r159];
  D109():
    deopt 377 [r158, r160];
  L231():
    a9 = force? a8;
    checkMissing(a9);
    c57 = `is.object`(a9);
    if c57 then L232() else L233(a9);
  L237():
    a13 = force? a12;
    checkMissing(a13);
    c58 = `is.object`(a13);
    if c58 then L238() else L239(a13);
  L245():
    e3 = force? e2;
    checkMissing(e3);
    j = ld j;
    check L246() else D84();
  L291():
    goto L68(r159);
  L293():
    st out = r160;
    goto L69();
  D84():
    deopt 300 [e3, j];
  L53(dx10):
    st e = dx10;
    st j = 1;
    goto L54();
  L55(dx12):
    st e = dx12;
    h4 = ld h;
    check L243() else D81();
  L232():
    dr8 = tryDispatchBuiltin.1("[", a9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L234() else L233(dr8);
  L233(a11):
    m21 = ld m;
    check L235() else D77();
  L238():
    dr10 = tryDispatchBuiltin.1("[", a13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L240() else L239(dr10);
  L239(a15):
    m23 = ld m;
    check L241() else D79();
  L246():
    j1 = force? j;
    checkMissing(j1);
    r123 = `+`(e3, j1);
    l3 = ld a;
    c59 = `is.object`(l3);
    if c59 then L247() else L248(r123, l3);
  D77():
    deopt 274 [a11, m21];
  D79():
    deopt 283 [a15, m23];
  D81():
    deopt 289 [h4];
  L56(dx14):
    st a = dx14;
    nofun6 = ld nofun;
    check L253() else D88();
  L234():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L53(dx9);
  L235():
    m22 = force? m21;
    __3 = ldf `[` in base;
    r117 = dyn __3(a11, m22);
    goto L53(r117);
  L240():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L55(dx11);
  L241():
    m24 = force? m23;
    checkMissing(m24);
    h2 = ld h;
    check L242() else D80();
  L243():
    h5 = force? h4;
    checkMissing(h5);
    r121 = `+`(h5, 1);
    st h = r121;
    h6 = ld h;
    check L244() else D82();
  L247():
    dr12 = tryDispatchBuiltin.0("[<-", l3, r123);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L249() else L248(r123, dr12);
  L248(r125, l5):
    m25 = ld m;
    check L250() else D85();
  D80():
    deopt 284 [a15, m24, h2];
  D82():
    deopt 295 [1, h6];
  D85():
    deopt 304 [r125, l5, r123, m25];
  D88():
    deopt 312 [nofun6];
  L242():
    h3 = force? h2;
    checkMissing(h3);
    r119 = `-`(m24, h3);
    __4 = ldf `[` in base;
    r120 = dyn __4(a15, r119);
    goto L55(r120);
  L244():
    h7 = force? h6;
    checkMissing(h7);
    r122 = `:`(1, h7);
    st j = r122;
    goto L54();
  L249():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L56(dx13);
  L250():
    m26 = force? m25;
    checkMissing(m26);
    h8 = ld h;
    check L251() else D86();
  L253():
    nofun7 = force? nofun6;
    checkMissing(nofun7);
    c60 = `as.logical`(nofun7);
    if c60 then L254() else L57();
  D86():
    deopt 305 [r125, l5, r123, m26, h8];
  L57():
    FUN6 = ldf FUN;
    check L261() else D91();
  L59(dx17):
    st r = dx17;
    simplify7 = ld simplify;
    check L263() else D93();
  L251():
    h9 = force? h8;
    checkMissing(h9);
    r128 = `-`(m26, h9);
    j2 = ld j;
    check L252() else D87();
  L254():
    x29 = ld x;
    check L255() else D89();
  D87():
    deopt 307 [r125, l5, r123, r128, j2];
  D89():
    deopt 314 [x29];
  D91():
    deopt 320 [];
  D93():
    deopt 325 [simplify7];
  L252():
    j3 = force? j2;
    checkMissing(j3);
    r129 = `+`(r128, j3);
    ___ = ldf `[<-` in base;
    r130 = dyn ___(l5, r123, r129);
    goto L56(r130);
  L255():
    x30 = force? x29;
    checkMissing(x30);
    c61 = `is.object`(x30);
    if c61 then L256() else L257(x30);
  L261():
    p7 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c62 = `is.object`(x34);
      if c62 then L1() else L2(x34);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("[", x34);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x36):
      a18 = ld a;
      a19 = force? a18;
      __6 = ldf `[` in base;
      r132 = dyn __6(x36, a19);
      goto L0(r132);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    ddd2 = ld `...`;
    r134 = dyn FUN6[, `...`](p7, ddd2);
    check L262() else D92();
  L263():
    simplify8 = force? simplify7;
    checkMissing(simplify8);
    c63 = `as.logical`(simplify8);
    if c63 then L264() else L60();
  D92():
    deopt 323 [r134];
  L58(dx16):
    goto L59(dx16);
  L60():
    r143 = ld r;
    check L271() else D96();
  L62():
    i4 = ld i;
    check L276() else D98();
  L256():
    dr14 = tryDispatchBuiltin.1("[", x30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L258() else L257(dr14);
  L257(x32):
    a16 = ld a;
    check L259() else D90();
  L262():
    goto L59(r134);
  L264():
    r135 = ld r;
    check L265() else D94();
  D90():
    deopt 316 [x32, a16];
  D94():
    deopt 327 [r135];
  D96():
    deopt 336 [r143];
  D98():
    deopt 343 [i4];
  L258():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L58(dx15);
  L259():
    a17 = force? a16;
    __5 = ldf `[` in base;
    r131 = dyn __5(x32, a17);
    goto L58(r131);
  L265():
    r136 = force? r135;
    checkMissing(r136);
    l6 = ld out;
    c64 = `is.object`(l6);
    if c64 then L266() else L267(r136, l6);
  L271():
    r144 = force? r143;
    checkMissing(r144);
    l9 = ld out;
    c65 = `is.object`(l9);
    if c65 then L272() else L273(r144, l9);
  L276():
    i5 = force? i4;
    checkMissing(i5);
    r150 = `+`(i5, 1);
    st i = r150;
    goto L64();
  L61(r140, dx21):
    st out = dx21;
    goto L62();
  L63(r148, dx23):
    st out = dx23;
    goto L62();
  L266():
    dr18 = tryDispatchBuiltin.0("[<-", l6, r136);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L268() else L267(r136, dr18);
  L267(r138, l8):
    i = ld i;
    check L269() else D95();
  L272():
    dr20 = tryDispatchBuiltin.0("[[<-", l9, r144);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L274() else L273(r144, dr20);
  L273(r146, l11):
    i2 = ld i;
    check L275() else D97();
  D95():
    deopt 331 [r138, l8, r136, i];
  D97():
    deopt 339 [r146, l11, r144, i2];
  L268():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L61(r136, dx20);
  L269():
    i1 = force? i;
    ___1 = ldf `[<-` in base;
    r141 = dyn ___1(l6, <missing>, i1, r136);
    goto L61(r138, r141);
  L274():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L63(r144, dx22);
  L275():
    i3 = force? i2;
    ____1 = ldf `[[<-` in base;
    r149 = dyn ____1(l11, r144, i3);
    goto L63(r146, r149);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    matrix = ldf matrix;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn matrix(p, 2.0, 3.0);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}