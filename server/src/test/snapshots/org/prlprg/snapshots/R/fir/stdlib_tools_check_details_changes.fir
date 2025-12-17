fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2993524045;
    st check_details_changes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2993524045(new, old, outputs) {
  (reg new:*, reg old:*, reg outputs:*) -+> V { var new:*, var old:*, var outputs:*, reg outputs_isMissing:L, reg outputs_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg new1:*, reg new2:V, reg inherits:cls, reg r5:V, reg r6:V, reg c1:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg old1:*, reg old2:V, reg inherits1:cls, reg r11:V, reg r12:V, reg c2:L, reg stop1:cls, reg r13:V, reg intersect:cls, reg old3:*, reg old4:V, reg c3:L, reg old6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg p:p(V +), reg new3:*, reg new4:V, reg c4:L, reg new6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg p1:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg packages:*, reg packages1:V, reg length:cls, reg r22:V, reg r23:V, reg c5:L, reg list2DF:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg character:cls, reg r26:V, reg character1:cls, reg r27:V, reg character2:cls, reg r28:V, reg character3:cls, reg r29:V, reg list:cls, reg r30:V, reg p2:p(V +), reg r32:V, reg check_details_changes_classes:*, reg check_details_changes_classes1:V, reg l:*, reg class__:cls, reg r33:V, reg db:*, reg db1:V, reg merge:cls, reg old7:*, reg old8:V, reg c6:L, reg old10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg old16:V, reg r39:V, reg old17:*, reg old18:V, reg c7:L, reg old21:V, reg old22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg old24:V, reg dx7:V, reg r40:V, reg packages2:*, reg packages3:V, reg match:cls, reg r41:V, reg is_na:cls, reg r42:V, reg r43:V, reg __:cls, reg r44:V, reg p3:p(V +), reg new7:*, reg new8:V, reg c8:L, reg new10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg new16:V, reg r49:V, reg new17:*, reg new18:V, reg c9:L, reg new21:V, reg new22:V, reg dr10:V, reg dc5:L, reg dx10:V, reg new24:V, reg dx11:V, reg r50:V, reg packages4:*, reg packages5:V, reg match1:cls, reg r51:V, reg is_na1:cls, reg r52:V, reg r53:V, reg __1:cls, reg r54:V, reg p4:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg c10:cls, reg r58:V, reg p5:p(V +), reg r60:V, reg lapply:cls, reg split:cls, reg db2:*, reg db3:V, reg p6:p(V +), reg db4:*, reg db5:V, reg c11:L, reg db7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r62:V, reg p7:p(V +), reg r64:V, reg p8:p(V +), reg r66:cls, reg p9:p(V +), reg r68:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p10:p(V +), reg chunks:*, reg chunks1:V, reg p11:p(V +), reg r71:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg db8:*, reg db9:V, reg c12:L, reg db11:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r76:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r77:V, reg r78:V, reg c13:cls, reg r79:V, reg match2:cls, reg r80:V, reg is_na2:cls, reg r81:V, reg r82:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r83:V, reg r84:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r85:V, reg r86:V, reg db12:*, reg db13:V, reg c14:L, reg db15:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r87:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg r89:V, reg c15:cls, reg r90:V, reg match3:cls, reg r91:V, reg is_na3:cls, reg r92:V, reg r93:V, reg db16:*, reg db17:V, reg c16:L, reg db19:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg x_issue:*, reg x_issue1:V, reg y_issue:*, reg y_issue1:V, reg r94:V, reg __2:cls, reg r95:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r96:V, reg r97:V, reg db20:*, reg db21:V, reg c17:L, reg db23:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r98:V, reg as_character:cls, reg r99:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg db24:*, reg db25:V, reg c18:L, reg db27:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r102:V, reg as_character1:cls, reg r103:V, reg outputs1:*, reg outputs2:V, reg c19:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg r105:V, reg db28:*, reg db29:V, reg c20:L, reg db31:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r106:V, reg nzchar:cls, reg r107:V, reg sprintf:cls, reg sx:*, reg sx1:V, reg c21:L, reg sx3:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg ind:*, reg ind1:V, reg __3:cls, reg r108:V, reg p12:p(V +), reg gsub:cls, reg ox:*, reg ox1:V, reg c22:L, reg ox3:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg ind2:*, reg ind3:V, reg __4:cls, reg r110:V, reg p13:p(V +), reg r112:V, reg p14:p(V +), reg r114:V, reg l1:*, reg c23:L, reg r116:V, reg l3:*, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r119:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r120:V, reg r121:V, reg db32:*, reg db33:V, reg c24:L, reg db35:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r122:V, reg nzchar1:cls, reg r123:V, reg sprintf1:cls, reg sy:*, reg sy1:V, reg c25:L, reg sy3:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg ind6:*, reg ind7:V, reg __5:cls, reg r124:V, reg p15:p(V +), reg gsub1:cls, reg oy:*, reg oy1:V, reg c26:L, reg oy3:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg ind8:*, reg ind9:V, reg __6:cls, reg r126:V, reg p16:p(V +), reg r128:V, reg p17:p(V +), reg r130:V, reg l4:*, reg c27:L, reg r132:V, reg l6:*, reg dr38:V, reg dc19:L, reg dx38:V, reg r134:V, reg dx39:V, reg ind10:*, reg ind11:V, reg ___1:cls, reg r135:V, reg l7:*, reg c28:L, reg r138:S, reg l9:*, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r145:V, reg r146:S, reg l12:*, reg r147:S, reg r148:V, reg db36:*, reg db37:V, reg c29:L, reg r151:S, reg l14:*, reg r152:S, reg db39:V, reg dr42:V, reg dc21:L, reg dx42:V, reg r155:S, reg l16:*, reg r156:S, reg dx43:V, reg r157:V, reg is_na4:cls, reg r158:V, reg ___2:cls, reg r159:V, reg l17:*, reg c30:L, reg r161:S, reg l19:*, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r168:V, reg r169:S, reg l22:*, reg r170:S, reg r171:V, reg db40:*, reg db41:V, reg c31:L, reg r174:S, reg l24:*, reg r175:S, reg db43:V, reg dr46:V, reg dc23:L, reg dx46:V, reg r178:S, reg l26:*, reg r179:S, reg dx47:V, reg r180:V, reg is_na5:cls, reg r181:V, reg ___3:cls, reg r182:V, reg outputs3:*, reg outputs4:V, reg c32:L, reg _canonicalize_quotes:cls, reg sx4:*, reg sx5:V, reg p18:p(V +), reg r184:V, reg _canonicalize_quotes1:cls, reg sy4:*, reg sy5:V, reg p19:p(V +), reg r186:V, reg r187:V, reg r188:V, reg sx6:*, reg sx7:V, reg sy6:*, reg sy7:V, reg r189:V, reg cbind:cls, reg db44:*, reg db45:V, reg c33:L, reg dr48:V, reg dc24:L, reg dx48:V, reg dx49:V, reg ind12:*, reg ind13:V, reg __7:cls, reg r190:V, reg p20:p(V +), reg sx8:*, reg sx9:V, reg c34:L, reg sx11:V, reg dr50:V, reg dc25:L, reg dx50:V, reg dx51:V, reg ind14:*, reg ind15:V, reg __8:cls, reg r192:V, reg p21:p(V +), reg sy8:*, reg sy9:V, reg c35:L, reg sy11:V, reg dr52:V, reg dc26:L, reg dx52:V, reg dx53:V, reg ind16:*, reg ind17:V, reg __9:cls, reg r194:V, reg p22:p(V +), reg r196:V, reg db48:*, reg db49:V, reg c36:L, reg db51:V, reg dr54:V, reg dc27:L, reg dx54:V, reg dx55:V, reg r197:V, reg db52:*, reg db53:V, reg c37:L, reg dx57:V, reg db55:V, reg dr56:V, reg dc28:L, reg dx59:V, reg dx60:V, reg dx61:V, reg r198:V, reg r199:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r200:V, reg r201:V, reg ind18:*, reg ind19:V, reg any:cls, reg r202:V, reg c38:L, reg sprintf2:cls, reg db56:*, reg db57:V, reg c39:L, reg db59:V, reg dr58:V, reg dc29:L, reg dx62:V, reg dx63:V, reg r203:V, reg c40:L, reg dx65:V, reg dr60:V, reg dc30:L, reg dx66:V, reg dx67:V, reg ind20:*, reg ind21:V, reg __10:cls, reg r204:V, reg p23:p(V +), reg db60:*, reg db61:V, reg c41:L, reg db63:V, reg dr62:V, reg dc31:L, reg dx68:V, reg dx69:V, reg r206:V, reg c42:L, reg dx71:V, reg dr64:V, reg dc32:L, reg dx72:V, reg dx73:V, reg ind22:*, reg ind23:V, reg __11:cls, reg r207:V, reg p24:p(V +), reg db64:*, reg db65:V, reg c43:L, reg db67:V, reg dr66:V, reg dc33:L, reg dx74:V, reg dx75:V, reg r209:V, reg c44:L, reg dx77:V, reg dr68:V, reg dc34:L, reg dx78:V, reg dx79:V, reg ind24:*, reg ind25:V, reg __12:cls, reg r210:V, reg p25:p(V +), reg r212:V, reg l27:*, reg c45:L, reg r215:V, reg l30:*, reg r216:V, reg l31:*, reg dr70:V, reg dc35:L, reg dx80:V, reg r219:V, reg l33:*, reg r220:V, reg dx81:V, reg r221:V, reg c46:L, reg r223:V, reg l35:*, reg dx83:V, reg dr72:V, reg dc36:L, reg dx84:V, reg r225:V, reg l37:*, reg dx85:V, reg ind26:*, reg ind27:V, reg ___4:cls, reg r226:V, reg c47:L, reg r228:V, reg l39:*, reg dr74:V, reg dc37:L, reg dx86:V, reg r230:V, reg dx87:V, reg r231:V, reg db68:*, reg db69:V, reg c48:L, reg db71:V, reg dr76:V, reg dc38:L, reg dx88:V, reg dx89:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r233:V, reg db74:V, reg r234:V, reg c49:cls, reg r235:V, reg __13:cls, reg r236:V, reg check_details_changes_classes2:*, reg check_details_changes_classes3:V, reg l40:*, reg class__1:cls, reg r237:V, reg db75:*, reg db76:V |
    mkenv;
    st new = new;
    st old = old;
    outputs_isMissing = missing.0(outputs);
    if outputs_isMissing then L0(FALSE) else L0(outputs);
  L0(outputs_orDefault):
    st outputs = outputs_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L1(r1):
    st check_details_changes_classes = r1;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L38():
    c = ldf c in base;
    r2 = dyn c("check_details_changes", "data.frame");
    check L40() else D0();
  L39():
    r = dyn base("check_details_changes", "data.frame");
    goto L1(r);
  D0():
    deopt 5 [r2];
  L2(r4):
    r6 = `!`(r4);
    c1 = `as.logical`(r6);
    if c1 then L45() else L3();
  L40():
    goto L1(r2);
  L41():
    new1 = ld new;
    check L43() else D1();
  L42():
    r3 = dyn base1(<sym new>, "check_details");
    goto L2(r3);
  D1():
    deopt 9 [new1];
  L3():
    goto L4();
  L4():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L43():
    new2 = force? new1;
    checkMissing(new2);
    inherits = ldf inherits in base;
    r5 = dyn inherits(new2, "check_details", FALSE);
    check L44() else D2();
  L45():
    stop = ldf stop;
    check L46() else D3();
  D2():
    deopt 14 [r5];
  D3():
    deopt 17 [];
  L5(r10):
    r12 = `!`(r10);
    c2 = `as.logical`(r12);
    if c2 then L53() else L6();
  L44():
    goto L2(r5);
  L46():
    r7 = dyn stop("wrong class");
    check L47() else D4();
  L49():
    old1 = ld old;
    check L51() else D5();
  L50():
    r9 = dyn base2(<sym old>, "check_details");
    goto L5(r9);
  D4():
    deopt 19 [r7];
  D5():
    deopt 24 [old1];
  L6():
    goto L7();
  L7():
    intersect = ldf intersect;
    check L57() else D9();
  L47():
    goto L4();
  L51():
    old2 = force? old1;
    checkMissing(old2);
    inherits1 = ldf inherits in base;
    r11 = dyn inherits1(old2, "check_details", FALSE);
    check L52() else D6();
  L53():
    stop1 = ldf stop;
    check L54() else D7();
  D6():
    deopt 29 [r11];
  D7():
    deopt 32 [];
  D9():
    deopt 38 [];
  L52():
    goto L5(r11);
  L54():
    r13 = dyn stop1("wrong class");
    check L55() else D8();
  L57():
    p = prom<V +>{
      old3 = ld old;
      old4 = force? old3;
      checkMissing(old4);
      c3 = `is.object`(old4);
      if c3 then L1() else L2(old4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", old4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(old6):
      r15 = `$`(old6, <sym Package>);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      new3 = ld new;
      new4 = force? new3;
      checkMissing(new4);
      c4 = `is.object`(new4);
      if c4 then L1() else L2(new4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", new4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(new6):
      r17 = `$`(new6, <sym Package>);
      goto L0(r17);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r19 = dyn intersect(p, p1);
    check L58() else D10();
  D8():
    deopt 34 [r13];
  D10():
    deopt 41 [r19];
  L55():
    goto L7();
  L58():
    st packages = r19;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L8(r21):
    r23 = `!`(r21);
    c5 = `as.logical`(r23);
    if c5 then L63() else L9();
  L59():
    packages = ld packages;
    check L61() else D11();
  L60():
    r20 = dyn base3(<sym packages>);
    goto L8(r20);
  D11():
    deopt 45 [packages];
  L9():
    merge = ldf merge;
    check L72() else D19();
  L61():
    packages1 = force? packages;
    checkMissing(packages1);
    length = ldf length in base;
    r22 = dyn length(packages1);
    check L62() else D12();
  L63():
    list2DF = ldf list2DF;
    check L64() else D13();
  D12():
    deopt 48 [r22];
  D13():
    deopt 51 [];
  D19():
    deopt 68 [];
  L62():
    goto L8(r22);
  L64():
    p2 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      character = ldf character;
      r26 = dyn character();
      character1 = ldf character;
      r27 = dyn character1();
      character2 = ldf character;
      r28 = dyn character2();
      character3 = ldf character;
      r29 = dyn character3();
      list = ldf list in base;
      r30 = dyn list(r26, r27, r28, r29);
      goto L0(r30);
    L2():
      r24 = dyn base4[Package, Check, Old, New](<lang character()>, <lang character()>, <lang character()>, <lang character()>);
      goto L0(r24);
    };
    r32 = dyn list2DF(p2);
    check L65() else D14();
  L72():
    p3 = prom<V +>{
      old7 = ld old;
      old8 = force? old7;
      checkMissing(old8);
      c6 = `is.object`(old8);
      if c6 then L3() else L4(old8);
    L0(dx5):
      return dx5;
    L3():
      dr4 = tryDispatchBuiltin.1("[", old8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L5() else L4(dr4);
    L4(old10):
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L6() else L7();
    L1(r37):
      r43 = `!`(r37);
      __ = ldf `[` in base;
      r44 = dyn __(old8, r43, <missing>);
      goto L0(r44);
    L5():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L6():
      sym6 = ldf match;
      base6 = ldf match in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L8() else L9();
    L7():
      r36 = dyn base5(<lang match(`$`(old, Package), packages)>);
      goto L1(r36);
    L2(old16, r39):
      is_na = ldf `is.na` in base;
      r42 = dyn is_na(r39);
      goto L1(r42);
    L8():
      old17 = ld old;
      old18 = force? old17;
      checkMissing(old18);
      c7 = `is.object`(old18);
      if c7 then L11() else L12(old10, old18);
    L9():
      r38 = dyn base6(<lang `$`(old, Package)>, <sym packages>);
      goto L2(old10, r38);
    L10(old24, dx7):
      packages2 = ld packages;
      packages3 = force? packages2;
      checkMissing(packages3);
      match = ldf match in base;
      r41 = dyn match(dx7, packages3, NA_INT, NULL);
      goto L2(old24, r41);
    L11():
      dr6 = tryDispatchBuiltin.1("$", old18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L13() else L12(old10, dr6);
    L12(old21, old22):
      r40 = `$`(old22, <sym Package>);
      goto L10(old21, r40);
    L13():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L10(old10, dx6);
    };
    p4 = prom<V +>{
      new7 = ld new;
      new8 = force? new7;
      checkMissing(new8);
      c8 = `is.object`(new8);
      if c8 then L3() else L4(new8);
    L0(dx9):
      return dx9;
    L3():
      dr8 = tryDispatchBuiltin.1("[", new8);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L5() else L4(dr8);
    L4(new10):
      sym7 = ldf `is.na`;
      base7 = ldf `is.na` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L6() else L7();
    L1(r47):
      r53 = `!`(r47);
      __1 = ldf `[` in base;
      r54 = dyn __1(new8, r53, <missing>);
      goto L0(r54);
    L5():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    L6():
      sym8 = ldf match;
      base8 = ldf match in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L8() else L9();
    L7():
      r46 = dyn base7(<lang match(`$`(new, Package), packages)>);
      goto L1(r46);
    L2(new16, r49):
      is_na1 = ldf `is.na` in base;
      r52 = dyn is_na1(r49);
      goto L1(r52);
    L8():
      new17 = ld new;
      new18 = force? new17;
      checkMissing(new18);
      c9 = `is.object`(new18);
      if c9 then L11() else L12(new10, new18);
    L9():
      r48 = dyn base8(<lang `$`(new, Package)>, <sym packages>);
      goto L2(new10, r48);
    L10(new24, dx11):
      packages4 = ld packages;
      packages5 = force? packages4;
      checkMissing(packages5);
      match1 = ldf match in base;
      r51 = dyn match1(dx11, packages5, NA_INT, NULL);
      goto L2(new24, r51);
    L11():
      dr10 = tryDispatchBuiltin.1("$", new18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L13() else L12(new10, dr10);
    L12(new21, new22):
      r50 = `$`(new22, <sym Package>);
      goto L10(new21, r50);
    L13():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L10(new10, dx10);
    };
    p5 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      c10 = ldf c in base;
      r58 = dyn c10("Package", "Check");
      goto L0(r58);
    L2():
      r56 = dyn base9("Package", "Check");
      goto L0(r56);
    };
    r60 = dyn merge[, , by, all](p3, p4, p5, TRUE);
    check L73() else D20();
  D14():
    deopt 53 [r32];
  D20():
    deopt 75 [r60];
  L65():
    st db = r32;
    check_details_changes_classes = ld check_details_changes_classes;
    check L66() else D15();
  L73():
    st db = r60;
    lapply = ldf lapply;
    check L74() else D21();
  D15():
    deopt 55 [check_details_changes_classes];
  D21():
    deopt 78 [];
  L66():
    check_details_changes_classes1 = force? check_details_changes_classes;
    checkMissing(check_details_changes_classes1);
    l = ld db;
    class__ = ldf `class<-`;
    check L67() else D16();
  L74():
    p8 = prom<V +>{
      split = ldf split;
      p6 = prom<V +>{
        db2 = ld db;
        db3 = force? db2;
        checkMissing(db3);
        return db3;
      };
      p7 = prom<V +>{
        db4 = ld db;
        db5 = force? db4;
        checkMissing(db5);
        c11 = `is.object`(db5);
        if c11 then L1() else L2(db5);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", db5);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(db7):
        r62 = `$`(db7, <sym Package>);
        goto L0(r62);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r64 = dyn split(p6, p7);
      return r64;
    };
    p9 = prom<V +>{
      r66 = clos inner3708401697;
      return r66;
    };
    r68 = dyn lapply(p8, p9);
    check L75() else D22();
  D16():
    deopt 58 [check_details_changes_classes1, l, check_details_changes_classes1];
  D22():
    deopt 81 [r68];
  L67():
    r33 = dyn class__(l, NULL, check_details_changes_classes1);
    check L68() else D17();
  L75():
    st chunks = r68;
    do_call = ldf `do.call`;
    check L76() else D23();
  D17():
    deopt 60 [check_details_changes_classes1, r33];
  D23():
    deopt 84 [];
  L68():
    st db = r33;
    db = ld db;
    check L69() else D18();
  L76():
    p10 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p11 = prom<V +>{
      chunks = ld chunks;
      chunks1 = force? chunks;
      checkMissing(chunks1);
      return chunks1;
    };
    r71 = dyn do_call(p10, p11);
    check L77() else D24();
  D18():
    deopt 62 [db];
  D24():
    deopt 87 [r71];
  L69():
    db1 = force? db;
    checkMissing(db1);
    popenv;
    return db1;
  L77():
    st db = r71;
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L78() else L79();
  L11(r73):
    r82 = `!`(r73);
    st `x.issue` = r82;
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L92() else L93();
  L78():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L80() else L81();
  L79():
    r72 = dyn base10(<lang match(`$`(db, Status.x), c("NOTE", "WARNING", "ERROR", "FAILURE"))>);
    goto L11(r72);
  L12(r75):
    is_na2 = ldf `is.na` in base;
    r81 = dyn is_na2(r75);
    check L91() else D28();
  L14(r84):
    r93 = `!`(r84);
    st `y.issue` = r93;
    db16 = ld db;
    check L106() else D33();
  L80():
    db8 = ld db;
    check L82() else D25();
  L81():
    r74 = dyn base11(<lang `$`(db, Status.x)>, <lang c("NOTE", "WARNING", "ERROR", "FAILURE")>);
    goto L12(r74);
  L92():
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L94() else L95();
  L93():
    r83 = dyn base13(<lang match(`$`(db, Status.y), c("NOTE", "WARNING", "ERROR", "FAILURE"))>);
    goto L14(r83);
  D25():
    deopt 93 [db8];
  D28():
    deopt 109 [r81];
  D33():
    deopt 135 [db16];
  L15(r86):
    is_na3 = ldf `is.na` in base;
    r92 = dyn is_na3(r86);
    check L105() else D32();
  L82():
    db9 = force? db8;
    checkMissing(db9);
    c12 = `is.object`(db9);
    if c12 then L84() else L85(db9);
  L91():
    goto L11(r81);
  L94():
    db12 = ld db;
    check L96() else D29();
  L95():
    r85 = dyn base14(<lang `$`(db, Status.y)>, <lang c("NOTE", "WARNING", "ERROR", "FAILURE")>);
    goto L15(r85);
  L106():
    db17 = force? db16;
    checkMissing(db17);
    c16 = `is.object`(db17);
    if c16 then L107() else L108(db17);
  D29():
    deopt 116 [db12];
  D32():
    deopt 132 [r92];
  L17(dx19):
    st db = dx19;
    sym16 = ldf `as.character`;
    base16 = ldf `as.character` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L112() else L113();
  L83(dx15):
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L87() else L88();
  L84():
    dr14 = tryDispatchBuiltin.1("$", db9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L86() else L85(dr14);
  L85(db11):
    r76 = `$`(db11, <sym Status.x>);
    goto L83(r76);
  L96():
    db13 = force? db12;
    checkMissing(db13);
    c14 = `is.object`(db13);
    if c14 then L98() else L99(db13);
  L105():
    goto L14(r92);
  L107():
    dr18 = tryDispatchBuiltin.1("[", db17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L109() else L108(dr18);
  L108(db19):
    x_issue = ld `x.issue`;
    check L110() else D34();
  D34():
    deopt 137 [db19, x_issue];
  L13(r78):
    match2 = ldf match in base;
    r80 = dyn match2(dx15, r78, NA_INT, NULL);
    check L90() else D27();
  L18(r97):
    st sx = r97;
    sym17 = ldf `as.character`;
    base17 = ldf `as.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L120() else L121();
  L86():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L83(dx14);
  L87():
    c13 = ldf c in base;
    r79 = dyn c13("NOTE", "WARNING", "ERROR", "FAILURE");
    check L89() else D26();
  L88():
    r77 = dyn base12("NOTE", "WARNING", "ERROR", "FAILURE");
    goto L13(r77);
  L97(dx17):
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L101() else L102();
  L98():
    dr16 = tryDispatchBuiltin.1("$", db13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L100() else L99(dr16);
  L99(db15):
    r87 = `$`(db15, <sym Status.y>);
    goto L97(r87);
  L109():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L17(dx18);
  L110():
    x_issue1 = force? x_issue;
    checkMissing(x_issue1);
    y_issue = ld `y.issue`;
    check L111() else D35();
  L112():
    db20 = ld db;
    check L114() else D36();
  L113():
    r96 = dyn base16(<lang `$`(db, Status.x)>);
    goto L18(r96);
  D26():
    deopt 103 [r79];
  D27():
    deopt 107 [r80];
  D35():
    deopt 138 [db19, x_issue1, y_issue];
  D36():
    deopt 147 [db20];
  L16(r89):
    match3 = ldf match in base;
    r91 = dyn match3(dx17, r89, NA_INT, NULL);
    check L104() else D31();
  L19(r101):
    st sy = r101;
    outputs1 = ld outputs;
    check L128() else D40();
  L89():
    goto L13(r79);
  L90():
    goto L12(r80);
  L100():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L97(dx16);
  L101():
    c15 = ldf c in base;
    r90 = dyn c15("NOTE", "WARNING", "ERROR", "FAILURE");
    check L103() else D30();
  L102():
    r88 = dyn base15("NOTE", "WARNING", "ERROR", "FAILURE");
    goto L16(r88);
  L111():
    y_issue1 = force? y_issue;
    checkMissing(y_issue1);
    r94 = `||`(x_issue1, y_issue1);
    __2 = ldf `[` in base;
    r95 = dyn __2(db17, r94, <missing>);
    goto L17(r95);
  L114():
    db21 = force? db20;
    checkMissing(db21);
    c17 = `is.object`(db21);
    if c17 then L116() else L117(db21);
  L120():
    db24 = ld db;
    check L122() else D38();
  L121():
    r100 = dyn base17(<lang `$`(db, Status.y)>);
    goto L19(r100);
  D30():
    deopt 126 [r90];
  D31():
    deopt 130 [r91];
  D38():
    deopt 155 [db24];
  D40():
    deopt 161 [outputs1];
  L103():
    goto L16(r90);
  L104():
    goto L15(r91);
  L115(dx21):
    as_character = ldf `as.character` in base;
    r99 = dyn as_character(dx21);
    check L119() else D37();
  L116():
    dr20 = tryDispatchBuiltin.1("$", db21);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L118() else L117(dr20);
  L117(db23):
    r98 = `$`(db23, <sym Status.x>);
    goto L115(r98);
  L122():
    db25 = force? db24;
    checkMissing(db25);
    c18 = `is.object`(db25);
    if c18 then L124() else L125(db25);
  L128():
    outputs2 = force? outputs1;
    checkMissing(outputs2);
    c19 = `as.logical`(outputs2);
    if c19 then L129() else L20();
  D37():
    deopt 151 [r99];
  L20():
    goto L25();
  L25():
    l7 = ld sx;
    c28 = `is.object`(l7);
    if c28 then L159() else L160("", l7);
  L118():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L115(dx20);
  L119():
    goto L18(r99);
  L123(dx23):
    as_character1 = ldf `as.character` in base;
    r103 = dyn as_character1(dx23);
    check L127() else D39();
  L124():
    dr22 = tryDispatchBuiltin.1("$", db25);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L126() else L125(dr22);
  L125(db27):
    r102 = `$`(db27, <sym Status.y>);
    goto L123(r102);
  L129():
    sym18 = ldf nzchar;
    base18 = ldf nzchar in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L130() else L131();
  D39():
    deopt 159 [r103];
  L21(r105):
    st ind = r105;
    sprintf = ldf sprintf;
    check L138() else D43();
  L26(dx41):
    st sx = dx41;
    l17 = ld sy;
    c30 = `is.object`(l17);
    if c30 then L170() else L171("", l17);
  L126():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L123(dx22);
  L127():
    goto L19(r103);
  L130():
    db28 = ld db;
    check L132() else D41();
  L131():
    r104 = dyn base18(<lang `<-`(ox, `$`(db, Output.x))>);
    goto L21(r104);
  L159():
    dr40 = tryDispatchBuiltin.0("[<-", l7, "");
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L161() else L160("", dr40);
  L160(r138, l9):
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L162() else L163();
  D41():
    deopt 165 [db28];
  D43():
    deopt 173 [];
  L27(r146, l12, r147, r148):
    ___2 = ldf `[<-` in base;
    r159 = dyn ___2(l12, r147, r148);
    goto L26(r159);
  L28(dx45):
    st sy = dx45;
    outputs3 = ld outputs;
    check L181() else D55();
  L132():
    db29 = force? db28;
    checkMissing(db29);
    c20 = `is.object`(db29);
    if c20 then L134() else L135(db29);
  L138():
    p12 = prom<V +>{
      sx = ld sx;
      sx1 = force? sx;
      checkMissing(sx1);
      c21 = `is.object`(sx1);
      if c21 then L1() else L2(sx1);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", sx1);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(sx3):
      ind = ld ind;
      ind1 = force? ind;
      __3 = ldf `[` in base;
      r108 = dyn __3(sx3, ind1);
      goto L0(r108);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p14 = prom<V +>{
      gsub = ldf gsub;
      p13 = prom<V +>{
        ox = ld ox;
        ox1 = force? ox;
        checkMissing(ox1);
        c22 = `is.object`(ox1);
        if c22 then L1() else L2(ox1);
      L0(dx29):
        return dx29;
      L1():
        dr28 = tryDispatchBuiltin.1("[", ox1);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(ox3):
        ind2 = ld ind;
        ind3 = force? ind2;
        __4 = ldf `[` in base;
        r110 = dyn __4(ox3, ind3);
        goto L0(r110);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx28);
      };
      r112 = dyn gsub[, , , fixed]("\n", "\n  ", p13, TRUE);
      return r112;
    };
    r114 = dyn sprintf("%s\n  %s", p12, p14);
    check L139() else D44();
  L161():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L26(dx40);
  L162():
    db36 = ld db;
    check L164() else D51();
  L163():
    r145 = dyn base20(<lang `$`(db, Status.x)>);
    goto L27(r138, l9, "", r145);
  L170():
    dr44 = tryDispatchBuiltin.0("[<-", l17, "");
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L172() else L171("", dr44);
  L171(r161, l19):
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L173() else L174();
  D44():
    deopt 177 [r114];
  D51():
    deopt 210 [r138, l9, "", db36];
  D55():
    deopt 229 [outputs3];
  L29(r169, l22, r170, r171):
    ___3 = ldf `[<-` in base;
    r182 = dyn ___3(l22, r170, r171);
    goto L28(r182);
  L133(dx25):
    st ox = dx25;
    nzchar = ldf nzchar in base;
    r107 = dyn nzchar(dx25);
    check L137() else D42();
  L134():
    dr24 = tryDispatchBuiltin.1("$", db29);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L136() else L135(dr24);
  L135(db31):
    r106 = `$`(db31, <sym Output.x>);
    goto L133(r106);
  L139():
    l1 = ld sx;
    c23 = `is.object`(l1);
    if c23 then L140() else L141(r114, l1);
  L164():
    db37 = force? db36;
    checkMissing(db37);
    c29 = `is.object`(db37);
    if c29 then L166() else L167(r138, l9, "", db37);
  L172():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L28(dx44);
  L173():
    db40 = ld db;
    check L175() else D53();
  L174():
    r168 = dyn base21(<lang `$`(db, Status.y)>);
    goto L29(r161, l19, "", r168);
  L181():
    outputs4 = force? outputs3;
    checkMissing(outputs4);
    c32 = `as.logical`(outputs4);
    if c32 then L182() else L30();
  D42():
    deopt 170 [r107];
  D53():
    deopt 222 [r161, l19, "", db40];
  L22(dx31):
    st sx = dx31;
    sym19 = ldf nzchar;
    base19 = ldf nzchar in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L144() else L145();
  L30():
    sx6 = ld sx;
    check L188() else D60();
  L31(r188):
    st ind = r188;
    cbind = ldf cbind;
    check L190() else D62();
  L136():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L133(dx24);
  L137():
    goto L21(r107);
  L140():
    dr30 = tryDispatchBuiltin.0("[<-", l1, r114);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L142() else L141(r114, dr30);
  L141(r116, l3):
    ind4 = ld ind;
    check L143() else D45();
  L165(r155, l16, r156, dx43):
    is_na4 = ldf `is.na` in base;
    r158 = dyn is_na4(dx43);
    check L169() else D52();
  L166():
    dr42 = tryDispatchBuiltin.1("$", db37);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L168() else L167(r138, l9, "", dr42);
  L167(r151, l14, r152, db39):
    r157 = `$`(db39, <sym Status.x>);
    goto L165(r151, l14, r152, r157);
  L175():
    db41 = force? db40;
    checkMissing(db41);
    c31 = `is.object`(db41);
    if c31 then L177() else L178(r161, l19, "", db41);
  L182():
    _canonicalize_quotes = ldf `.canonicalize_quotes`;
    check L183() else D56();
  D45():
    deopt 179 [r116, l3, r114, ind4];
  D52():
    deopt 214 [r155, l16, r156, r158];
  D56():
    deopt 232 [];
  D60():
    deopt 239 [sx6];
  D62():
    deopt 245 [];
  L23(r121):
    st ind = r121;
    sprintf1 = ldf sprintf;
    check L152() else D48();
  L142():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L22(dx30);
  L143():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r119 = dyn ___(l3, r114, ind5);
    goto L22(r119);
  L144():
    db32 = ld db;
    check L146() else D46();
  L145():
    r120 = dyn base19(<lang `<-`(oy, `$`(db, Output.y))>);
    goto L23(r120);
  L168():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L165(r138, l9, "", dx42);
  L169():
    goto L27(r155, l16, r156, r158);
  L176(r178, l26, r179, dx47):
    is_na5 = ldf `is.na` in base;
    r181 = dyn is_na5(dx47);
    check L180() else D54();
  L177():
    dr46 = tryDispatchBuiltin.1("$", db41);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L179() else L178(r161, l19, "", dr46);
  L178(r174, l24, r175, db43):
    r180 = `$`(db43, <sym Status.y>);
    goto L176(r174, l24, r175, r180);
  L183():
    p18 = prom<V +>{
      sx4 = ld sx;
      sx5 = force? sx4;
      checkMissing(sx5);
      return sx5;
    };
    r184 = dyn _canonicalize_quotes(p18);
    check L184() else D57();
  L188():
    sx7 = force? sx6;
    checkMissing(sx7);
    sy6 = ld sy;
    check L189() else D61();
  L190():
    p20 = prom<V +>{
      db44 = ld db;
      db45 = force? db44;
      checkMissing(db45);
      c33 = `is.object`(db45);
      if c33 then L1() else L2();
    L0(dx49):
      return dx49;
    L1():
      dr48 = tryDispatchBuiltin.1("[", db45);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2();
    L2():
      ind12 = ld ind;
      ind13 = force? ind12;
      __7 = ldf `[` in base;
      r190 = dyn __7(db45, ind13, <missing>);
      goto L0(r190);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx48);
    };
    p21 = prom<V +>{
      sx8 = ld sx;
      sx9 = force? sx8;
      checkMissing(sx9);
      c34 = `is.object`(sx9);
      if c34 then L1() else L2(sx9);
    L0(dx51):
      return dx51;
    L1():
      dr50 = tryDispatchBuiltin.1("[", sx9);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(sx11):
      ind14 = ld ind;
      ind15 = force? ind14;
      __8 = ldf `[` in base;
      r192 = dyn __8(sx11, ind15);
      goto L0(r192);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx50);
    };
    p22 = prom<V +>{
      sy8 = ld sy;
      sy9 = force? sy8;
      checkMissing(sy9);
      c35 = `is.object`(sy9);
      if c35 then L1() else L2(sy9);
    L0(dx53):
      return dx53;
    L1():
      dr52 = tryDispatchBuiltin.1("[", sy9);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(sy11):
      ind16 = ld ind;
      ind17 = force? ind16;
      __9 = ldf `[` in base;
      r194 = dyn __9(sy11, ind17);
      goto L0(r194);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx52);
    };
    r196 = dyn cbind[, Old, New, stringsAsFactors](p20, p21, p22, FALSE);
    check L191() else D63();
  D46():
    deopt 185 [db32];
  D48():
    deopt 193 [];
  D54():
    deopt 226 [r178, l26, r179, r181];
  D57():
    deopt 234 [r184];
  D61():
    deopt 240 [sx7, sy6];
  D63():
    deopt 253 [r196];
  L146():
    db33 = force? db32;
    checkMissing(db33);
    c24 = `is.object`(db33);
    if c24 then L148() else L149(db33);
  L152():
    p15 = prom<V +>{
      sy = ld sy;
      sy1 = force? sy;
      checkMissing(sy1);
      c25 = `is.object`(sy1);
      if c25 then L1() else L2(sy1);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("[", sy1);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(sy3):
      ind6 = ld ind;
      ind7 = force? ind6;
      __5 = ldf `[` in base;
      r124 = dyn __5(sy3, ind7);
      goto L0(r124);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    p17 = prom<V +>{
      gsub1 = ldf gsub;
      p16 = prom<V +>{
        oy = ld oy;
        oy1 = force? oy;
        checkMissing(oy1);
        c26 = `is.object`(oy1);
        if c26 then L1() else L2(oy1);
      L0(dx37):
        return dx37;
      L1():
        dr36 = tryDispatchBuiltin.1("[", oy1);
        dc18 = getTryDispatchBuiltinDispatched(dr36);
        if dc18 then L3() else L2(dr36);
      L2(oy3):
        ind8 = ld ind;
        ind9 = force? ind8;
        __6 = ldf `[` in base;
        r126 = dyn __6(oy3, ind9);
        goto L0(r126);
      L3():
        dx36 = getTryDispatchBuiltinValue(dr36);
        goto L0(dx36);
      };
      r128 = dyn gsub1[, , , fixed]("\n", "\n  ", p16, TRUE);
      return r128;
    };
    r130 = dyn sprintf1("%s\n  %s", p15, p17);
    check L153() else D49();
  L179():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L176(r161, l19, "", dx46);
  L180():
    goto L29(r178, l26, r179, r181);
  L184():
    _canonicalize_quotes1 = ldf `.canonicalize_quotes`;
    check L185() else D58();
  L189():
    sy7 = force? sy6;
    checkMissing(sy7);
    r189 = `!=`(sx7, sy7);
    goto L31(r189);
  L191():
    st db = r196;
    db48 = ld db;
    check L192() else D64();
  D49():
    deopt 197 [r130];
  D58():
    deopt 235 [r184];
  D64():
    deopt 255 [db48];
  L147(dx33):
    st oy = dx33;
    nzchar1 = ldf nzchar in base;
    r123 = dyn nzchar1(dx33);
    check L151() else D47();
  L148():
    dr32 = tryDispatchBuiltin.1("$", db33);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L150() else L149(dr32);
  L149(db35):
    r122 = `$`(db35, <sym Output.y>);
    goto L147(r122);
  L153():
    l4 = ld sy;
    c27 = `is.object`(l4);
    if c27 then L154() else L155(r130, l4);
  L185():
    p19 = prom<V +>{
      sy4 = ld sy;
      sy5 = force? sy4;
      checkMissing(sy5);
      return sy5;
    };
    r186 = dyn _canonicalize_quotes1(p19);
    check L186() else D59();
  L192():
    db49 = force? db48;
    checkMissing(db49);
    c36 = `is.object`(db49);
    if c36 then L194() else L195(db49);
  D47():
    deopt 190 [r123];
  D59():
    deopt 237 [r184, r186];
  L24(r134, dx39):
    st sy = dx39;
    goto L25();
  L150():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L147(dx32);
  L151():
    goto L23(r123);
  L154():
    dr38 = tryDispatchBuiltin.0("[<-", l4, r130);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L156() else L155(r130, dr38);
  L155(r132, l6):
    ind10 = ld ind;
    check L157() else D50();
  L186():
    r187 = `!=`(r184, r186);
    goto L31(r187);
  L193(dx55):
    db52 = ld db;
    check L197() else D65();
  L194():
    dr54 = tryDispatchBuiltin.1("$", db49);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L196() else L195(dr54);
  L195(db51):
    r197 = `$`(db51, <sym Version.x>);
    goto L193(r197);
  D50():
    deopt 199 [r132, l6, r130, ind10];
  D65():
    deopt 257 [dx55, db52];
  L156():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L24(r130, dx38);
  L157():
    ind11 = force? ind10;
    ___1 = ldf `[<-` in base;
    r135 = dyn ___1(l6, r130, ind11);
    goto L24(r132, r135);
  L196():
    dx54 = getTryDispatchBuiltinValue(dr54);
    goto L193(dx54);
  L197():
    db53 = force? db52;
    checkMissing(db53);
    c37 = `is.object`(db53);
    if c37 then L199() else L200(dx55, db53);
  L198(dx60, dx61):
    r199 = `!=`(dx60, dx61);
    st ind = r199;
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L202() else L203();
  L199():
    dr56 = tryDispatchBuiltin.1("$", db53);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L201() else L200(dx55, dr56);
  L200(dx57, db55):
    r198 = `$`(db55, <sym Version.y>);
    goto L198(dx57, r198);
  L32(r201):
    c38 = `as.logical`(r201);
    if c38 then L206() else L33();
  L201():
    dx59 = getTryDispatchBuiltinValue(dr56);
    goto L198(dx55, dx59);
  L202():
    ind18 = ld ind;
    check L204() else D66();
  L203():
    r200 = dyn base22(<sym ind>);
    goto L32(r200);
  D66():
    deopt 264 [ind18];
  L33():
    goto L35();
  L35():
    db68 = ld db;
    check L222() else D71();
  L204():
    ind19 = force? ind18;
    checkMissing(ind19);
    any = ldf any in base;
    r202 = dyn any(ind19);
    check L205() else D67();
  L206():
    sprintf2 = ldf sprintf;
    check L207() else D68();
  D67():
    deopt 267 [r202];
  D68():
    deopt 269 [];
  D71():
    deopt 286 [db68];
  L205():
    goto L32(r202);
  L207():
    p23 = prom<V +>{
      db56 = ld db;
      db57 = force? db56;
      checkMissing(db57);
      c39 = `is.object`(db57);
      if c39 then L2() else L3(db57);
    L1(dx63):
      c40 = `is.object`(dx63);
      if c40 then L5() else L6(dx63);
    L2():
      dr58 = tryDispatchBuiltin.1("$", db57);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L4() else L3(dr58);
    L3(db59):
      r203 = `$`(db59, <sym Package>);
      goto L1(r203);
    L0(dx67):
      return dx67;
    L4():
      dx62 = getTryDispatchBuiltinValue(dr58);
      goto L1(dx62);
    L5():
      dr60 = tryDispatchBuiltin.1("[", dx63);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L7() else L6(dr60);
    L6(dx65):
      ind20 = ld ind;
      ind21 = force? ind20;
      __10 = ldf `[` in base;
      r204 = dyn __10(dx65, ind21);
      goto L0(r204);
    L7():
      dx66 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx66);
    };
    p24 = prom<V +>{
      db60 = ld db;
      db61 = force? db60;
      checkMissing(db61);
      c41 = `is.object`(db61);
      if c41 then L2() else L3(db61);
    L1(dx69):
      c42 = `is.object`(dx69);
      if c42 then L5() else L6(dx69);
    L2():
      dr62 = tryDispatchBuiltin.1("$", db61);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L4() else L3(dr62);
    L3(db63):
      r206 = `$`(db63, <sym Version.x>);
      goto L1(r206);
    L0(dx73):
      return dx73;
    L4():
      dx68 = getTryDispatchBuiltinValue(dr62);
      goto L1(dx68);
    L5():
      dr64 = tryDispatchBuiltin.1("[", dx69);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L7() else L6(dr64);
    L6(dx71):
      ind22 = ld ind;
      ind23 = force? ind22;
      __11 = ldf `[` in base;
      r207 = dyn __11(dx71, ind23);
      goto L0(r207);
    L7():
      dx72 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx72);
    };
    p25 = prom<V +>{
      db64 = ld db;
      db65 = force? db64;
      checkMissing(db65);
      c43 = `is.object`(db65);
      if c43 then L2() else L3(db65);
    L1(dx75):
      c44 = `is.object`(dx75);
      if c44 then L5() else L6(dx75);
    L2():
      dr66 = tryDispatchBuiltin.1("$", db65);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L4() else L3(dr66);
    L3(db67):
      r209 = `$`(db67, <sym Version.y>);
      goto L1(r209);
    L0(dx79):
      return dx79;
    L4():
      dx74 = getTryDispatchBuiltinValue(dr66);
      goto L1(dx74);
    L5():
      dr68 = tryDispatchBuiltin.1("[", dx75);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L7() else L6(dr68);
    L6(dx77):
      ind24 = ld ind;
      ind25 = force? ind24;
      __12 = ldf `[` in base;
      r210 = dyn __12(dx77, ind25);
      goto L0(r210);
    L7():
      dx78 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx78);
    };
    r212 = dyn sprintf2("%s [Old version: %s, New version: %s]", p23, p24, p25);
    check L208() else D69();
  L222():
    db69 = force? db68;
    checkMissing(db69);
    c48 = `is.object`(db69);
    if c48 then L223() else L224(db69);
  D69():
    deopt 274 [r212];
  L36(dx89):
    st db = dx89;
    check_details_changes_classes2 = ld check_details_changes_classes;
    check L229() else D73();
  L208():
    l27 = ld db;
    c45 = `is.object`(l27);
    if c45 then L210() else L211(r212, l27, r212, l27);
  L223():
    dr76 = tryDispatchBuiltin.1("[", db69);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L225() else L224(dr76);
  L224(db71):
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L226() else L227();
  D73():
    deopt 298 [check_details_changes_classes2];
  L37(db74, r234):
    __13 = ldf `[` in base;
    r236 = dyn __13(db74, r234);
    goto L36(r236);
  L209(r219, l33, r220, dx81):
    c46 = `is.object`(dx81);
    if c46 then L213() else L214(r219, l33, dx81);
  L210():
    dr70 = tryDispatchBuiltin.1("$", l27);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L212() else L211(r212, l27, r212, dr70);
  L211(r215, l30, r216, l31):
    r221 = `$`(l31, <sym Package>);
    goto L209(r215, l30, r216, r221);
  L225():
    dx88 = getTryDispatchBuiltinValue(dr76);
    goto L36(dx88);
  L226():
    c49 = ldf c in base;
    r235 = dyn c49("Package", "Check", "Old", "New");
    check L228() else D72();
  L227():
    r233 = dyn base23("Package", "Check", "Old", "New");
    goto L37(db71, r233);
  L229():
    check_details_changes_classes3 = force? check_details_changes_classes2;
    checkMissing(check_details_changes_classes3);
    l40 = ld db;
    class__1 = ldf `class<-`;
    check L230() else D74();
  D72():
    deopt 295 [db71, r235];
  D74():
    deopt 301 [check_details_changes_classes3, l40, check_details_changes_classes3];
  L34(r225, l37, dx85):
    c47 = `is.object`(l37);
    if c47 then L218() else L219(r225, l37);
  L212():
    dx80 = getTryDispatchBuiltinValue(dr70);
    goto L209(r212, l27, r212, dx80);
  L213():
    dr72 = tryDispatchBuiltin.0("[<-", dx81, r220);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L215() else L214(r219, l33, dr72);
  L214(r223, l35, dx83):
    ind26 = ld ind;
    check L216() else D70();
  L228():
    goto L37(db71, r235);
  L230():
    r237 = dyn class__1(l40, NULL, check_details_changes_classes3);
    check L231() else D75();
  D70():
    deopt 279 [r223, l35, dx83, r220, ind26];
  D75():
    deopt 303 [check_details_changes_classes3, r237];
  L215():
    dx84 = getTryDispatchBuiltinValue(dr72);
    goto L34(r219, l33, dx84);
  L216():
    ind27 = force? ind26;
    ___4 = ldf `[<-` in base;
    r226 = dyn ___4(dx83, r220, ind27);
    goto L34(r223, l35, r226);
  L217(r230, dx87):
    st db = dx87;
    goto L35();
  L218():
    dr74 = tryDispatchBuiltin.0("$<-", l37, dx85);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L220() else L219(r225, dr74);
  L219(r228, l39):
    r231 = `$<-`(l39, <sym Package>, dx85);
    goto L217(r228, r231);
  L231():
    st db = r237;
    db75 = ld db;
    check L232() else D76();
  D76():
    deopt 305 [db75];
  L220():
    dx86 = getTryDispatchBuiltinValue(dr74);
    goto L217(r225, dx86);
  L232():
    db76 = force? db75;
    checkMissing(db76);
    popenv;
    return db76;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg nrow:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg which:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg e3:*, reg e4:V, reg c:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg is_na:cls, reg r7:V, reg r8:V, reg p1:p(V +), reg r10:V, reg length:cls, reg r11:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg e7:*, reg e8:V, reg c2:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pos:*, reg pos1:V, reg c3:L, reg e12:V, reg pos3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg e14:V, reg dx5:V, reg __:cls, reg r14:V, reg __1:cls, reg r15:V, reg len:*, reg len1:V, reg rep_int:cls, reg r16:V, reg l:*, reg c4:L, reg r18:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r20:V, reg dx7:V, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg which1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg e15:*, reg e16:V, reg c5:L, reg e18:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r27:V, reg is_na1:cls, reg r28:V, reg r29:V, reg p2:p(V +), reg r31:V, reg length1:cls, reg r32:V, reg c6:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg e19:*, reg e20:V, reg c7:L, reg e22:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg pos4:*, reg pos5:V, reg c8:L, reg e24:V, reg pos7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg e26:V, reg dx13:V, reg __2:cls, reg r35:V, reg __3:cls, reg r36:V, reg len2:*, reg len3:V, reg rep_int1:cls, reg r37:V, reg l3:*, reg c9:L, reg r39:V, reg l5:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r41:V, reg dx15:V, reg r42:V, reg e27:*, reg e28:V |
    mkenv;
    st e = e;
    nrow = ldf nrow;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn nrow(p);
    check L13() else D1();
  D1():
    deopt 3 [r1];
  L13():
    st len = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r3):
    c1 = `as.logical`(r3);
    if c1 then L19() else L1();
  L14():
    which = ldf which;
    check L16() else D2();
  L15():
    r2 = dyn base(<lang `<-`(pos, which(`!`(is.na(`$`(e, Version.x)))))>);
    goto L0(r2);
  D2():
    deopt 8 [];
  L1():
    goto L5();
  L5():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L16():
    p1 = prom<V +>{
      sym1 = ldf `is.na`;
      base1 = ldf `is.na` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      r8 = `!`(r5);
      return r8;
    L1():
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      c = `is.object`(e4);
      if c then L4() else L5(e4);
    L2():
      r4 = dyn base1(<lang `$`(e, Version.x)>);
      goto L0(r4);
    L3(dx1):
      is_na = ldf `is.na` in base;
      r7 = dyn is_na(dx1);
      goto L0(r7);
    L4():
      dr = tryDispatchBuiltin.1("$", e4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(e6):
      r6 = `$`(e6, <sym Version.x>);
      goto L3(r6);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    r10 = dyn which(p1);
    check L17() else D3();
  L19():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D3():
    deopt 10 [r10];
  L2(r13):
    l = ld e;
    c4 = `is.object`(l);
    if c4 then L33() else L34(r13, l);
  L6(r24):
    c6 = `as.logical`(r24);
    if c6 then L42() else L7();
  L17():
    st pos = r10;
    length = ldf length in base;
    r11 = dyn length(r10);
    check L18() else D4();
  L20():
    e7 = ld e;
    check L22() else D5();
  L21():
    r12 = dyn base2(<lang `[`(e, `[`(pos, 1), "Version.x")>, <sym len>);
    goto L2(r12);
  L37():
    which1 = ldf which;
    check L39() else D9();
  L38():
    r23 = dyn base3(<lang `<-`(pos, which(`!`(is.na(`$`(e, Version.y)))))>);
    goto L6(r23);
  D4():
    deopt 13 [r11];
  D5():
    deopt 16 [e7];
  D9():
    deopt 37 [];
  L7():
    goto L11();
  L11():
    e27 = ld e;
    check L60() else D16();
  L18():
    goto L0(r11);
  L22():
    e8 = force? e7;
    checkMissing(e8);
    c2 = `is.object`(e8);
    if c2 then L23() else L24(e8);
  L32(r20, dx7):
    st e = dx7;
    goto L5();
  L33():
    dr6 = tryDispatchBuiltin.0("$<-", l, r13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L35() else L34(r13, dr6);
  L34(r18, l2):
    r21 = `$<-`(l2, <sym Version.x>, r13);
    goto L32(r18, r21);
  L39():
    p2 = prom<V +>{
      sym4 = ldf `is.na`;
      base4 = ldf `is.na` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r26):
      r29 = `!`(r26);
      return r29;
    L1():
      e15 = ld e;
      e16 = force? e15;
      checkMissing(e16);
      c5 = `is.object`(e16);
      if c5 then L4() else L5(e16);
    L2():
      r25 = dyn base4(<lang `$`(e, Version.y)>);
      goto L0(r25);
    L3(dx9):
      is_na1 = ldf `is.na` in base;
      r28 = dyn is_na1(dx9);
      goto L0(r28);
    L4():
      dr8 = tryDispatchBuiltin.1("$", e16);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(e18):
      r27 = `$`(e18, <sym Version.y>);
      goto L3(r27);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L3(dx8);
    };
    r31 = dyn which1(p2);
    check L40() else D10();
  L42():
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  D10():
    deopt 39 [r31];
  D16():
    deopt 63 [e27];
  L3(dx3):
    len = ld len;
    check L30() else D7();
  L8(r34):
    l3 = ld e;
    c9 = `is.object`(l3);
    if c9 then L56() else L57(r34, l3);
  L23():
    dr2 = tryDispatchBuiltin.1("[", e8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(e10):
    pos = ld pos;
    check L26() else D6();
  L35():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L32(r13, dx6);
  L40():
    st pos = r31;
    length1 = ldf length in base;
    r32 = dyn length1(r31);
    check L41() else D11();
  L43():
    e19 = ld e;
    check L45() else D12();
  L44():
    r33 = dyn base5(<lang `[`(e, `[`(pos, 1), "Version.y")>, <sym len>);
    goto L8(r33);
  L60():
    e28 = force? e27;
    checkMissing(e28);
    popenv;
    return e28;
  D6():
    deopt 18 [e10, pos];
  D7():
    deopt 25 [len];
  D11():
    deopt 42 [r32];
  D12():
    deopt 45 [e19];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L26():
    pos1 = force? pos;
    checkMissing(pos1);
    c3 = `is.object`(pos1);
    if c3 then L27() else L28(e10, pos1);
  L30():
    len1 = force? len;
    checkMissing(len1);
    rep_int = ldf `rep.int` in base;
    r16 = dyn rep_int(dx3, len1);
    check L31() else D8();
  L41():
    goto L6(r32);
  L45():
    e20 = force? e19;
    checkMissing(e20);
    c7 = `is.object`(e20);
    if c7 then L46() else L47(e20);
  L55(r41, dx15):
    st e = dx15;
    goto L11();
  L56():
    dr14 = tryDispatchBuiltin.0("$<-", l3, r34);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L58() else L57(r34, dr14);
  L57(r39, l5):
    r42 = `$<-`(l5, <sym Version.y>, r34);
    goto L55(r39, r42);
  D8():
    deopt 28 [r16];
  L4(e14, dx5):
    __1 = ldf `[` in base;
    r15 = dyn __1(e14, dx5, "Version.x");
    goto L3(r15);
  L9(dx11):
    len2 = ld len;
    check L53() else D14();
  L27():
    dr4 = tryDispatchBuiltin.1("[", pos1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(e10, dr4);
  L28(e12, pos3):
    __ = ldf `[` in base;
    r14 = dyn __(pos3, 1);
    goto L4(e12, r14);
  L31():
    goto L2(r16);
  L46():
    dr10 = tryDispatchBuiltin.1("[", e20);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L48() else L47(dr10);
  L47(e22):
    pos4 = ld pos;
    check L49() else D13();
  L58():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L55(r34, dx14);
  D13():
    deopt 47 [e22, pos4];
  D14():
    deopt 54 [len2];
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(e10, dx4);
  L48():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx10);
  L49():
    pos5 = force? pos4;
    checkMissing(pos5);
    c8 = `is.object`(pos5);
    if c8 then L50() else L51(e22, pos5);
  L53():
    len3 = force? len2;
    checkMissing(len3);
    rep_int1 = ldf `rep.int` in base;
    r37 = dyn rep_int1(dx11, len3);
    check L54() else D15();
  D15():
    deopt 57 [r37];
  L10(e26, dx13):
    __3 = ldf `[` in base;
    r36 = dyn __3(e26, dx13, "Version.y");
    goto L9(r36);
  L50():
    dr12 = tryDispatchBuiltin.1("[", pos5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L52() else L51(e22, dr12);
  L51(e24, pos7):
    __2 = ldf `[` in base;
    r35 = dyn __2(pos7, 1);
    goto L10(e24, r35);
  L54():
    goto L8(r37);
  L52():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L10(e22, dx12);
  }
}