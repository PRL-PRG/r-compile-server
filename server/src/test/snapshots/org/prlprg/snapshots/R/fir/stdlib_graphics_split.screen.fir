fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3566772296;
    st `split.screen` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3566772296(figs, screen, erase) {
  (reg figs:*, reg screen:*, reg erase:*) -+> V { var figs:*, var screen:*, var erase:*, reg erase_isMissing:L, reg erase_orDefault:*, reg _SSexists:cls, reg r:V, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg first_split:*, reg first_split1:V, reg r5:V, reg c1:L, reg _SSget:cls, reg r6:V, reg r7:V, reg first_split2:*, reg first_split3:V, reg r9:V, reg c2:L, reg _SSget1:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg missing1:cls, reg r14:V, reg c3:L, reg first_split4:*, reg first_split5:V, reg c4:L, reg _valid_screens:*, reg _valid_screens1:V, reg first_split6:*, reg first_split7:V, reg c5:L, reg c7:V, reg screen1:*, reg screen2:V, reg r18:V, reg c8:L, reg c9:V, reg c11:L, reg c12:V, reg first_split8:*, reg first_split9:V, reg r19:V, reg c14:L, reg c17:L, reg c18:V, reg _in_:cls, reg screen3:*, reg screen4:V, reg p:p(V +), reg _valid_screens2:*, reg _valid_screens3:V, reg p1:p(V +), reg r22:V, reg r23:V, reg c19:L, reg c20:V, reg c23:L, reg c24:V, reg c26:L, reg stop:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg figs1:*, reg figs2:V, reg is_matrix:cls, reg r28:V, reg r29:V, reg c27:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg figs3:*, reg figs4:V, reg is_vector:cls, reg r32:V, reg r33:V, reg c28:L, reg stop1:cls, reg r34:V, reg figs5:*, reg figs6:V, reg c29:L, reg figs8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r36:V, reg figs9:*, reg figs10:V, reg c30:L, reg figs12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg nc:*, reg nc1:V, reg r40:V, reg seq_int:cls, reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg nr:*, reg nr1:V, reg r44:V, reg seq_int1:cls, reg r45:V, reg matrix:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg x:*, reg x1:V, reg c31:L, reg x3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nc2:*, reg nc3:V, reg r50:V, reg r51:V, reg __2:cls, reg r52:V, reg nr2:*, reg nr3:V, reg rep_int:cls, reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg x4:*, reg x5:V, reg c32:L, reg x7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r56:V, reg nr4:*, reg nr5:V, reg rep_int1:cls, reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg y:*, reg y1:V, reg c33:L, reg y3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r60:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg nc4:*, reg nc5:V, reg nr6:*, reg nr7:V, reg rep_int2:cls, reg r63:V, reg rep_int3:cls, reg r64:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r65:V, reg r66:V, reg y4:*, reg y5:V, reg c34:L, reg y7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg nr8:*, reg nr9:V, reg r67:V, reg r68:V, reg __5:cls, reg r69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg r71:V, reg nc6:*, reg nc7:V, reg nr10:*, reg nr11:V, reg rep_int4:cls, reg r72:V, reg rep_int5:cls, reg r73:V, reg c35:cls, reg r74:V, reg p2:p(V +), reg r76:V, reg nrow:cls, reg figs13:*, reg figs14:V, reg p3:p(V +), reg r79:V, reg num_screens:*, reg num_screens1:V, reg r80:V, reg c36:L, reg stop2:cls, reg r81:V, reg first_split10:*, reg first_split11:V, reg c37:L, reg erase1:*, reg erase2:V, reg c38:L, reg plot_new:cls, reg r83:V, reg par:cls, reg _SSenv:*, reg _SSenv1:V, reg c39:L, reg _SSenv3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r85:V, reg p4:p(V +), reg r87:V, reg l:*, reg c40:L, reg r89:dots, reg l2:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r92:V, reg par1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r93:V, reg r94:V, reg rep_int6:cls, reg r95:V, reg p5:p(V +), reg r97:V, reg c41:L, reg r99:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r100:V, reg l3:*, reg c42:L, reg dx19:V, reg l5:*, reg dr18:V, reg dc9:L, reg dx21:V, reg dx23:V, reg r101:V, reg _SSassign:cls, reg split_saved_pars:*, reg split_saved_pars1:V, reg p6:p(V +), reg r103:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r104:V, reg r105:V, reg num_screens2:*, reg num_screens3:V, reg vector:cls, reg r106:V, reg num_screens4:*, reg num_screens5:V, reg r107:V, reg new_screens:*, reg new_screens1:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c43:L, reg x8:V, reg par2:cls, reg _SSenv4:*, reg _SSenv5:V, reg c44:L, reg _SSenv7:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r108:V, reg p7:p(V +), reg r110:V, reg l7:*, reg c45:L, reg i6:I, reg r112:V, reg l9:*, reg dr22:V, reg dc11:L, reg dx26:V, reg i8:I, reg dx27:V, reg i9:*, reg i10:V, reg ____:cls, reg r115:V, reg figs15:*, reg figs16:V, reg c46:L, reg i12:I, reg figs18:V, reg dr24:V, reg dc12:L, reg dx28:V, reg i14:I, reg dx29:V, reg i15:*, reg i16:V, reg __6:cls, reg r116:V, reg l10:*, reg c47:L, reg i18:I, reg dx32:V, reg l13:*, reg dx33:V, reg l14:*, reg dr26:V, reg dc13:L, reg dx36:V, reg i20:I, reg dx37:V, reg l16:*, reg dx38:V, reg dx39:V, reg i21:*, reg i22:V, reg __7:cls, reg r117:V, reg c48:L, reg i24:I, reg dx42:V, reg l18:*, reg dx43:V, reg dr28:V, reg dc14:L, reg dx45:V, reg i26:I, reg dx46:V, reg l20:*, reg dx47:V, reg r118:V, reg c49:L, reg i28:I, reg dx49:V, reg l22:*, reg dr30:V, reg dc15:L, reg dx51:V, reg i30:I, reg dx53:V, reg i31:*, reg i32:V, reg ____1:cls, reg r119:V, reg new_screens2:*, reg new_screens3:V, reg erase3:*, reg erase4:V, reg c50:L, reg erase_screen:cls, reg screen5:*, reg screen6:V, reg p8:p(V +), reg r122:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r124:V, reg r125:V, reg _valid_screens4:*, reg _valid_screens5:V, reg max:cls, reg r126:V, reg max_screen:*, reg max_screen1:V, reg num_screens6:*, reg num_screens7:V, reg r127:V, reg _SSget2:cls, reg r128:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r129:V, reg r130:V, reg c51:cls, reg r131:V, reg screen7:*, reg screen8:V, reg r132:V, reg c52:L, reg split_screens:*, reg split_screens1:V, reg c53:L, reg split_screens3:V, reg dr32:V, reg dc16:L, reg dx54:V, reg dx55:V, reg screen9:*, reg screen10:V, reg __8:cls, reg r133:V, reg c54:L, reg dx57:V, reg dr34:V, reg dc17:L, reg dx58:V, reg dx59:V, reg r134:V, reg num_screens8:*, reg num_screens9:V, reg r135:V, reg s1:V, reg l23:I, reg i33:I, reg i34:I, reg i35:I, reg c55:L, reg x9:V, reg total:*, reg total1:V, reg c56:L, reg i39:I, reg total3:V, reg dr36:V, reg dc18:L, reg dx61:V, reg i41:I, reg dx62:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r136:V, reg i44:I, reg total6:V, reg r137:V, reg c57:cls, reg r138:V, reg __9:cls, reg r139:V, reg figs19:*, reg figs20:V, reg c58:L, reg i46:I, reg dx64:V, reg figs22:V, reg dr38:V, reg dc19:L, reg dx66:V, reg i48:I, reg dx67:V, reg dx68:V, reg i49:*, reg i50:V, reg __10:cls, reg r140:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r141:V, reg i53:I, reg dx73:V, reg dx74:V, reg r142:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r143:V, reg i56:I, reg dx79:V, reg dx80:V, reg r144:V, reg total7:*, reg total8:V, reg c59:L, reg i58:I, reg dx83:V, reg dx84:V, reg total10:V, reg dr40:V, reg dc20:L, reg dx87:V, reg i60:I, reg dx88:V, reg dx89:V, reg dx90:V, reg __11:cls, reg r145:V, reg total11:*, reg total12:V, reg c60:L, reg i62:I, reg dx94:V, reg dx95:V, reg dx96:V, reg total14:V, reg dr42:V, reg dc21:L, reg dx100:V, reg i64:I, reg dx101:V, reg dx102:V, reg dx103:V, reg dx104:V, reg __12:cls, reg r146:V, reg r147:V, reg total15:*, reg total16:V, reg c61:L, reg i66:I, reg dx107:V, reg dx108:V, reg total18:V, reg dr44:V, reg dc22:L, reg dx111:V, reg i68:I, reg dx112:V, reg dx113:V, reg dx114:V, reg __13:cls, reg r148:V, reg total19:*, reg total20:V, reg c62:L, reg i70:I, reg dx118:V, reg dx119:V, reg dx120:V, reg total22:V, reg dr46:V, reg dc23:L, reg dx124:V, reg i72:I, reg dx125:V, reg dx126:V, reg dx127:V, reg dx128:V, reg __14:cls, reg r149:V, reg r150:V, reg c63:cls, reg r151:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r152:V, reg i75:I, reg dx133:V, reg dx134:V, reg r153:V, reg c64:cls, reg r154:V, reg rep_int7:cls, reg r155:V, reg r156:V, reg r157:V, reg l24:*, reg c65:L, reg i77:I, reg r159:V, reg l26:*, reg dr48:V, reg dc24:L, reg dx135:V, reg i79:I, reg dx136:V, reg i80:*, reg i81:V, reg ___:cls, reg r162:V, reg max_screen2:*, reg max_screen3:V, reg r163:V, reg new_max_screen:*, reg new_max_screen1:V, reg r164:V, reg new_screens4:*, reg new_screens5:V, reg s2:V, reg l27:I, reg i82:I, reg i83:I, reg i84:I, reg c66:L, reg x10:V, reg par3:cls, reg _SSenv8:*, reg _SSenv9:V, reg c67:L, reg _SSenv11:V, reg dr50:V, reg dc25:L, reg dx137:V, reg dx138:V, reg r165:V, reg p9:p(V +), reg r167:V, reg l28:*, reg c68:L, reg i88:I, reg r169:V, reg l30:*, reg dr52:V, reg dc26:L, reg dx139:V, reg i90:I, reg dx140:V, reg i91:*, reg i92:V, reg ____2:cls, reg r172:V, reg figs23:*, reg figs24:V, reg c69:L, reg i94:I, reg figs26:V, reg dr54:V, reg dc27:L, reg dx141:V, reg i96:I, reg dx142:V, reg i97:*, reg i98:V, reg max_screen4:*, reg max_screen5:V, reg r173:V, reg __15:cls, reg r174:V, reg l31:*, reg c70:L, reg i100:I, reg dx145:V, reg l34:*, reg dx146:V, reg l35:*, reg dr56:V, reg dc28:L, reg dx149:V, reg i102:I, reg dx150:V, reg l37:*, reg dx151:V, reg dx152:V, reg i103:*, reg i104:V, reg __16:cls, reg r175:V, reg c71:L, reg i106:I, reg dx155:V, reg l39:*, reg dx156:V, reg dr58:V, reg dc29:L, reg dx158:V, reg i108:I, reg dx159:V, reg l41:*, reg dx160:V, reg r176:V, reg c72:L, reg i110:I, reg dx162:V, reg l43:*, reg dr60:V, reg dc30:L, reg dx164:V, reg i112:I, reg dx166:V, reg i113:*, reg i114:V, reg ____3:cls, reg r177:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r178:V, reg r179:V, reg _valid_screens6:*, reg _valid_screens7:V, reg new_screens6:*, reg new_screens7:V, reg c73:cls, reg r180:V, reg max_screen6:*, reg max_screen7:V, reg r181:V, reg _SSassign1:cls, reg split_screens4:*, reg split_screens5:V, reg p10:p(V +), reg r183:V, reg _SSassign2:cls, reg cur_screen:*, reg cur_screen1:V, reg p11:p(V +), reg r185:V, reg _SSassign3:cls, reg valid_screens:*, reg valid_screens1:V, reg p12:p(V +), reg r187:V, reg first_split12:*, reg first_split13:V, reg c74:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r188:V, reg r189:V, reg on_exit:cls, reg r190:V, reg par4:cls, reg split_screens6:*, reg split_screens7:V, reg c75:L, reg split_screens9:V, reg dr62:V, reg dc31:L, reg dx167:V, reg dx168:V, reg cur_screen2:*, reg cur_screen3:V, reg __17:cls, reg r192:V, reg p13:p(V +), reg r194:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r195:V, reg on_exit1:cls, reg r197:V, reg new_screens8:*, reg new_screens9:V |
    mkenv;
    st figs = figs;
    st screen = screen;
    erase_isMissing = missing.0(erase);
    if erase_isMissing then L0(TRUE) else L0(erase);
  L0(erase_orDefault):
    st erase = erase_orDefault;
    _SSexists = ldf `.SSexists`;
    check L72() else D0();
  D0():
    deopt 1 [];
  L72():
    r = dyn _SSexists("sp.screens");
    check L73() else D1();
  D1():
    deopt 3 [r];
  L73():
    r1 = `!`(r);
    st `first.split` = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L74() else L75();
  L1(r3):
    c = `as.logical`(r3);
    if c then L76() else L2();
  L74():
    missing = ldf missing in base;
    r4 = dyn missing(<sym screen>);
    goto L1(r4);
  L75():
    r2 = dyn base(<sym screen>);
    goto L1(r2);
  L2():
    goto L5();
  L5():
    first_split2 = ld `first.split`;
    check L83() else D5();
  L76():
    first_split = ld `first.split`;
    check L77() else D2();
  D2():
    deopt 9 [first_split];
  D5():
    deopt 21 [first_split2];
  L77():
    first_split1 = force? first_split;
    checkMissing(first_split1);
    r5 = `!`(first_split1);
    c1 = `as.logical`(r5);
    if c1 then L78() else L3();
  L83():
    first_split3 = force? first_split2;
    checkMissing(first_split3);
    r9 = `!`(first_split3);
    c2 = `as.logical`(r9);
    if c2 then L84() else L6();
  L3():
    goto L4(0.0);
  L4(r7):
    st screen = r7;
    goto L5();
  L6():
    goto L7();
  L7():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L88() else L89();
  L78():
    _SSget = ldf `.SSget`;
    check L79() else D3();
  L84():
    _SSget1 = ldf `.SSget`;
    check L85() else D6();
  D3():
    deopt 13 [];
  D6():
    deopt 25 [];
  L8(r13):
    c3 = `as.logical`(r13);
    if c3 then L90() else L9();
  L79():
    r6 = dyn _SSget("sp.cur.screen");
    check L80() else D4();
  L85():
    r10 = dyn _SSget1("sp.valid.screens");
    check L86() else D7();
  L88():
    missing1 = ldf missing in base;
    r14 = dyn missing1(<sym figs>);
    goto L8(r14);
  L89():
    r12 = dyn base1(<sym figs>);
    goto L8(r12);
  D4():
    deopt 15 [r6];
  D7():
    deopt 27 [r10];
  L9():
    first_split6 = ld `first.split`;
    check L98() else D10();
  L80():
    goto L4(r6);
  L86():
    st `.valid.screens` = r10;
    goto L7();
  L90():
    first_split4 = ld `first.split`;
    check L91() else D8();
  D8():
    deopt 34 [first_split4];
  D10():
    deopt 44 [first_split6];
  L91():
    first_split5 = force? first_split4;
    checkMissing(first_split5);
    c4 = `as.logical`(first_split5);
    if c4 then L92() else L10();
  L98():
    first_split7 = force? first_split6;
    checkMissing(first_split7);
    c5 = `as.logical`(first_split7);
    if c5 then L99() else L13(c5);
  L10():
    _valid_screens = ld `.valid.screens`;
    check L95() else D9();
  L13(c7):
    c11 = `as.logical`(c7);
    if c11 then L14(c11) else L102();
  L92():
    popenv;
    return FALSE;
  L99():
    screen1 = ld screen;
    check L100() else D11();
  D9():
    deopt 39 [_valid_screens];
  D11():
    deopt 46 [c5, screen1];
  L14(c12):
    c26 = `as.logical`(c12);
    if c26 then L109() else L16();
  L95():
    _valid_screens1 = force? _valid_screens;
    checkMissing(_valid_screens1);
    popenv;
    return _valid_screens1;
  L100():
    screen2 = force? screen1;
    checkMissing(screen2);
    r18 = `!=`(screen2, 0.0);
    c8 = `as.logical`(r18);
    c9 = `&&`(c5, c8);
    goto L13(c9);
  L102():
    first_split8 = ld `first.split`;
    check L103() else D12();
  D12():
    deopt 51 [c11, first_split8];
  L16():
    goto L17();
  L17():
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L113() else L114();
  L103():
    first_split9 = force? first_split8;
    checkMissing(first_split9);
    r19 = `!`(first_split9);
    c14 = `as.logical`(r19);
    if c14 then L104() else L15(c11, c14);
  L109():
    stop = ldf stop;
    check L110() else D15();
  D15():
    deopt 63 [];
  L15(c17, c18):
    c23 = `as.logical`(c18);
    c24 = `||`(c17, c23);
    goto L14(c24);
  L18(r27):
    r29 = `!`(r27);
    c27 = `as.logical`(r29);
    if c27 then L117() else L19();
  L104():
    _in_ = ldf `%in%`;
    check L105() else D13();
  L110():
    r24 = dyn stop("invalid screen number");
    check L111() else D16();
  L113():
    figs1 = ld figs;
    check L115() else D17();
  L114():
    r26 = dyn base2(<sym figs>);
    goto L18(r26);
  D13():
    deopt 55 [c11, c14];
  D16():
    deopt 65 [r24];
  D17():
    deopt 70 [figs1];
  L19():
    goto L27();
  L27():
    nrow = ldf nrow;
    check L145() else D31();
  L105():
    p = prom<V +>{
      screen3 = ld screen;
      screen4 = force? screen3;
      checkMissing(screen4);
      return screen4;
    };
    p1 = prom<V +>{
      _valid_screens2 = ld `.valid.screens`;
      _valid_screens3 = force? _valid_screens2;
      checkMissing(_valid_screens3);
      return _valid_screens3;
    };
    r22 = dyn _in_(p, p1);
    check L106() else D14();
  L111():
    goto L17();
  L115():
    figs2 = force? figs1;
    checkMissing(figs2);
    is_matrix = ldf `is.matrix` in base;
    r28 = dyn is_matrix(figs2);
    check L116() else D18();
  L117():
    sym3 = ldf `is.vector`;
    base3 = ldf `is.vector` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L118() else L119();
  D14():
    deopt 58 [c11, c14, r22];
  D18():
    deopt 73 [r28];
  D31():
    deopt 135 [];
  L20(r31):
    r33 = `!`(r31);
    c28 = `as.logical`(r33);
    if c28 then L122() else L21();
  L106():
    r23 = `!`(r22);
    c19 = `as.logical`(r23);
    c20 = `&&`(c14, c19);
    goto L15(c11, c20);
  L116():
    goto L18(r28);
  L118():
    figs3 = ld figs;
    check L120() else D19();
  L119():
    r30 = dyn base3(<sym figs>);
    goto L20(r30);
  L145():
    p3 = prom<V +>{
      figs13 = ld figs;
      figs14 = force? figs13;
      checkMissing(figs14);
      return figs14;
    };
    r79 = dyn nrow(p3);
    check L146() else D32();
  D19():
    deopt 77 [figs3];
  D32():
    deopt 137 [r79];
  L21():
    goto L22();
  L22():
    figs5 = ld figs;
    check L126() else D23();
  L120():
    figs4 = force? figs3;
    checkMissing(figs4);
    is_vector = ldf `is.vector` in base;
    r32 = dyn is_vector(figs4, "any");
    check L121() else D20();
  L122():
    stop1 = ldf stop;
    check L123() else D21();
  L146():
    st `num.screens` = r79;
    num_screens = ld `num.screens`;
    check L147() else D33();
  D20():
    deopt 81 [r32];
  D21():
    deopt 84 [];
  D23():
    deopt 89 [figs5];
  D33():
    deopt 139 [num_screens];
  L121():
    goto L20(r32);
  L123():
    r34 = dyn stop1("'figs' must be a vector or a matrix with 4 columns");
    check L124() else D22();
  L126():
    figs6 = force? figs5;
    checkMissing(figs6);
    c29 = `is.object`(figs6);
    if c29 then L127() else L128(figs6);
  L147():
    num_screens1 = force? num_screens;
    checkMissing(num_screens1);
    r80 = `<`(num_screens1, 1.0);
    c36 = `as.logical`(r80);
    if c36 then L148() else L28();
  D22():
    deopt 86 [r34];
  L23(dx1):
    st nr = dx1;
    figs9 = ld figs;
    check L130() else D24();
  L28():
    goto L29();
  L29():
    st `cur.screen` = 0.0;
    st `valid.screens` = 0.0;
    st `new.screens` = 0.0;
    first_split10 = ld `first.split`;
    check L152() else D36();
  L124():
    goto L22();
  L127():
    dr = tryDispatchBuiltin.1("[", figs6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L129() else L128(dr);
  L128(figs8):
    __ = ldf `[` in base;
    r36 = dyn __(figs8, 1);
    goto L23(r36);
  L148():
    stop2 = ldf stop;
    check L149() else D34();
  D24():
    deopt 95 [figs9];
  D34():
    deopt 144 [];
  D36():
    deopt 154 [first_split10];
  L129():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L130():
    figs10 = force? figs9;
    checkMissing(figs10);
    c30 = `is.object`(figs10);
    if c30 then L131() else L132(figs10);
  L149():
    r81 = dyn stop2("'figs' must specify at least one screen");
    check L150() else D35();
  L152():
    first_split11 = force? first_split10;
    checkMissing(first_split11);
    c37 = `as.logical`(first_split11);
    if c37 then L153() else L30();
  D35():
    deopt 146 [r81];
  L24(dx3):
    st nc = dx3;
    sym4 = ldf `seq.int`;
    base4 = ldf `seq.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L134() else L135();
  L30():
    erase3 = ld erase;
    check L209() else D58();
  L40():
    _SSassign1 = ldf `.SSassign`;
    check L314() else D99();
  L131():
    dr2 = tryDispatchBuiltin.1("[", figs10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L133() else L132(dr2);
  L132(figs12):
    __1 = ldf `[` in base;
    r37 = dyn __1(figs12, 2);
    goto L24(r37);
  L150():
    goto L29();
  L153():
    erase1 = ld erase;
    check L154() else D37();
  D37():
    deopt 156 [erase1];
  D58():
    deopt 238 [erase3];
  D99():
    deopt 407 [];
  L25(r39):
    st x = r39;
    sym5 = ldf `seq.int`;
    base5 = ldf `seq.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L138() else L139();
  L133():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L134():
    nc = ld nc;
    check L136() else D25();
  L135():
    r38 = dyn base4[, , `length.out`](0.0, 1.0, <lang `+`(nc, 1.0)>);
    goto L25(r38);
  L154():
    erase2 = force? erase1;
    checkMissing(erase2);
    c38 = `as.logical`(erase2);
    if c38 then L155() else L31();
  L209():
    erase4 = force? erase3;
    checkMissing(erase4);
    c50 = `as.logical`(erase4);
    if c50 then L210() else L41();
  L314():
    p10 = prom<V +>{
      split_screens4 = ld `split.screens`;
      split_screens5 = force? split_screens4;
      checkMissing(split_screens5);
      return split_screens5;
    };
    r183 = dyn _SSassign1("sp.screens", p10);
    check L315() else D100();
  D25():
    deopt 105 [nc];
  D100():
    deopt 410 [r183];
  L26(r43):
    st y = r43;
    matrix = ldf matrix;
    check L142() else D29();
  L31():
    goto L32();
  L32():
    par = ldf par;
    check L159() else D40();
  L41():
    goto L42();
  L42():
    sym15 = ldf max;
    base15 = ldf max in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L214() else L215();
  L136():
    nc1 = force? nc;
    checkMissing(nc1);
    r40 = `+`(nc1, 1.0);
    seq_int = ldf `seq.int` in base;
    r41 = dyn seq_int(0.0, 1.0, r40);
    check L137() else D26();
  L138():
    nr = ld nr;
    check L140() else D27();
  L139():
    r42 = dyn base5[, , `length.out`](1.0, 0.0, <lang `+`(nr, 1.0)>);
    goto L26(r42);
  L155():
    plot_new = ldf `plot.new`;
    check L156() else D38();
  L210():
    erase_screen = ldf `erase.screen`;
    check L211() else D59();
  L315():
    _SSassign2 = ldf `.SSassign`;
    check L316() else D101();
  D26():
    deopt 111 [r41];
  D27():
    deopt 117 [nr];
  D29():
    deopt 126 [];
  D38():
    deopt 159 [];
  D40():
    deopt 164 [];
  D59():
    deopt 241 [];
  D101():
    deopt 412 [];
  L43(r125):
    st `max.screen` = r125;
    max_screen = ld `max.screen`;
    check L218() else D63();
  L137():
    goto L25(r41);
  L140():
    nr1 = force? nr;
    checkMissing(nr1);
    r44 = `+`(nr1, 1.0);
    seq_int1 = ldf `seq.int` in base;
    r45 = dyn seq_int1(1.0, 0.0, r44);
    check L141() else D28();
  L142():
    p2 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L11() else L12();
    L0(r47):
      return r47;
    L11():
      sym7 = ldf `rep.int`;
      base7 = ldf `rep.int` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L13() else L14();
    L12():
      r46 = dyn base6(<lang rep.int(`[`(x, `-`(`(`(`+`(nc, 1.0)))), nr)>, <lang rep.int(`[`(x, `-`(1)), nr)>, <lang rep.int(`[`(y, `-`(1)), rep.int(nc, nr))>, <lang rep.int(`[`(y, `-`(`(`(`+`(nr, 1.0)))), rep.int(nc, nr))>);
      goto L0(r46);
    L1(r49):
      sym8 = ldf `rep.int`;
      base8 = ldf `rep.int` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L18() else L19();
    L13():
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      c31 = `is.object`(x1);
      if c31 then L15() else L16(x1);
    L14():
      r48 = dyn base7(<lang `[`(x, `-`(`(`(`+`(nc, 1.0))))>, <sym nr>);
      goto L1(r48);
    L2(dx5):
      nr2 = ld nr;
      nr3 = force? nr2;
      checkMissing(nr3);
      rep_int = ldf `rep.int` in base;
      r53 = dyn rep_int(dx5, nr3);
      goto L1(r53);
    L3(r55):
      sym9 = ldf `rep.int`;
      base9 = ldf `rep.int` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L23() else L24();
    L15():
      dr4 = tryDispatchBuiltin.1("[", x1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L17() else L16(dr4);
    L16(x3):
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      r50 = `+`(nc3, 1.0);
      r51 = `-`(<missing>, r50);
      __2 = ldf `[` in base;
      r52 = dyn __2(x3, r51);
      goto L2(r52);
    L18():
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      c32 = `is.object`(x5);
      if c32 then L20() else L21(x5);
    L19():
      r54 = dyn base8(<lang `[`(x, `-`(1))>, <sym nr>);
      goto L3(r54);
    L4(dx7):
      nr4 = ld nr;
      nr5 = force? nr4;
      checkMissing(nr5);
      rep_int1 = ldf `rep.int` in base;
      r57 = dyn rep_int1(dx7, nr5);
      goto L3(r57);
    L5(r59):
      sym11 = ldf `rep.int`;
      base11 = ldf `rep.int` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L30() else L31();
    L17():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L2(dx4);
    L20():
      dr6 = tryDispatchBuiltin.1("[", x5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L22() else L21(dr6);
    L21(x7):
      __3 = ldf `[` in base;
      r56 = dyn __3(x7, -1);
      goto L4(r56);
    L23():
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c33 = `is.object`(y1);
      if c33 then L25() else L26(y1);
    L24():
      r58 = dyn base9(<lang `[`(y, `-`(1))>, <lang rep.int(nc, nr)>);
      goto L5(r58);
    L6(dx9):
      sym10 = ldf `rep.int`;
      base10 = ldf `rep.int` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L28() else L29();
    L8(r66):
      c35 = ldf c in base;
      r74 = dyn c35(r49, r55, r59, r66);
      goto L0(r74);
    L22():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L4(dx6);
    L25():
      dr8 = tryDispatchBuiltin.1("[", y1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L27() else L26(dr8);
    L26(y3):
      __4 = ldf `[` in base;
      r60 = dyn __4(y3, -1);
      goto L6(r60);
    L30():
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c34 = `is.object`(y5);
      if c34 then L32() else L33(y5);
    L31():
      r65 = dyn base11(<lang `[`(y, `-`(`(`(`+`(nr, 1.0))))>, <lang rep.int(nc, nr)>);
      goto L8(r65);
    L7(r62):
      rep_int3 = ldf `rep.int` in base;
      r64 = dyn rep_int3(dx9, r62);
      goto L5(r64);
    L9(dx11):
      sym12 = ldf `rep.int`;
      base12 = ldf `rep.int` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L35() else L36();
    L27():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L6(dx8);
    L28():
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      nr6 = ld nr;
      nr7 = force? nr6;
      checkMissing(nr7);
      rep_int2 = ldf `rep.int` in base;
      r63 = dyn rep_int2(nc5, nr7);
      goto L7(r63);
    L29():
      r61 = dyn base10(<sym nc>, <sym nr>);
      goto L7(r61);
    L32():
      dr10 = tryDispatchBuiltin.1("[", y5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L34() else L33(dr10);
    L33(y7):
      nr8 = ld nr;
      nr9 = force? nr8;
      checkMissing(nr9);
      r67 = `+`(nr9, 1.0);
      r68 = `-`(<missing>, r67);
      __5 = ldf `[` in base;
      r69 = dyn __5(y7, r68);
      goto L9(r69);
    L10(r71):
      rep_int5 = ldf `rep.int` in base;
      r73 = dyn rep_int5(dx11, r71);
      goto L8(r73);
    L34():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L9(dx10);
    L35():
      nc6 = ld nc;
      nc7 = force? nc6;
      checkMissing(nc7);
      nr10 = ld nr;
      nr11 = force? nr10;
      checkMissing(nr11);
      rep_int4 = ldf `rep.int` in base;
      r72 = dyn rep_int4(nc7, nr11);
      goto L10(r72);
    L36():
      r70 = dyn base12(<sym nc>, <sym nr>);
      goto L10(r70);
    };
    r76 = dyn matrix[, ncol](p2, 4.0);
    check L143() else D30();
  L156():
    r83 = dyn plot_new();
    check L157() else D39();
  L159():
    p4 = prom<V +>{
      _SSenv = ld `.SSenv`;
      _SSenv1 = force? _SSenv;
      checkMissing(_SSenv1);
      c39 = `is.object`(_SSenv1);
      if c39 then L1() else L2(_SSenv1);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", _SSenv1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(_SSenv3):
      r85 = `$`(_SSenv3, <sym par.list>);
      goto L0(r85);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r87 = dyn par(p4);
    check L160() else D41();
  L211():
    p8 = prom<V +>{
      screen5 = ld screen;
      screen6 = force? screen5;
      checkMissing(screen6);
      return screen6;
    };
    r122 = dyn erase_screen(p8);
    check L212() else D60();
  L214():
    _valid_screens4 = ld `.valid.screens`;
    check L216() else D61();
  L215():
    r124 = dyn base15(<sym .valid.screens>);
    goto L43(r124);
  L316():
    p11 = prom<V +>{
      cur_screen = ld `cur.screen`;
      cur_screen1 = force? cur_screen;
      checkMissing(cur_screen1);
      return cur_screen1;
    };
    r185 = dyn _SSassign2("sp.cur.screen", p11);
    check L317() else D102();
  D28():
    deopt 123 [r45];
  D30():
    deopt 130 [r76];
  D39():
    deopt 160 [r83];
  D41():
    deopt 166 [r87];
  D60():
    deopt 243 [r122];
  D61():
    deopt 248 [_valid_screens4];
  D63():
    deopt 253 [max_screen];
  D102():
    deopt 415 [r185];
  L141():
    goto L26(r45);
  L143():
    st figs = r76;
    goto L27();
  L157():
    goto L32();
  L160():
    st `split.saved.pars` = r87;
    l = ld `split.saved.pars`;
    c40 = `is.object`(l);
    if c40 then L162() else L163(NULL, l);
  L212():
    goto L42();
  L216():
    _valid_screens5 = force? _valid_screens4;
    checkMissing(_valid_screens5);
    max = ldf max in base;
    r126 = dyn max(_valid_screens5);
    check L217() else D62();
  L218():
    max_screen1 = force? max_screen;
    checkMissing(max_screen1);
    num_screens6 = ld `num.screens`;
    check L219() else D64();
  L317():
    _SSassign3 = ldf `.SSassign`;
    check L318() else D103();
  D62():
    deopt 251 [r126];
  D64():
    deopt 254 [max_screen1, num_screens6];
  D103():
    deopt 417 [];
  L161(dx15):
    st `split.saved.pars` = dx15;
    par1 = ldf par;
    check L165() else D42();
  L162():
    dr14 = tryDispatchBuiltin.0("$<-", l, NULL);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L164() else L163(NULL, dr14);
  L163(r89, l2):
    r92 = `$<-`(l2, <sym fig>, NULL);
    goto L161(r92);
  L217():
    goto L43(r126);
  L219():
    num_screens7 = force? num_screens6;
    checkMissing(num_screens7);
    r127 = `+`(max_screen1, num_screens7);
    st `new.max.screen` = r127;
    _SSget2 = ldf `.SSget`;
    check L220() else D65();
  L318():
    p12 = prom<V +>{
      valid_screens = ld `valid.screens`;
      valid_screens1 = force? valid_screens;
      checkMissing(valid_screens1);
      return valid_screens1;
    };
    r187 = dyn _SSassign3("sp.valid.screens", p12);
    check L319() else D104();
  D42():
    deopt 174 [];
  D65():
    deopt 259 [];
  D104():
    deopt 420 [r187];
  L164():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L161(dx14);
  L165():
    p5 = prom<V +>{
      sym13 = ldf `rep.int`;
      base13 = ldf `rep.int` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r94):
      return r94;
    L1():
      rep_int6 = ldf `rep.int` in base;
      r95 = dyn rep_int6(0.0, 4.0);
      goto L0(r95);
    L2():
      r93 = dyn base13(0.0, 4.0);
      goto L0(r93);
    };
    r97 = dyn par1[omi](p5);
    check L166() else D43();
  L220():
    r128 = dyn _SSget2("sp.screens");
    check L221() else D66();
  L319():
    first_split12 = ld `first.split`;
    check L320() else D105();
  D43():
    deopt 177 [r97];
  D66():
    deopt 261 [r128];
  D105():
    deopt 421 [first_split12];
  L166():
    c41 = `is.object`(r97);
    if c41 then L168() else L169(r97);
  L221():
    st `split.screens` = r128;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L222() else L223();
  L320():
    first_split13 = force? first_split12;
    checkMissing(first_split13);
    c74 = `as.logical`(first_split13);
    if c74 then L321() else L68();
  L44(r130):
    st total = r130;
    screen7 = ld screen;
    check L225() else D68();
  L68():
    goto L70();
  L70():
    par4 = ldf par;
    check L325() else D106();
  L167(dx17):
    l3 = ld `split.saved.pars`;
    c42 = `is.object`(l3);
    if c42 then L172() else L173(dx17, l3);
  L168():
    dr16 = tryDispatchBuiltin.1("$", r97);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L170() else L169(dr16);
  L169(r99):
    r100 = `$`(r99, <sym omi>);
    goto L167(r100);
  L222():
    c51 = ldf c in base;
    r131 = dyn c51(0.0, 1.0, 0.0, 1.0);
    check L224() else D67();
  L223():
    r129 = dyn base16(0.0, 1.0, 0.0, 1.0);
    goto L44(r129);
  L321():
    sym22 = ldf `on.exit`;
    base22 = ldf `on.exit` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L322() else L323();
  D67():
    deopt 270 [r131];
  D68():
    deopt 272 [screen7];
  D106():
    deopt 429 [];
  L69(r189):
    goto L70();
  L170():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L167(dx16);
  L171(dx23):
    st `split.saved.pars` = dx23;
    _SSassign = ldf `.SSassign`;
    check L175() else D44();
  L172():
    dr18 = tryDispatchBuiltin.0("$<-", l3, dx17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L174() else L173(dx17, dr18);
  L173(dx19, l5):
    r101 = `$<-`(l5, <sym omi>, dx17);
    goto L171(r101);
  L224():
    goto L44(r131);
  L225():
    screen8 = force? screen7;
    checkMissing(screen8);
    r132 = `>`(screen8, 0.0);
    c52 = `as.logical`(r132);
    if c52 then L226() else L45();
  L322():
    on_exit = ldf `on.exit` in base;
    r190 = dyn on_exit(<lang close.screen(all.screens=TRUE)>);
    goto L69(r190);
  L323():
    r188 = dyn base22(<lang close.screen(all.screens=TRUE)>);
    goto L69(r188);
  L325():
    p13 = prom<V +>{
      split_screens6 = ld `split.screens`;
      split_screens7 = force? split_screens6;
      checkMissing(split_screens7);
      c75 = `is.object`(split_screens7);
      if c75 then L1() else L2(split_screens7);
    L0(dx168):
      return dx168;
    L1():
      dr62 = tryDispatchBuiltin.1("[[", split_screens7);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(split_screens9):
      cur_screen2 = ld `cur.screen`;
      cur_screen3 = force? cur_screen2;
      __17 = ldf `[[` in base;
      r192 = dyn __17(split_screens9, cur_screen3);
      goto L0(r192);
    L3():
      dx167 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx167);
    };
    r194 = dyn par4(p13);
    check L326() else D107();
  D44():
    deopt 183 [];
  D107():
    deopt 431 [r194];
  L45():
    goto L47();
  L47():
    num_screens8 = ld `num.screens`;
    check L237() else D71();
  L174():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L171(dx21);
  L175():
    p6 = prom<V +>{
      split_saved_pars = ld `split.saved.pars`;
      split_saved_pars1 = force? split_saved_pars;
      checkMissing(split_saved_pars1);
      return split_saved_pars1;
    };
    r103 = dyn _SSassign("sp.saved.pars", p6);
    check L176() else D45();
  L226():
    split_screens = ld `split.screens`;
    check L227() else D69();
  L326():
    sym23 = ldf `on.exit`;
    base23 = ldf `on.exit` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L327() else L328();
  D45():
    deopt 186 [r103];
  D69():
    deopt 276 [split_screens];
  D71():
    deopt 286 [1, num_screens8];
  L71():
    new_screens8 = ld `new.screens`;
    check L329() else D108();
  L176():
    sym14 = ldf vector;
    base14 = ldf vector in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L177() else L178();
  L227():
    split_screens1 = force? split_screens;
    checkMissing(split_screens1);
    c53 = `is.object`(split_screens1);
    if c53 then L228() else L229(split_screens1);
  L237():
    num_screens9 = force? num_screens8;
    checkMissing(num_screens9);
    r135 = `:`(1, num_screens9);
    s1 = toForSeq(r135);
    l23 = length(s1);
    i33 = 0;
    goto L48(i33);
  L327():
    on_exit1 = ldf `on.exit` in base;
    r197 = dyn on_exit1();
    goto L71();
  L328():
    r195 = dyn base23();
    goto L71();
  D108():
    deopt 435 [new_screens8];
  L33(r105):
    st `split.screens` = r105;
    num_screens4 = ld `num.screens`;
    check L181() else D48();
  L46(dx55):
    c54 = `is.object`(dx55);
    if c54 then L233() else L234(dx55);
  L48(i34):
    i35 = `+`.1(i34, 1);
    c55 = `<`.1(l23, i35);
    if c55 then L238() else L60();
  L177():
    num_screens2 = ld `num.screens`;
    check L179() else D46();
  L178():
    r104 = dyn base14[mode, length]("list", <sym num.screens>);
    goto L33(r104);
  L228():
    dr32 = tryDispatchBuiltin.1("[[", split_screens1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L230() else L229(dr32);
  L229(split_screens3):
    screen9 = ld screen;
    check L231() else D70();
  L329():
    new_screens9 = force? new_screens8;
    checkMissing(new_screens9);
    popenv;
    return new_screens9;
  D46():
    deopt 190 [num_screens2];
  D48():
    deopt 196 [1, num_screens4];
  D70():
    deopt 278 [split_screens3, screen9];
  L60():
    x9 = `[[`(s1, i35, NULL, TRUE);
    st i = x9;
    total = ld total;
    check L239() else D72();
  L179():
    num_screens3 = force? num_screens2;
    checkMissing(num_screens3);
    vector = ldf vector in base;
    r106 = dyn vector("list", num_screens3);
    check L180() else D47();
  L181():
    num_screens5 = force? num_screens4;
    checkMissing(num_screens5);
    r107 = `:`(1, num_screens5);
    st `new.screens` = r107;
    new_screens = ld `new.screens`;
    check L182() else D49();
  L230():
    dx54 = getTryDispatchBuiltinValue(dr32);
    goto L46(dx54);
  L231():
    screen10 = force? screen9;
    __8 = ldf `[[` in base;
    r133 = dyn __8(split_screens3, screen10);
    goto L46(r133);
  L232(dx59):
    st total = dx59;
    goto L47();
  L233():
    dr34 = tryDispatchBuiltin.1("$", dx55);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L235() else L234(dr34);
  L234(dx57):
    r134 = `$`(dx57, <sym fig>);
    goto L232(r134);
  L238():
    max_screen2 = ld `max.screen`;
    check L280() else D84();
  D47():
    deopt 193 [r106];
  D49():
    deopt 200 [new_screens];
  D72():
    deopt 289 [i35, total];
  D84():
    deopt 351 [max_screen2];
  L180():
    goto L33(r106);
  L182():
    new_screens1 = force? new_screens;
    checkMissing(new_screens1);
    s = toForSeq(new_screens1);
    l6 = length(s);
    i = 0;
    goto L34(i);
  L235():
    dx58 = getTryDispatchBuiltinValue(dr34);
    goto L232(dx58);
  L239():
    total1 = force? total;
    checkMissing(total1);
    c56 = `is.object`(total1);
    if c56 then L240() else L241(i35, total1);
  L280():
    max_screen3 = force? max_screen2;
    checkMissing(max_screen3);
    r163 = `+`(max_screen3, 1.0);
    new_max_screen = ld `new.max.screen`;
    check L281() else D85();
  D85():
    deopt 354 [r163, new_max_screen];
  L34(i1):
    i2 = `+`.1(i1, 1);
    c43 = `<`.1(l6, i2);
    if c43 then L183() else L39();
  L49(i41, dx62):
    figs19 = ld figs;
    check L246() else D74();
  L240():
    dr36 = tryDispatchBuiltin.1("[", total1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L242() else L241(i35, dr36);
  L241(i39, total3):
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L243() else L244();
  L281():
    new_max_screen1 = force? new_max_screen;
    checkMissing(new_max_screen1);
    r164 = `:`(r163, new_max_screen1);
    st `new.screens` = r164;
    new_screens4 = ld `new.screens`;
    check L282() else D86();
  D74():
    deopt 299 [i41, dx62, figs19];
  D86():
    deopt 358 [new_screens4];
  L39():
    x8 = `[[`(s, i2, NULL, TRUE);
    st i = x8;
    par2 = ldf par;
    check L184() else D50();
  L50(i44, total6, r137):
    __9 = ldf `[` in base;
    r139 = dyn __9(total6, r137);
    goto L49(i44, r139);
  L183():
    new_screens2 = ld `new.screens`;
    check L207() else D57();
  L242():
    dx61 = getTryDispatchBuiltinValue(dr36);
    goto L49(i35, dx61);
  L243():
    c57 = ldf c in base;
    r138 = dyn c57(1.0, 1.0, 3.0, 3.0);
    check L245() else D73();
  L244():
    r136 = dyn base17(1.0, 1.0, 3.0, 3.0);
    goto L50(i39, total3, r136);
  L246():
    figs20 = force? figs19;
    checkMissing(figs20);
    c58 = `is.object`(figs20);
    if c58 then L247() else L248(i41, dx62, figs20);
  L282():
    new_screens5 = force? new_screens4;
    checkMissing(new_screens5);
    s2 = toForSeq(new_screens5);
    l27 = length(s2);
    i82 = 0;
    goto L61(i82);
  D50():
    deopt 203 [i2];
  D57():
    deopt 232 [new_screens2];
  D73():
    deopt 298 [i39, total3, r138];
  L51(i48, dx67, dx68):
    sym18 = ldf `rep.int`;
    base18 = ldf `rep.int` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L251() else L252();
  L61(i83):
    i84 = `+`.1(i83, 1);
    c66 = `<`.1(l27, i84);
    if c66 then L283() else L66();
  L184():
    p7 = prom<V +>{
      _SSenv4 = ld `.SSenv`;
      _SSenv5 = force? _SSenv4;
      checkMissing(_SSenv5);
      c44 = `is.object`(_SSenv5);
      if c44 then L1() else L2(_SSenv5);
    L0(dx25):
      return dx25;
    L1():
      dr20 = tryDispatchBuiltin.1("$", _SSenv5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(_SSenv7):
      r108 = `$`(_SSenv7, <sym par.list>);
      goto L0(r108);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx24);
    };
    r110 = dyn par2(p7);
    check L185() else D51();
  L207():
    new_screens3 = force? new_screens2;
    checkMissing(new_screens3);
    st `valid.screens` = new_screens3;
    st `cur.screen` = 1.0;
    goto L40();
  L245():
    goto L50(i39, total3, r138);
  L247():
    dr38 = tryDispatchBuiltin.1("[", figs20);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L249() else L248(i41, dx62, dr38);
  L248(i46, dx64, figs22):
    i49 = ld i;
    check L250() else D75();
  D51():
    deopt 205 [i2, r110];
  D75():
    deopt 301 [i46, dx64, figs22, i49];
  L52(i53, dx73, dx74, r142):
    r156 = `*`(dx74, r142);
    r157 = `+`(dx73, r156);
    l24 = ld figs;
    c65 = `is.object`(l24);
    if c65 then L276() else L277(i53, r157, l24);
  L66():
    x10 = `[[`(s2, i84, NULL, TRUE);
    st i = x10;
    par3 = ldf par;
    check L284() else D87();
  L185():
    l7 = ld `split.screens`;
    c45 = `is.object`(l7);
    if c45 then L186() else L187(i2, r110, l7);
  L249():
    dx66 = getTryDispatchBuiltinValue(dr38);
    goto L51(i41, dx62, dx66);
  L250():
    i50 = force? i49;
    __10 = ldf `[` in base;
    r140 = dyn __10(figs20, i50, <missing>);
    goto L51(i46, dx64, r140);
  L251():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L253() else L254();
  L252():
    r141 = dyn base18(<lang c(`-`(`[`(total, 2), `[`(total, 1)), `-`(`[`(total, 4), `[`(total, 3)))>, <lang c(2.0, 2.0)>);
    goto L52(i48, dx67, dx68, r141);
  L283():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L308() else L309();
  D87():
    deopt 361 [i84];
  L35(i8, dx27):
    st `split.screens` = dx27;
    figs15 = ld figs;
    check L190() else D53();
  L53(i56, dx79, dx80, r144):
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L272() else L273();
  L59(i79, dx136):
    st figs = dx136;
    goto L48(i79);
  L67(r179):
    st `valid.screens` = r179;
    max_screen6 = ld `max.screen`;
    check L313() else D98();
  L186():
    dr22 = tryDispatchBuiltin.0("[[<-", l7, r110);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L188() else L187(i2, r110, dr22);
  L187(i6, r112, l9):
    i9 = ld i;
    check L189() else D52();
  L253():
    total7 = ld total;
    check L255() else D76();
  L254():
    r143 = dyn base19(<lang `-`(`[`(total, 2), `[`(total, 1))>, <lang `-`(`[`(total, 4), `[`(total, 3))>);
    goto L53(i48, dx67, dx68, r143);
  L276():
    dr48 = tryDispatchBuiltin.0("[<-", l24, r157);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L278() else L277(i53, r157, dr48);
  L277(i77, r159, l26):
    i80 = ld i;
    check L279() else D83();
  L284():
    p9 = prom<V +>{
      _SSenv8 = ld `.SSenv`;
      _SSenv9 = force? _SSenv8;
      checkMissing(_SSenv9);
      c67 = `is.object`(_SSenv9);
      if c67 then L1() else L2(_SSenv9);
    L0(dx138):
      return dx138;
    L1():
      dr50 = tryDispatchBuiltin.1("$", _SSenv9);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(_SSenv11):
      r165 = `$`(_SSenv11, <sym par.list>);
      goto L0(r165);
    L3():
      dx137 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx137);
    };
    r167 = dyn par3(p9);
    check L285() else D88();
  L308():
    _valid_screens6 = ld `.valid.screens`;
    check L310() else D95();
  L309():
    r178 = dyn base21(<sym .valid.screens>, <sym new.screens>);
    goto L67(r178);
  D52():
    deopt 207 [i6, r112, l9, r110, i9];
  D53():
    deopt 211 [i8, figs15];
  D76():
    deopt 309 [i48, dx67, dx68, total7];
  D83():
    deopt 342 [i77, r159, l26, r157, i80];
  D88():
    deopt 363 [i84, r167];
  D95():
    deopt 394 [_valid_screens6];
  D98():
    deopt 401 [max_screen6];
  L58(i75, dx133, dx134, r153):
    rep_int7 = ldf `rep.int` in base;
    r155 = dyn rep_int7(r144, r153);
    check L275() else D82();
  L188():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L35(i2, dx26);
  L189():
    i10 = force? i9;
    ____ = ldf `[[<-` in base;
    r115 = dyn ____(l9, r110, i10);
    goto L35(i6, r115);
  L190():
    figs16 = force? figs15;
    checkMissing(figs16);
    c46 = `is.object`(figs16);
    if c46 then L191() else L192(i8, figs16);
  L255():
    total8 = force? total7;
    checkMissing(total8);
    c59 = `is.object`(total8);
    if c59 then L256() else L257(i48, dx67, dx68, total8);
  L272():
    c64 = ldf c in base;
    r154 = dyn c64(2.0, 2.0);
    check L274() else D81();
  L273():
    r152 = dyn base20(2.0, 2.0);
    goto L58(i56, dx79, dx80, r152);
  L278():
    dx135 = getTryDispatchBuiltinValue(dr48);
    goto L59(i53, dx135);
  L279():
    i81 = force? i80;
    ___ = ldf `[<-` in base;
    r162 = dyn ___(l24, i81, <missing>, r157);
    goto L59(i77, r162);
  L285():
    l28 = ld `split.screens`;
    c68 = `is.object`(l28);
    if c68 then L286() else L287(i84, r167, l28);
  L310():
    _valid_screens7 = force? _valid_screens6;
    checkMissing(_valid_screens7);
    new_screens6 = ld `new.screens`;
    check L311() else D96();
  L313():
    max_screen7 = force? max_screen6;
    checkMissing(max_screen7);
    r181 = `+`(max_screen7, 1.0);
    st `cur.screen` = r181;
    goto L40();
  D81():
    deopt 336 [i56, dx79, dx80, r154];
  D82():
    deopt 338 [i75, dx133, dx134, r155];
  D96():
    deopt 396 [new_screens6];
  L36(i14, dx29):
    l10 = ld `split.screens`;
    c47 = `is.object`(l10);
    if c47 then L195() else L196(i14, dx29, l10, dx29, l10);
  L54(i60, dx88, dx89, dx90):
    total11 = ld total;
    check L259() else D77();
  L62(i90, dx140):
    st `split.screens` = dx140;
    figs23 = ld figs;
    check L290() else D90();
  L191():
    dr24 = tryDispatchBuiltin.1("[", figs16);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L193() else L192(i8, dr24);
  L192(i12, figs18):
    i15 = ld i;
    check L194() else D54();
  L256():
    dr40 = tryDispatchBuiltin.1("[", total8);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L258() else L257(i48, dx67, dx68, dr40);
  L257(i58, dx83, dx84, total10):
    __11 = ldf `[` in base;
    r145 = dyn __11(total10, 2);
    goto L54(i58, dx83, dx84, r145);
  L274():
    goto L58(i56, dx79, dx80, r154);
  L275():
    goto L52(i75, dx133, dx134, r155);
  L286():
    dr52 = tryDispatchBuiltin.0("[[<-", l28, r167);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L288() else L287(i84, r167, dr52);
  L287(i88, r169, l30):
    i91 = ld i;
    check L289() else D89();
  L311():
    new_screens7 = force? new_screens6;
    checkMissing(new_screens7);
    c73 = ldf c in base;
    r180 = dyn c73(_valid_screens7, new_screens7);
    check L312() else D97();
  D54():
    deopt 213 [i12, figs18, i15];
  D77():
    deopt 313 [i60, dx88, dx89, dx90, total11];
  D89():
    deopt 365 [i88, r169, l30, r167, i91];
  D90():
    deopt 369 [i90, figs23];
  D97():
    deopt 399 [r180];
  L37(i20, dx37, l16, dx38, dx39):
    c48 = `is.object`(dx39);
    if c48 then L200() else L201(i20, dx37, l16, dx39);
  L193():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L36(i8, dx28);
  L194():
    i16 = force? i15;
    __6 = ldf `[` in base;
    r116 = dyn __6(figs16, i16, <missing>);
    goto L36(i12, r116);
  L195():
    dr26 = tryDispatchBuiltin.1("[[", l10);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L197() else L196(i14, dx29, l10, dx29, dr26);
  L196(i18, dx32, l13, dx33, l14):
    i21 = ld i;
    check L198() else D55();
  L258():
    dx87 = getTryDispatchBuiltinValue(dr40);
    goto L54(i48, dx67, dx68, dx87);
  L259():
    total12 = force? total11;
    checkMissing(total12);
    c60 = `is.object`(total12);
    if c60 then L260() else L261(i60, dx88, dx89, dx90, total12);
  L288():
    dx139 = getTryDispatchBuiltinValue(dr52);
    goto L62(i84, dx139);
  L289():
    i92 = force? i91;
    ____2 = ldf `[[<-` in base;
    r172 = dyn ____2(l30, r167, i92);
    goto L62(i88, r172);
  L290():
    figs24 = force? figs23;
    checkMissing(figs24);
    c69 = `is.object`(figs24);
    if c69 then L291() else L292(i90, figs24);
  L312():
    goto L67(r180);
  D55():
    deopt 220 [i18, dx32, l13, dx33, l14, i21];
  L55(i64, dx101, dx102, dx103, dx104):
    r147 = `-`(dx103, dx104);
    total15 = ld total;
    check L263() else D78();
  L63(i96, dx142):
    l31 = ld `split.screens`;
    c70 = `is.object`(l31);
    if c70 then L296() else L297(i96, dx142, l31, dx142, l31);
  L197():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L37(i14, dx29, l10, dx29, dx36);
  L198():
    i22 = force? i21;
    __7 = ldf `[[` in base;
    r117 = dyn __7(l14, i22);
    goto L37(i18, dx32, l13, dx33, r117);
  L199(i26, dx46, l20, dx47):
    c49 = `is.object`(l20);
    if c49 then L203() else L204(i26, dx46, l20);
  L200():
    dr28 = tryDispatchBuiltin.0("$<-", dx39, dx38);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L202() else L201(i20, dx37, l16, dr28);
  L201(i24, dx42, l18, dx43):
    r118 = `$<-`(dx43, <sym fig>, dx38);
    goto L199(i24, dx42, l18, r118);
  L260():
    dr42 = tryDispatchBuiltin.1("[", total12);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L262() else L261(i60, dx88, dx89, dx90, dr42);
  L261(i62, dx94, dx95, dx96, total14):
    __12 = ldf `[` in base;
    r146 = dyn __12(total14, 1);
    goto L55(i62, dx94, dx95, dx96, r146);
  L291():
    dr54 = tryDispatchBuiltin.1("[", figs24);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L293() else L292(i90, dr54);
  L292(i94, figs26):
    i97 = ld i;
    check L294() else D91();
  D78():
    deopt 319 [i64, dx101, dx102, total15];
  D91():
    deopt 371 [i94, figs26, i97];
  L38(i30, dx53):
    st `split.screens` = dx53;
    goto L34(i30);
  L64(i102, dx150, l37, dx151, dx152):
    c71 = `is.object`(dx152);
    if c71 then L301() else L302(i102, dx150, l37, dx152);
  L202():
    dx45 = getTryDispatchBuiltinValue(dr28);
    goto L199(i20, dx37, l16, dx45);
  L203():
    dr30 = tryDispatchBuiltin.0("[[<-", l20, dx47);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L205() else L204(i26, dx46, dr30);
  L204(i28, dx49, l22):
    i31 = ld i;
    check L206() else D56();
  L262():
    dx100 = getTryDispatchBuiltinValue(dr42);
    goto L55(i60, dx88, dx89, dx90, dx100);
  L263():
    total16 = force? total15;
    checkMissing(total16);
    c61 = `is.object`(total16);
    if c61 then L264() else L265(i64, dx101, dx102, total16);
  L293():
    dx141 = getTryDispatchBuiltinValue(dr54);
    goto L63(i90, dx141);
  L294():
    i98 = force? i97;
    checkMissing(i98);
    max_screen4 = ld `max.screen`;
    check L295() else D92();
  L296():
    dr56 = tryDispatchBuiltin.1("[[", l31);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L298() else L297(i96, dx142, l31, dx142, dr56);
  L297(i100, dx145, l34, dx146, l35):
    i103 = ld i;
    check L299() else D93();
  D56():
    deopt 225 [i28, dx49, l22, dx47, i31];
  D92():
    deopt 372 [i94, figs26, i98, max_screen4];
  D93():
    deopt 380 [i100, dx145, l34, dx146, l35, i103];
  L56(i68, dx112, dx113, dx114):
    total19 = ld total;
    check L267() else D79();
  L205():
    dx51 = getTryDispatchBuiltinValue(dr30);
    goto L38(i26, dx51);
  L206():
    i32 = force? i31;
    ____1 = ldf `[[<-` in base;
    r119 = dyn ____1(l22, dx47, i32);
    goto L38(i28, r119);
  L264():
    dr44 = tryDispatchBuiltin.1("[", total16);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L266() else L265(i64, dx101, dx102, dr44);
  L265(i66, dx107, dx108, total18):
    __13 = ldf `[` in base;
    r148 = dyn __13(total18, 4);
    goto L56(i66, dx107, dx108, r148);
  L295():
    max_screen5 = force? max_screen4;
    checkMissing(max_screen5);
    r173 = `-`(i98, max_screen5);
    __15 = ldf `[` in base;
    r174 = dyn __15(figs24, r173, <missing>);
    goto L63(i94, r174);
  L298():
    dx149 = getTryDispatchBuiltinValue(dr56);
    goto L64(i96, dx142, l31, dx142, dx149);
  L299():
    i104 = force? i103;
    __16 = ldf `[[` in base;
    r175 = dyn __16(l35, i104);
    goto L64(i100, dx145, l34, dx146, r175);
  L300(i108, dx159, l41, dx160):
    c72 = `is.object`(l41);
    if c72 then L304() else L305(i108, dx159, l41);
  L301():
    dr58 = tryDispatchBuiltin.0("$<-", dx152, dx151);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L303() else L302(i102, dx150, l37, dr58);
  L302(i106, dx155, l39, dx156):
    r176 = `$<-`(dx156, <sym fig>, dx151);
    goto L300(i106, dx155, l39, r176);
  D79():
    deopt 323 [i68, dx112, dx113, dx114, total19];
  L65(i112, dx166):
    st `split.screens` = dx166;
    goto L61(i112);
  L266():
    dx111 = getTryDispatchBuiltinValue(dr44);
    goto L56(i64, dx101, dx102, dx111);
  L267():
    total20 = force? total19;
    checkMissing(total20);
    c62 = `is.object`(total20);
    if c62 then L268() else L269(i68, dx112, dx113, dx114, total20);
  L303():
    dx158 = getTryDispatchBuiltinValue(dr58);
    goto L300(i102, dx150, l37, dx158);
  L304():
    dr60 = tryDispatchBuiltin.0("[[<-", l41, dx160);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L306() else L305(i108, dx159, dr60);
  L305(i110, dx162, l43):
    i113 = ld i;
    check L307() else D94();
  D94():
    deopt 385 [i110, dx162, l43, dx160, i113];
  L57(i72, dx125, dx126, dx127, dx128):
    r150 = `-`(dx127, dx128);
    c63 = ldf c in base;
    r151 = dyn c63(r147, r150);
    check L271() else D80();
  L268():
    dr46 = tryDispatchBuiltin.1("[", total20);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L270() else L269(i68, dx112, dx113, dx114, dr46);
  L269(i70, dx118, dx119, dx120, total22):
    __14 = ldf `[` in base;
    r149 = dyn __14(total22, 3);
    goto L57(i70, dx118, dx119, dx120, r149);
  L306():
    dx164 = getTryDispatchBuiltinValue(dr60);
    goto L65(i108, dx164);
  L307():
    i114 = force? i113;
    ____3 = ldf `[[<-` in base;
    r177 = dyn ____3(l43, dx160, i114);
    goto L65(i110, r177);
  D80():
    deopt 330 [i72, dx125, dx126, r151];
  L270():
    dx124 = getTryDispatchBuiltinValue(dr46);
    goto L57(i68, dx112, dx113, dx114, dx124);
  L271():
    goto L53(i72, dx125, dx126, r151);
  }
}