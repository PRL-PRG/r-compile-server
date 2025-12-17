fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg diag:cls, reg r3:V, reg dim:cls, reg r4:V, reg diag1:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg diag2:cls, reg p:p(V +), reg r9:V, reg matrix:cls, reg r10:V, reg l:*, reg diag__:cls, reg r11:V, reg m:*, reg m1:V, reg r12:V, reg all:cls, reg r13:V, reg diag3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg diag4:cls, reg r19:V, reg diag5:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg as_raw:cls, reg r22:V, reg p2:p(V +), reg r24:V, reg diag6:cls, reg p3:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg D2:*, reg D3:V, reg typeof:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg require:cls, reg stats:*, reg stats1:V, reg p4:p(V +), reg r33:V, reg diag7:cls, reg var:cls, reg cbind:cls, reg p5:p(V +), reg rnorm:cls, reg r35:V, reg p6:p(V +), reg r37:V, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg colnames:cls, reg M:*, reg M1:V, reg p9:p(V +), reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg rep:cls, reg r48:V, reg c1:cls, reg r49:V, reg l1:*, reg rownames__:cls, reg r50:V, reg M2:*, reg M3:V, reg diag8:cls, reg M4:*, reg M5:V, reg p10:p(V +), reg r52:V, reg diag9:cls, reg M6:*, reg M7:V, reg p11:p(V +), reg r54:V, reg stopifnot:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg diag10:cls, reg M8:*, reg M9:V, reg p12:p(V +), reg r60:V, reg names:cls, reg r61:V, reg colnames1:cls, reg M10:*, reg M11:V, reg p13:p(V +), reg r63:V, reg identical:cls, reg r64:V, reg p14:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg r69:V, reg diag11:cls, reg M12:*, reg M13:V, reg p15:p(V +), reg r71:V, reg names1:cls, reg r72:V, reg c2:V, reg p16:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r74:V, reg r75:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:V, reg diag12:cls, reg var1:cls, reg M14:*, reg M15:V, reg p17:p(V +), reg r79:V, reg p18:p(V +), reg r81:V, reg names2:cls, reg r82:V, reg c3:V, reg p19:p(V +), reg r84:V |
    mkenv;
    r = clos inner1079849831;
    st diag = r;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    diag1 = ldf diag;
    check L11() else D3();
  L6():
    diag = ldf diag;
    check L8() else D0();
  L7():
    r1 = dyn base(<lang diag(3.0)>);
    goto L0();
  D0():
    deopt 6 [];
  D3():
    deopt 12 [];
  L8():
    r3 = dyn diag(3.0);
    check L9() else D1();
  L11():
    r5 = dyn diag1(10.0, 3.0, 4.0);
    check L12() else D4();
  D1():
    deopt 8 [r3];
  D4():
    deopt 16 [r5];
  L9():
    dim = ldf dim in base;
    r4 = dyn dim(r3);
    check L10() else D2();
  L12():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D2():
    deopt 10 [r4];
  L1():
    diag3 = ldf diag;
    check L23() else D13();
  L10():
    goto L0();
  L13():
    diag2 = ldf diag;
    check L15() else D5();
  L14():
    r6 = dyn base1(<lang `==`(diag(`:`(1.0, 3.0)), {
        `<-`(m, matrix(0.0, 3.0, 3.0));
        `<-`(diag(m), `:`(1.0, 3.0));
        m
      })>);
    goto L1();
  D5():
    deopt 20 [];
  D13():
    deopt 44 [];
  L15():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    r9 = dyn diag2(p);
    check L16() else D6();
  L23():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c = ldf c in base;
      r16 = dyn c(1.0i, 2.0i);
      goto L0(r16);
    L2():
      r14 = dyn base2(1.0i, 2.0i);
      goto L0(r14);
    };
    r18 = dyn diag3(p1);
    check L24() else D14();
  D6():
    deopt 22 [r9];
  D14():
    deopt 46 [r18];
  L16():
    matrix = ldf matrix;
    check L17() else D7();
  L24():
    diag4 = ldf diag;
    check L25() else D15();
  D7():
    deopt 23 [r9];
  D15():
    deopt 48 [];
  L17():
    r10 = dyn matrix(0.0, 3.0, 3.0);
    check L18() else D8();
  L25():
    r19 = dyn diag4(TRUE, 3.0);
    check L26() else D16();
  D8():
    deopt 27 [r9, r10];
  D16():
    deopt 51 [r19];
  L18():
    st m = r10;
    l = ld m;
    diag__ = ldf `diag<-`;
    check L19() else D9();
  L26():
    diag5 = ldf diag;
    check L27() else D17();
  D9():
    deopt 33 [r9, <int 1, 2, 3>, l, <int 1, 2, 3>];
  D17():
    deopt 53 [];
  L19():
    r11 = dyn diag__(l, NULL, <int 1, 2, 3>);
    check L20() else D10();
  L27():
    p2 = prom<V +>{
      sym3 = ldf `as.raw`;
      base3 = ldf `as.raw` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      as_raw = ldf `as.raw` in base;
      r22 = dyn as_raw(<int 1, 2, 3>);
      goto L0(r22);
    L2():
      r20 = dyn base3(<lang `:`(1.0, 3.0)>);
      goto L0(r20);
    };
    r24 = dyn diag5(p2);
    check L28() else D18();
  D10():
    deopt 35 [r9, <int 1, 2, 3>, r11];
  D18():
    deopt 55 [r24];
  L20():
    st m = r11;
    m = ld m;
    check L21() else D11();
  L28():
    diag6 = ldf diag;
    check L29() else D19();
  D11():
    deopt 38 [r9, m];
  D19():
    deopt 57 [];
  L21():
    m1 = force? m;
    checkMissing(m1);
    r12 = `==`(r9, m1);
    all = ldf all in base;
    r13 = dyn all(r12);
    check L22() else D12();
  L29():
    p3 = prom<V +>{
      return <int 2, 1>;
    };
    r26 = dyn diag6(p3, 4.0);
    check L30() else D20();
  D12():
    deopt 42 [r13];
  D20():
    deopt 60 [r26];
  L22():
    goto L1();
  L30():
    st D2 = r26;
    sym4 = ldf typeof;
    base4 = ldf typeof in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L2():
    sym5 = ldf require;
    base5 = ldf require in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L31():
    D2 = ld D2;
    check L33() else D21();
  L32():
    r27 = dyn base4(<sym D2>);
    goto L2();
  D21():
    deopt 64 [D2];
  L3():
    diag7 = ldf diag;
    check L39() else D25();
  L33():
    D3 = force? D2;
    checkMissing(D3);
    typeof = ldf typeof in base;
    r29 = dyn typeof(D3);
    check L34() else D22();
  L35():
    require = ldf require;
    check L37() else D23();
  L36():
    r30 = dyn base5(<sym stats>);
    goto L3();
  D22():
    deopt 67 [r29];
  D23():
    deopt 70 [];
  D25():
    deopt 74 [];
  L34():
    goto L2();
  L37():
    p4 = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r33 = dyn require(p4);
    check L38() else D24();
  L39():
    p8 = prom<V +>{
      var = ldf var;
      p7 = prom<V +>{
        cbind = ldf cbind;
        p5 = prom<V +>{
          return <int 1, 2, 3, 4, 5>;
        };
        p6 = prom<V +>{
          rnorm = ldf rnorm;
          r35 = dyn rnorm(5.0);
          return r35;
        };
        r37 = dyn cbind[X, Y](p5, p6);
        st M = r37;
        invisible.0();
        return r37;
      };
      r39 = dyn var(p7);
      return r39;
    };
    r41 = dyn diag7(p8);
    check L40() else D26();
  D24():
    deopt 72 [r33];
  D26():
    deopt 76 [r41];
  L38():
    goto L3();
  L40():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L41() else L42();
  L4(r43):
    l1 = ld M;
    rownames__ = ldf `rownames<-`;
    check L48() else D30();
  L41():
    colnames = ldf colnames;
    check L43() else D27();
  L42():
    r42 = dyn base6(<lang colnames(M)>, <lang rep("", 3.0)>);
    goto L4(r42);
  D27():
    deopt 80 [];
  D30():
    deopt 89 [r43, l1, r43];
  L43():
    p9 = prom<V +>{
      M = ld M;
      M1 = force? M;
      checkMissing(M1);
      return M1;
    };
    r45 = dyn colnames(p9);
    check L44() else D28();
  L48():
    r50 = dyn rownames__(l1, NULL, r43);
    check L49() else D31();
  D28():
    deopt 82 [r45];
  D31():
    deopt 91 [r43, r50];
  L44():
    sym7 = ldf rep;
    base7 = ldf rep in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L45() else L46();
  L49():
    st M = r50;
    M2 = ld M;
    check L50() else D32();
  D32():
    deopt 93 [M2];
  L5(r47):
    c1 = ldf c in base;
    r49 = dyn c1(r45, r47);
    check L47() else D29();
  L45():
    rep = ldf rep in base;
    r48 = dyn rep("", 3.0);
    goto L5(r48);
  L46():
    r46 = dyn base7("", 3.0);
    goto L5(r46);
  L50():
    M3 = force? M2;
    checkMissing(M3);
    diag8 = ldf diag;
    check L51() else D33();
  D29():
    deopt 87 [r49];
  D33():
    deopt 96 [];
  L47():
    goto L4(r49);
  L51():
    p10 = prom<V +>{
      M4 = ld M;
      M5 = force? M4;
      checkMissing(M5);
      return M5;
    };
    r52 = dyn diag8(p10);
    check L52() else D34();
  D34():
    deopt 98 [r52];
  L52():
    diag9 = ldf diag;
    check L53() else D35();
  D35():
    deopt 100 [];
  L53():
    p11 = prom<V +>{
      M6 = ld M;
      M7 = force? M6;
      checkMissing(M7);
      return M7;
    };
    r54 = dyn diag9[, names](p11, FALSE);
    check L54() else D36();
  D36():
    deopt 104 [r54];
  L54():
    stopifnot = ldf stopifnot;
    check L55() else D37();
  D37():
    deopt 106 [];
  L55():
    p14 = prom<V +>{
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r56):
      return r56;
    L2():
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r55 = dyn base8(<lang names(diag(M))>, <lang colnames(M)>);
      goto L0(r55);
    L1(r58):
      colnames1 = ldf colnames;
      p13 = prom<V +>{
        M10 = ld M;
        M11 = force? M10;
        checkMissing(M11);
        return M11;
      };
      r63 = dyn colnames1(p13);
      identical = ldf identical in base;
      r64 = dyn identical(r58, r63, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r64);
    L4():
      diag10 = ldf diag;
      p12 = prom<V +>{
        M8 = ld M;
        M9 = force? M8;
        checkMissing(M9);
        return M9;
      };
      r60 = dyn diag10(p12);
      names = ldf names in base;
      r61 = dyn names(r60);
      goto L1(r61);
    L5():
      r57 = dyn base9(<lang diag(M)>);
      goto L1(r57);
    };
    p16 = prom<V +>{
      sym10 = ldf `is.null`;
      base10 = ldf `is.null` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r67):
      return r67;
    L2():
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r66 = dyn base10(<lang names(diag(M, names=FALSE))>);
      goto L0(r66);
    L1(r69):
      c2 = `==`(r69, NULL);
      goto L0(c2);
    L4():
      diag11 = ldf diag;
      p15 = prom<V +>{
        M12 = ld M;
        M13 = force? M12;
        checkMissing(M13);
        return M13;
      };
      r71 = dyn diag11[, names](p15, FALSE);
      names1 = ldf names in base;
      r72 = dyn names1(r71);
      goto L1(r72);
    L5():
      r68 = dyn base11(<lang diag(M, names=FALSE)>);
      goto L1(r68);
    };
    p19 = prom<V +>{
      sym12 = ldf `is.null`;
      base12 = ldf `is.null` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r75):
      return r75;
    L2():
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L4() else L5();
    L3():
      r74 = dyn base12(<lang names(diag(var(M), names=FALSE))>);
      goto L0(r74);
    L1(r77):
      c3 = `==`(r77, NULL);
      goto L0(c3);
    L4():
      diag12 = ldf diag;
      p18 = prom<V +>{
        var1 = ldf var;
        p17 = prom<V +>{
          M14 = ld M;
          M15 = force? M14;
          checkMissing(M15);
          return M15;
        };
        r79 = dyn var1(p17);
        return r79;
      };
      r81 = dyn diag12[, names](p18, FALSE);
      names2 = ldf names in base;
      r82 = dyn names2(r81);
      goto L1(r82);
    L5():
      r76 = dyn base13(<lang diag(var(M), names=FALSE)>);
      goto L1(r76);
    };
    r84 = dyn stopifnot(p14, p16, p19);
    check L56() else D38();
  D38():
    deopt 110 [r84];
  L56():
    popenv;
    return r84;
  }
}
fun inner1079849831(x, nrow, ncol, names) {
  (reg x:*, reg nrow:*, reg ncol:*, reg names:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var nrow:*, var ncol:*, var names:*, reg names_isMissing:L, reg names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg nargs:cls, reg r5:V, reg r6:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c6:L, reg r8:V, reg nargs1:cls, reg r9:V, reg r10:V, reg c7:L, reg c8:L, reg c9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c16:L, reg c17:L, reg r12:V, reg _in_:cls, reg names1:cls, reg match_call:cls, reg r13:V, reg p:p(V +), reg r15:V, reg p1:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg c18:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg any:cls, reg r22:V, reg c19:L, reg c20:V, reg c23:L, reg c24:V, reg c26:L, reg stop:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg x3:*, reg x4:V, reg dim:cls, reg r29:V, reg min:cls, reg r30:V, reg r31:V, reg c27:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg x5:*, reg x6:V, reg typeof:cls, reg r36:V, reg vector:cls, reg r37:V, reg x7:*, reg x8:V, reg c28:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg m:*, reg m1:V, reg r40:V, reg r41:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg x13:V, reg r47:R, reg r48:V, reg r49:V, reg x14:*, reg x15:V, reg dim1:cls, reg r50:V, reg c29:L, reg x17:V, reg r54:R, reg r55:V, reg r56:V, reg dr2:V, reg dc1:L, reg dx2:V, reg x19:V, reg r59:R, reg r60:V, reg dx3:V, reg __:cls, reg r61:V, reg r62:V, reg r63:V, reg r64:V, reg __1:cls, reg r65:V, reg names2:*, reg names3:V, reg c30:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg x20:*, reg x21:V, reg dimnames:cls, reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg nms:*, reg nms1:V, reg is_list:cls, reg r71:V, reg c31:L, reg c33:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r72:V, reg c36:L, reg r73:V, reg vapply:cls, reg nms2:*, reg nms3:V, reg p3:p(V +), reg is_null:*, reg is_null1:V, reg p4:p(V +), reg r76:V, reg any1:cls, reg r77:V, reg r78:V, reg c37:L, reg c38:V, reg c40:L, reg c42:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg c45:L, reg r80:V, reg nms4:*, reg nms5:V, reg c46:L, reg c48:L, reg nms7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c50:L, reg dx5:V, reg __2:cls, reg r81:V, reg c51:L, reg c53:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg c55:L, reg dx9:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg c58:L, reg dx12:V, reg r83:V, reg m2:*, reg m3:V, reg r84:I, reg __3:cls, reg r85:V, reg nms8:*, reg nms9:V, reg c59:L, reg c61:L, reg nms11:V, reg dr8:V, reg dc4:L, reg dx13:V, reg c63:L, reg dx14:V, reg __4:cls, reg r86:V, reg c64:L, reg c66:L, reg dx16:V, reg dr10:V, reg dc5:L, reg dx17:V, reg c68:L, reg dx18:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r87:V, reg c71:L, reg dx21:V, reg r88:V, reg m4:*, reg m5:V, reg r89:I, reg __5:cls, reg r90:V, reg identical:cls, reg r91:V, reg c72:L, reg c73:V, reg c75:L, reg nm:*, reg nm1:V, reg l:*, reg names__:cls, reg r92:V, reg nm2:V, reg y:*, reg y1:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r95:V, reg r96:V, reg x22:*, reg x23:V, reg is_array:cls, reg r97:V, reg c76:L, reg c78:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r98:V, reg c81:L, reg r99:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r100:V, reg c84:L, reg r101:V, reg x24:*, reg x25:V, reg dim2:cls, reg r102:V, reg length:cls, reg r103:V, reg r104:V, reg c85:L, reg c86:V, reg c88:L, reg stop1:cls, reg r105:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r107:V, reg r108:V, reg missing:cls, reg r109:V, reg c89:L, reg nrow1:*, reg nrow2:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r110:V, reg r111:V, reg x26:*, reg x27:V, reg length1:cls, reg r112:V, reg r113:V, reg c90:L, reg c92:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r114:V, reg c95:L, reg r115:V, reg nargs2:cls, reg r116:V, reg r117:V, reg c96:L, reg c97:V, reg c99:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r118:V, reg r119:V, reg x28:*, reg x29:V, reg as_integer:cls, reg r120:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r121:V, reg r122:V, reg x30:*, reg x31:V, reg length2:cls, reg r123:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r124:V, reg r125:V, reg missing1:cls, reg r126:V, reg r127:V, reg c100:L, reg nrow4:*, reg nrow5:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r128:V, reg r129:V, reg missing2:cls, reg r130:V, reg c101:L, reg n:*, reg n1:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r131:V, reg r132:V, reg x32:*, reg x33:V, reg n3:*, reg n4:V, reg ncol1:*, reg ncol2:V, reg diag:cls, reg r133:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(1.0) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    st nrow = nrow;
    st ncol = ncol;
    names_isMissing = missing.0(names);
    if names_isMissing then L1(TRUE) else L1(names);
  L1(names_orDefault):
    st names = names_orDefault;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L59() else L60();
  L2(r1):
    c = `as.logical`(r1);
    if c then L63() else L3();
  L59():
    x1 = ld x;
    check L61() else D0();
  L60():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    sym16 = ldf `is.array`;
    base16 = ldf `is.array` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L163() else L164();
  L61():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L62() else D1();
  L63():
    sym1 = ldf nargs;
    base1 = ldf nargs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L64() else L65();
  D1():
    deopt 5 [r2];
  L4(r4):
    r6 = `>`(r4, 1);
    c1 = `as.logical`(r6);
    if c1 then L67() else L5(c1);
  L37(r96):
    c76 = `as.logical`(r96);
    if c76 then L167() else L38(c76);
  L62():
    goto L2(r2);
  L64():
    nargs = ldf nargs in base;
    r5 = dyn nargs();
    check L66() else D2();
  L65():
    r3 = dyn base1();
    goto L4(r3);
  L163():
    x22 = ld x;
    check L165() else D36();
  L164():
    r95 = dyn base16(<sym x>);
    goto L37(r95);
  D2():
    deopt 9 [r5];
  D36():
    deopt 163 [x22];
  L5(c3):
    c26 = `as.logical`(c3);
    if c26 then L79() else L9();
  L38(c78):
    c88 = `as.logical`(c78);
    if c88 then L176() else L41();
  L66():
    goto L4(r5);
  L67():
    sym2 = ldf nargs;
    base2 = ldf nargs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L165():
    x23 = force? x22;
    checkMissing(x23);
    is_array = ldf `is.array` in base;
    r97 = dyn is_array(x23);
    check L166() else D37();
  L167():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L168() else L169();
  D37():
    deopt 166 [r97];
  L6(c6, r8):
    r10 = `>`(r8, 2);
    c7 = `as.logical`(r10);
    if c7 then L7(c6, c7) else L71();
  L9():
    goto L10();
  L10():
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L39(c81, r99):
    r104 = `!=`(r99, 1);
    c85 = `as.logical`(r104);
    c86 = `&&`(c81, c85);
    goto L38(c86);
  L41():
    goto L42();
  L42():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L180() else L181();
  L68():
    nargs1 = ldf nargs in base;
    r9 = dyn nargs1();
    check L70() else D3();
  L69():
    r7 = dyn base2();
    goto L6(c1, r7);
  L79():
    stop = ldf stop;
    check L80() else D7();
  L166():
    goto L37(r97);
  L168():
    sym18 = ldf dim;
    base18 = ldf dim in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L170() else L171();
  L169():
    r98 = dyn base17(<lang dim(x)>);
    goto L39(c76, r98);
  L176():
    stop1 = ldf stop;
    check L177() else D41();
  D3():
    deopt 15 [c1, r9];
  D7():
    deopt 30 [];
  D41():
    deopt 181 [];
  L7(c8, c9):
    c23 = `as.logical`(c9);
    c24 = `&&`(c8, c23);
    goto L5(c24);
  L11(r26):
    st m = r26;
    r31 = `==`(r26, 0);
    c27 = `as.logical`(r31);
    if c27 then L90() else L13();
  L40(c84, r101):
    length = ldf length in base;
    r103 = dyn length(r101);
    check L174() else D40();
  L43(r108):
    c89 = `as.logical`(r108);
    if c89 then L182() else L44();
  L70():
    goto L6(c1, r9);
  L71():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L72() else L73();
  L80():
    r23 = dyn stop("'nrow' or 'ncol' cannot be specified when 'x' is a matrix");
    check L81() else D8();
  L83():
    sym6 = ldf dim;
    base6 = ldf dim in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L84():
    r25 = dyn base5(<lang dim(x)>);
    goto L11(r25);
  L170():
    x24 = ld x;
    check L172() else D38();
  L171():
    r100 = dyn base18(<sym x>);
    goto L40(c76, r100);
  L177():
    r105 = dyn stop1("'x' is an array, but not one-dimensional.");
    check L178() else D42();
  L180():
    missing = ldf missing in base;
    r109 = dyn missing(<sym x>);
    goto L43(r109);
  L181():
    r107 = dyn base19(<sym x>);
    goto L43(r107);
  D8():
    deopt 32 [r23];
  D38():
    deopt 171 [c76, x24];
  D40():
    deopt 176 [c84, r103];
  D42():
    deopt 183 [r105];
  L8(c16, c17, r12):
    c19 = `as.logical`(r12);
    c20 = `||`(c17, c19);
    goto L7(c16, c20);
  L12(r28):
    min = ldf min in base;
    r30 = dyn min(r28);
    check L89() else D11();
  L13():
    x7 = ld x;
    check L100() else D15();
  L44():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L185() else L186();
  L45():
    sym24 = ldf missing;
    base24 = ldf missing in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L204() else L205();
  L72():
    _in_ = ldf `%in%`;
    check L74() else D4();
  L73():
    r11 = dyn base3(<lang `%in%`(names(match.call()), c("nrow", "ncol"))>);
    goto L8(c6, c7, r11);
  L81():
    goto L10();
  L85():
    x3 = ld x;
    check L87() else D9();
  L86():
    r27 = dyn base6(<sym x>);
    goto L12(r27);
  L90():
    sym7 = ldf vector;
    base7 = ldf vector in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  L172():
    x25 = force? x24;
    checkMissing(x25);
    dim2 = ldf dim in base;
    r102 = dyn dim2(x25);
    check L173() else D39();
  L174():
    goto L39(c84, r103);
  L178():
    goto L42();
  L182():
    nrow1 = ld nrow;
    check L183() else D43();
  D4():
    deopt 21 [c6, c7];
  D9():
    deopt 39 [x3];
  D11():
    deopt 44 [r30];
  D15():
    deopt 62 [x7];
  D39():
    deopt 174 [c76, r102];
  D43():
    deopt 189 [nrow1];
  L14(r33):
    popenv;
    return r33;
  L46(r111):
    r113 = `==`(r111, 1);
    c90 = `as.logical`(r113);
    if c90 then L189() else L47(c90);
  L52(r125):
    r127 = `!`(r125);
    c100 = `as.logical`(r127);
    if c100 then L206() else L53();
  L74():
    p1 = prom<V +>{
      names1 = ldf names;
      p = prom<V +>{
        match_call = ldf `match.call`;
        r13 = dyn match_call();
        return r13;
      };
      r15 = dyn names1(p);
      return r15;
    };
    p2 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c18 = ldf c in base;
      r19 = dyn c18("nrow", "ncol");
      goto L0(r19);
    L2():
      r17 = dyn base4("nrow", "ncol");
      goto L0(r17);
    };
    r21 = dyn _in_(p1, p2);
    check L75() else D5();
  L87():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r29 = dyn dim(x4);
    check L88() else D10();
  L89():
    goto L11(r30);
  L91():
    sym8 = ldf typeof;
    base8 = ldf typeof in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L92():
    r32 = dyn base7(<lang typeof(x)>, 0);
    goto L14(r32);
  L100():
    x8 = force? x7;
    checkMissing(x8);
    c28 = `is.object`(x8);
    if c28 then L101() else L102(x8);
  L173():
    goto L40(c76, r102);
  L183():
    nrow2 = force? nrow1;
    checkMissing(nrow2);
    st n = nrow2;
    goto L45();
  L185():
    x26 = ld x;
    check L187() else D44();
  L186():
    r110 = dyn base20(<sym x>);
    goto L46(r110);
  L204():
    missing1 = ldf missing in base;
    r126 = dyn missing1(<sym nrow>);
    goto L52(r126);
  L205():
    r124 = dyn base24(<sym nrow>);
    goto L52(r124);
  D5():
    deopt 24 [c6, c7, r21];
  D10():
    deopt 42 [r29];
  D44():
    deopt 194 [x26];
  L15(r35):
    vector = ldf vector in base;
    r37 = dyn vector(r35, 0);
    check L97() else D14();
  L17(dx1):
    st y = dx1;
    names2 = ld names;
    check L112() else D19();
  L47(c92):
    c99 = `as.logical`(c92);
    if c99 then L194() else L49();
  L53():
    goto L54();
  L54():
    sym25 = ldf missing;
    base25 = ldf missing in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L209() else L210();
  L75():
    any = ldf any in base;
    r22 = dyn any(r21);
    check L76() else D6();
  L88():
    goto L12(r29);
  L93():
    x5 = ld x;
    check L95() else D12();
  L94():
    r34 = dyn base8(<sym x>);
    goto L15(r34);
  L101():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L103() else L102(dr);
  L102(x10):
    m = ld m;
    check L104() else D16();
  L187():
    x27 = force? x26;
    checkMissing(x27);
    length1 = ldf length in base;
    r112 = dyn length1(x27);
    check L188() else D45();
  L189():
    sym21 = ldf nargs;
    base21 = ldf nargs in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L190() else L191();
  L206():
    nrow4 = ld nrow;
    check L207() else D51();
  D6():
    deopt 26 [c6, c7, r22];
  D12():
    deopt 52 [x5];
  D14():
    deopt 58 [r37];
  D16():
    deopt 66 [x10, 1.0, 0, m];
  D19():
    deopt 85 [names2];
  D45():
    deopt 197 [r112];
  D51():
    deopt 228 [nrow4];
  L48(c95, r115):
    r117 = `==`(r115, 1);
    c96 = `as.logical`(r117);
    c97 = `&&`(c95, c96);
    goto L47(c97);
  L49():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L200() else L201();
  L55(r129):
    c101 = `as.logical`(r129);
    if c101 then L211() else L56();
  L76():
    goto L8(c6, c7, r22);
  L95():
    x6 = force? x5;
    checkMissing(x6);
    typeof = ldf typeof in base;
    r36 = dyn typeof(x6);
    check L96() else D13();
  L97():
    goto L14(r37);
  L103():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L104():
    m1 = force? m;
    checkMissing(m1);
    r40 = `-`(m1, 1);
    r41 = `:`(0, r40);
    sym9 = ldf dim;
    base9 = ldf dim in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L105() else L106();
  L112():
    names3 = force? names2;
    checkMissing(names3);
    c30 = `as.logical`(names3);
    if c30 then L113() else L20();
  L188():
    goto L46(r112);
  L190():
    nargs2 = ldf nargs in base;
    r116 = dyn nargs2();
    check L192() else D46();
  L191():
    r114 = dyn base21();
    goto L48(c90, r114);
  L194():
    sym22 = ldf `as.integer`;
    base22 = ldf `as.integer` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L195() else L196();
  L207():
    nrow5 = force? nrow4;
    checkMissing(nrow5);
    st n = nrow5;
    goto L54();
  L209():
    missing2 = ldf missing in base;
    r130 = dyn missing2(<sym ncol>);
    goto L55(r130);
  L210():
    r128 = dyn base25(<sym ncol>);
    goto L55(r128);
  D13():
    deopt 55 [r36];
  D46():
    deopt 203 [c90, r116];
  L18(x13, r47, r48, r49):
    c29 = `is.object`(r49);
    if c29 then L109() else L110(x13, r47, r48, r49);
  L20():
    goto L35();
  L35():
    y = ld y;
    check L160() else D35();
  L50(r119):
    st n = r119;
    st x = 1.0;
    goto L45();
  L51(r122):
    st n = r122;
    goto L45();
  L56():
    goto L57();
  L57():
    sym26 = ldf `.Internal`;
    base26 = ldf `.Internal` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L214() else L215();
  L96():
    goto L15(r36);
  L105():
    x14 = ld x;
    check L107() else D17();
  L106():
    r46 = dyn base9(<sym x>);
    goto L18(x10, 1.0, r41, r46);
  L113():
    sym10 = ldf dimnames;
    base10 = ldf dimnames in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L114() else L115();
  L192():
    goto L48(c90, r116);
  L195():
    x28 = ld x;
    check L197() else D47();
  L196():
    r118 = dyn base22(<sym x>);
    goto L50(r118);
  L200():
    x30 = ld x;
    check L202() else D49();
  L201():
    r121 = dyn base23(<sym x>);
    goto L51(r121);
  L211():
    n = ld n;
    check L212() else D52();
  D17():
    deopt 72 [x10, 1.0, r41, x14];
  D35():
    deopt 156 [y];
  D47():
    deopt 209 [x28];
  D49():
    deopt 219 [x30];
  D52():
    deopt 236 [n];
  L19(x19, r59, r60, dx3):
    r62 = `+`(dx3, 1.0);
    r63 = `*`(r60, r62);
    r64 = `+`(r59, r63);
    __1 = ldf `[` in base;
    r65 = dyn __1(x19, r64);
    goto L17(r65);
  L21(r67):
    st nms = r67;
    sym11 = ldf `is.list`;
    base11 = ldf `is.list` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L118() else L119();
  L58(r132):
    popenv;
    return r132;
  L107():
    x15 = force? x14;
    checkMissing(x15);
    dim1 = ldf dim in base;
    r50 = dyn dim1(x15);
    check L108() else D18();
  L109():
    dr2 = tryDispatchBuiltin.1("[", r49);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L111() else L110(x13, r47, r48, dr2);
  L110(x17, r54, r55, r56):
    __ = ldf `[` in base;
    r61 = dyn __(r56, 1);
    goto L19(x17, r54, r55, r61);
  L114():
    x20 = ld x;
    check L116() else D20();
  L115():
    r66 = dyn base10(<sym x>);
    goto L21(r66);
  L160():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  L197():
    x29 = force? x28;
    checkMissing(x29);
    as_integer = ldf `as.integer` in base;
    r120 = dyn as_integer(x29);
    check L198() else D48();
  L202():
    x31 = force? x30;
    checkMissing(x31);
    length2 = ldf length in base;
    r123 = dyn length2(x31);
    check L203() else D50();
  L212():
    n1 = force? n;
    checkMissing(n1);
    st ncol = n1;
    goto L57();
  L214():
    x32 = ld x;
    check L216() else D53();
  L215():
    r131 = dyn base26(<lang diag(x, n, ncol)>);
    goto L58(r131);
  D18():
    deopt 75 [x10, 1.0, r41, r50];
  D20():
    deopt 89 [x20];
  D48():
    deopt 212 [r120];
  D50():
    deopt 222 [r123];
  D53():
    deopt 243 [x32];
  L22(r70):
    c31 = `as.logical`(r70);
    if c31 then L122() else L23(c31);
  L108():
    goto L18(x10, 1.0, r41, r50);
  L111():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(x13, r47, r48, dx2);
  L116():
    x21 = force? x20;
    checkMissing(x21);
    dimnames = ldf dimnames in base;
    r68 = dyn dimnames(x21);
    check L117() else D21();
  L118():
    nms = ld nms;
    check L120() else D22();
  L119():
    r69 = dyn base11(<sym nms>);
    goto L22(r69);
  L198():
    goto L50(r120);
  L203():
    goto L51(r123);
  L216():
    x33 = force? x32;
    checkMissing(x33);
    n3 = ld n;
    check L217() else D54();
  D21():
    deopt 92 [r68];
  D22():
    deopt 96 [nms];
  D54():
    deopt 245 [n3];
  L23(c33):
    c40 = `as.logical`(c33);
    if c40 then L129() else L25(c40);
  L117():
    goto L21(r68);
  L120():
    nms1 = force? nms;
    checkMissing(nms1);
    is_list = ldf `is.list` in base;
    r71 = dyn is_list(nms1);
    check L121() else D23();
  L122():
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L123() else L124();
  L217():
    n4 = force? n3;
    checkMissing(n4);
    ncol1 = ld ncol;
    check L218() else D55();
  D23():
    deopt 99 [r71];
  D55():
    deopt 247 [ncol1];
  L24(c36, r73):
    r78 = `!`(r73);
    c37 = `as.logical`(r78);
    c38 = `&&`(c36, c37);
    goto L23(c38);
  L25(c42):
    c75 = `as.logical`(c42);
    if c75 then L154() else L33();
  L121():
    goto L22(r71);
  L123():
    vapply = ldf vapply;
    check L125() else D24();
  L124():
    r72 = dyn base12(<lang vapply(nms, is.null, NA_LGL)>);
    goto L24(c31, r72);
  L129():
    sym13 = ldf identical;
    base13 = ldf identical in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L130() else L131();
  L218():
    ncol2 = force? ncol1;
    checkMissing(ncol2);
    diag = ldf diag in base;
    r133 = dyn diag(x33, n4, ncol2);
    check L219() else D56();
  D24():
    deopt 103 [c31];
  D56():
    deopt 250 [r133];
  L26(c45, r80):
    c72 = `as.logical`(r80);
    c73 = `&&`(c45, c72);
    goto L25(c73);
  L33():
    goto L34(NULL);
  L34(nm2):
    goto L35();
  L125():
    p3 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      return nms3;
    };
    p4 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r76 = dyn vapply(p3, p4, NA_LGL);
    check L126() else D25();
  L130():
    nms4 = ld nms;
    check L132() else D27();
  L131():
    r79 = dyn base13(<lang `(`(`<-`(nm, `[`(`[[`(nms, 1), seq_len(m))))>, <lang `[`(`[[`(nms, 2), seq_len(m))>);
    goto L26(c40, r79);
  L154():
    nm = ld nm;
    check L155() else D32();
  L219():
    goto L58(r133);
  D25():
    deopt 107 [c31, r76];
  D27():
    deopt 114 [c40, nms4];
  D32():
    deopt 145 [nm];
  L126():
    any1 = ldf any in base;
    r77 = dyn any1(r76);
    check L127() else D26();
  L132():
    nms5 = force? nms4;
    checkMissing(nms5);
    c46 = `is.object`(nms5);
    if c46 then L133() else L134(c40, nms5);
  L155():
    nm1 = force? nm;
    checkMissing(nm1);
    l = ld y;
    names__ = ldf `names<-`;
    check L156() else D33();
  D26():
    deopt 109 [c31, r77];
  D33():
    deopt 148 [nm1, l, nm1];
  L27(c50, dx5):
    c51 = `is.object`(dx5);
    if c51 then L136() else L137(c50, dx5);
  L127():
    goto L24(c31, r77);
  L133():
    dr4 = tryDispatchBuiltin.1("[[", nms5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L135() else L134(c40, dr4);
  L134(c48, nms7):
    __2 = ldf `[[` in base;
    r81 = dyn __2(nms7, 1);
    goto L27(c48, r81);
  L156():
    r92 = dyn names__(l, NULL, nm1);
    check L157() else D34();
  D34():
    deopt 150 [nm1, r92];
  L28(c55, dx9):
    st nm = dx9;
    nms8 = ld nms;
    check L142() else D29();
  L135():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L27(c40, dx4);
  L136():
    dr6 = tryDispatchBuiltin.1("[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L138() else L137(c50, dr6);
  L137(c53, dx7):
    sym14 = ldf seq_len;
    base14 = ldf seq_len in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L139() else L140();
  L157():
    st y = r92;
    goto L34(nm1);
  D29():
    deopt 125 [c55, nms8];
  L29(c58, dx12, r83):
    __3 = ldf `[` in base;
    r85 = dyn __3(dx12, r83);
    goto L28(c58, r85);
  L138():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L28(c50, dx8);
  L139():
    m2 = ld m;
    check L141() else D28();
  L140():
    r82 = dyn base14(<sym m>);
    goto L29(c53, dx7, r82);
  L142():
    nms9 = force? nms8;
    checkMissing(nms9);
    c59 = `is.object`(nms9);
    if c59 then L143() else L144(c55, nms9);
  D28():
    deopt 120 [c53, dx7, m2];
  L30(c63, dx14):
    c64 = `is.object`(dx14);
    if c64 then L146() else L147(c63, dx14);
  L141():
    m3 = force? m2;
    checkMissing(m3);
    r84 = seq_len(m3);
    goto L29(c53, dx7, r84);
  L143():
    dr8 = tryDispatchBuiltin.1("[[", nms9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L145() else L144(c55, dr8);
  L144(c61, nms11):
    __4 = ldf `[[` in base;
    r86 = dyn __4(nms11, 2);
    goto L30(c61, r86);
  L31(c68, dx18):
    identical = ldf identical in base;
    r91 = dyn identical(dx9, dx18, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L152() else D31();
  L145():
    dx13 = getTryDispatchBuiltinValue(dr8);
    goto L30(c55, dx13);
  L146():
    dr10 = tryDispatchBuiltin.1("[", dx14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L148() else L147(c63, dr10);
  L147(c66, dx16):
    sym15 = ldf seq_len;
    base15 = ldf seq_len in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L149() else L150();
  D31():
    deopt 143 [c68, r91];
  L32(c71, dx21, r88):
    __5 = ldf `[` in base;
    r90 = dyn __5(dx21, r88);
    goto L31(c71, r90);
  L148():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L31(c63, dx17);
  L149():
    m4 = ld m;
    check L151() else D30();
  L150():
    r87 = dyn base15(<sym m>);
    goto L32(c66, dx16, r87);
  L152():
    goto L26(c68, r91);
  D30():
    deopt 131 [c66, dx16, m4];
  L151():
    m5 = force? m4;
    checkMissing(m5);
    r89 = seq_len(m5);
    goto L32(c66, dx16, r89);
  }
}