fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4110131579;
    st package_dependencies = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4110131579(packages, db, which, recursive, reverse, verbose) {
  (reg packages:*, reg db:*, reg which:*, reg recursive:*, reg reverse:*, reg verbose:*) -+> V { var packages:*, reg packages_isMissing:L, reg packages_orDefault:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var reverse:*, reg reverse_isMissing:L, reg reverse_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg unique:cls, reg packages1:*, reg packages2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg db1:*, reg db2:V, reg c:V, reg c1:L, reg __:cls, reg r6:V, reg r7:cls, reg r8:V, reg _expand_dependency_type_spec:cls, reg which1:*, reg which2:V, reg p2:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg recursive1:*, reg recursive2:V, reg c2:L, reg c3:L, reg _expand_dependency_type_spec1:cls, reg recursive3:*, reg recursive4:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg which3:*, reg which4:V, reg recursive5:*, reg recursive6:V, reg identical:cls, reg r18:V, reg c4:L, reg r19:V, reg unique1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg fields:*, reg fields1:V, reg recursive7:*, reg recursive8:V, reg c5:cls, reg r22:V, reg p4:p(V +), reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg recursive9:*, reg recursive10:V, reg c6:L, reg r28:V, reg c7:L, reg c9:V, reg recursive11:*, reg recursive12:V, reg r29:V, reg c10:L, reg c11:V, reg c13:L, reg c15:V, reg reverse1:*, reg reverse2:V, reg r30:V, reg c16:L, reg c17:V, reg c19:L, reg c21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg c24:L, reg r32:V, reg packages3:*, reg packages4:V, reg c25:V, reg r33:V, reg c26:L, reg c27:V, reg c29:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg packages5:*, reg packages6:V, reg db3:*, reg db4:V, reg c30:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r36:V, reg match:cls, reg r37:V, reg r38:V, reg duplicated:cls, reg db7:*, reg db8:V, reg c31:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r39:V, reg p5:p(V +), reg r41:V, reg r42:V, reg as_data_frame:cls, reg db11:*, reg db12:V, reg c32:L, reg db14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind:*, reg ind1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg fields2:*, reg fields3:V, reg c33:cls, reg r45:V, reg __3:cls, reg r46:V, reg p6:p(V +), reg r48:V, reg fields4:*, reg fields5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c34:L, reg x:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg i7:I, reg r50:V, reg db18:*, reg db19:V, reg c35:L, reg i9:I, reg db21:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i11:I, reg dx7:V, reg f:*, reg f1:V, reg __4:cls, reg r51:V, reg is_list:cls, reg r52:V, reg r53:V, reg c36:L, reg lapply:cls, reg d:*, reg d1:V, reg p7:p(V +), reg _extract_dependency_package_names:*, reg _extract_dependency_package_names1:V, reg p8:p(V +), reg r56:V, reg l1:*, reg c37:L, reg i15:I, reg r58:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i17:I, reg r60:V, reg dx9:V, reg f2:*, reg f3:V, reg ____:cls, reg r61:V, reg i18:I, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg r64:V, reg recursive13:*, reg recursive14:V, reg c38:L, reg c39:L, reg Recall:cls, reg packages7:*, reg packages8:V, reg p9:p(V +), reg db22:*, reg db23:V, reg p10:p(V +), reg which5:*, reg which6:V, reg p11:p(V +), reg reverse3:*, reg reverse4:V, reg p12:p(V +), reg verbose1:*, reg verbose2:V, reg p13:p(V +), reg r70:V, reg Recall1:cls, reg unique2:cls, reg unlist:cls, reg d_d:*, reg d_d1:V, reg p14:p(V +), reg r72:V, reg p15:p(V +), reg r74:V, reg p16:p(V +), reg db24:*, reg db25:V, reg p17:p(V +), reg recursive15:*, reg recursive16:V, reg p18:p(V +), reg reverse5:*, reg reverse6:V, reg p19:p(V +), reg verbose3:*, reg verbose4:V, reg p20:p(V +), reg r80:V, reg lapply1:cls, reg d_d2:*, reg d_d3:V, reg p21:p(V +), reg r82:cls, reg p22:p(V +), reg r84:V, reg do_call:cls, reg Map:*, reg Map1:V, reg p23:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r88:V, reg r89:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg list:cls, reg r92:V, reg db26:*, reg db27:V, reg c40:L, reg db29:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg which7:*, reg which8:V, reg __5:cls, reg r93:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r94:V, reg r95:V, reg list1:cls, reg r96:V, reg c41:cls, reg r97:V, reg p24:p(V +), reg r99:V, reg lapply2:cls, reg depends:*, reg depends1:V, reg p25:p(V +), reg unique3:*, reg unique4:V, reg p26:p(V +), reg r102:V, reg recursive17:*, reg recursive18:V, reg r103:V, reg c42:L, reg c44:V, reg reverse7:*, reg reverse8:V, reg r104:V, reg c45:L, reg c46:V, reg c48:L, reg db30:*, reg db31:V, reg c49:L, reg db33:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r105:V, reg l4:*, reg names__:cls, reg r106:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r107:V, reg r108:V, reg packages9:*, reg packages10:V, reg c50:V, reg r109:V, reg c51:L, reg depends2:*, reg depends3:V, reg c52:L, reg depends5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r110:V, reg depends8:V, reg r111:V, reg packages11:*, reg packages12:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r112:V, reg depends11:V, reg r113:V, reg depends12:*, reg depends13:V, reg names:cls, reg r114:V, reg match1:cls, reg r115:V, reg __6:cls, reg r116:V, reg packages13:*, reg packages14:V, reg l5:*, reg names__1:cls, reg r117:V, reg depends14:*, reg depends15:V, reg sort:cls, reg unique5:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r120:V, reg r121:V, reg db34:*, reg db35:V, reg c53:L, reg db37:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r122:V, reg unlist1:cls, reg depends16:*, reg depends17:V, reg p27:p(V +), reg r124:V, reg c54:cls, reg r125:V, reg p28:p(V +), reg r127:V, reg p29:p(V +), reg r129:V, reg recursive19:*, reg recursive20:V, reg r130:V, reg c55:L, reg split:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r131:V, reg r132:V, reg db38:*, reg db39:V, reg c56:L, reg db41:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r133:V, reg lengths:cls, reg depends18:*, reg depends19:V, reg p30:p(V +), reg r135:V, reg rep_int:cls, reg r136:V, reg p31:p(V +), reg factor:cls, reg unlist2:cls, reg depends20:*, reg depends21:V, reg p32:p(V +), reg r139:V, reg p33:p(V +), reg all_packages:*, reg all_packages1:V, reg p34:p(V +), reg r142:V, reg p35:p(V +), reg r144:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r145:V, reg r146:V, reg packages16:*, reg packages17:V, reg c57:V, reg r147:V, reg c58:L, reg depends22:*, reg depends23:V, reg c59:L, reg depends25:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r148:V, reg depends28:V, reg r149:V, reg packages18:*, reg packages19:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r150:V, reg depends31:V, reg r151:V, reg depends32:*, reg depends33:V, reg names1:cls, reg r152:V, reg match2:cls, reg r153:V, reg __7:cls, reg r154:V, reg packages20:*, reg packages21:V, reg l6:*, reg names__2:cls, reg r155:V, reg depends34:*, reg depends35:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r158:V, reg r159:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r160:V, reg r161:V, reg db42:*, reg db43:V, reg c60:L, reg db45:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r162:V, reg lengths1:cls, reg depends36:*, reg depends37:V, reg p36:p(V +), reg r164:V, reg rep_int1:cls, reg r165:V, reg all_packages2:*, reg all_packages3:V, reg match3:cls, reg r166:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r167:V, reg r168:V, reg unlist3:cls, reg depends38:*, reg depends39:V, reg p37:p(V +), reg r170:V, reg all_packages4:*, reg all_packages5:V, reg match4:cls, reg r171:V, reg reverse9:*, reg reverse10:V, reg c61:L, reg split1:cls, reg matchP:*, reg matchP1:V, reg p38:p(V +), reg factor1:cls, reg matchD:*, reg matchD1:V, reg p39:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r174:V, reg r175:V, reg all_packages6:*, reg all_packages7:V, reg r176:I, reg p40:p(V +), reg r178:V, reg p41:p(V +), reg r180:V, reg r181:V, reg split2:cls, reg matchD2:*, reg matchD3:V, reg p42:p(V +), reg factor2:cls, reg matchP2:*, reg matchP3:V, reg p43:p(V +), reg sym25:cls, reg base25:cls, reg guard25:L, reg r184:V, reg r185:V, reg all_packages8:*, reg all_packages9:V, reg r186:I, reg p44:p(V +), reg r188:V, reg p45:p(V +), reg r190:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r191:V, reg r192:V, reg packages23:*, reg packages24:V, reg c62:V, reg c63:L, reg reverse11:*, reg reverse12:V, reg c64:L, reg all_packages10:*, reg all_packages11:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r193:V, reg r194:V, reg all_packages12:*, reg all_packages13:V, reg r195:I, reg r196:V, reg db46:*, reg db47:V, reg c65:L, reg db49:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r197:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r198:V, reg r199:V, reg packages25:*, reg packages26:V, reg all_packages14:*, reg all_packages15:V, reg match5:cls, reg r200:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r202:V, reg r203:V, reg packages27:*, reg packages28:V, reg all_packages16:*, reg all_packages17:V, reg match6:cls, reg r204:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r205:V, reg r206:V, reg p_L:*, reg p_L1:V, reg r207:V, reg any:cls, reg r208:V, reg c66:L, reg p_L2:*, reg p_L3:V, reg c67:L, reg p_L5:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg ind2:*, reg ind3:V, reg r209:V, reg __8:cls, reg r210:V, reg tab:*, reg tab1:V, reg c68:L, reg tab3:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg p_L6:*, reg p_L7:V, reg __9:cls, reg r211:V, reg cbind:cls, reg sym31:cls, reg base31:cls, reg guard31:L, reg r212:V, reg r213:V, reg p_L8:*, reg p_L9:V, reg lengths2:cls, reg p_R:*, reg p_R1:V, reg p46:p(V +), reg r215:V, reg rep_int2:cls, reg r216:V, reg p47:p(V +), reg unlist4:cls, reg p_R2:*, reg p_R3:V, reg p48:p(V +), reg r219:V, reg p49:p(V +), reg r221:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r222:V, reg r223:V, reg as_integer:cls, reg r224:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r225:V, reg r226:V, reg pos:*, reg pos1:V, reg length:cls, reg r227:V, reg c69:L, reg c71:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r228:V, reg c74:L, reg r229:V, reg pos2:*, reg pos3:V, reg max:cls, reg r230:V, reg shift:*, reg shift1:V, reg r231:V, reg c75:L, reg c76:V, reg c78:L, reg r232:cls, reg r234:cls, reg verbose5:*, reg verbose6:V, reg c79:L, reg cat:cls, reg ctr:*, reg ctr1:V, reg r235:V, reg p50:p(V +), reg r237:V, reg split3:cls, reg pos4:*, reg pos5:V, reg c80:L, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg __10:cls, reg r239:V, reg p51:p(V +), reg pos8:*, reg pos9:V, reg c81:L, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg __11:cls, reg r241:V, reg p52:p(V +), reg r243:V, reg do_call1:cls, reg rbind:*, reg rbind1:V, reg p53:p(V +), reg Map2:cls, reg r245:cls, reg p54:p(V +), reg p_L10:*, reg p_L11:V, reg p55:p(V +), reg tab4:*, reg tab5:V, reg c82:L, reg tab7:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r248:V, reg tab10:V, reg r249:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r250:V, reg tab13:V, reg r251:V, reg p_L12:*, reg p_L13:V, reg names2:cls, reg r252:V, reg as_integer1:cls, reg r253:V, reg __12:cls, reg r254:V, reg p56:p(V +), reg r256:V, reg p57:p(V +), reg r258:V, reg posunique:cls, reg rbind2:cls, reg pos12:*, reg pos13:V, reg p58:p(V +), reg posunique1:cls, reg new:*, reg new1:V, reg p59:p(V +), reg r261:V, reg p60:p(V +), reg r263:V, reg p61:p(V +), reg r265:V, reg nrow:cls, reg npos:*, reg npos1:V, reg p62:p(V +), reg r267:V, reg nrow1:cls, reg pos14:*, reg pos15:V, reg p63:p(V +), reg r269:V, reg r270:V, reg verbose7:*, reg verbose8:V, reg c83:L, reg cat1:cls, reg nnew:*, reg nnew1:V, reg p64:p(V +), reg r272:V, reg nnew2:*, reg nnew3:V, reg r274:V, reg c84:L, reg npos2:*, reg npos3:V, reg split4:cls, reg all_packages18:*, reg all_packages19:V, reg c85:L, reg all_packages21:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg pos16:*, reg pos17:V, reg c86:L, reg all_packages23:V, reg dr38:V, reg dc19:L, reg dx38:V, reg all_packages25:V, reg dx39:V, reg __13:cls, reg r276:V, reg __14:cls, reg r277:V, reg p65:p(V +), reg factor3:cls, reg all_packages26:*, reg all_packages27:V, reg c87:L, reg all_packages29:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg pos20:*, reg pos21:V, reg c88:L, reg all_packages31:V, reg dr42:V, reg dc21:L, reg dx42:V, reg all_packages33:V, reg dx43:V, reg __15:cls, reg r279:V, reg __16:cls, reg r280:V, reg p66:p(V +), reg packages29:*, reg packages30:V, reg p67:p(V +), reg r283:V, reg p68:p(V +), reg r285:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r286:V, reg r287:V, reg packages31:*, reg packages32:V, reg c89:V, reg r288:V, reg c90:L, reg depends40:*, reg depends41:V, reg c91:L, reg depends43:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r289:V, reg depends46:V, reg r290:V, reg packages33:*, reg packages34:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r291:V, reg depends49:V, reg r292:V, reg depends50:*, reg depends51:V, reg names3:cls, reg r293:V, reg match7:cls, reg r294:V, reg __17:cls, reg r295:V, reg packages35:*, reg packages36:V, reg l7:*, reg names__3:cls, reg r296:V, reg depends52:*, reg depends53:V |
    mkenv;
    packages_isMissing = missing.0(packages);
    if packages_isMissing then L0(NULL) else L0(packages);
  L0(packages_orDefault):
    st packages = packages_orDefault;
    db_isMissing = missing.0(db);
    if db_isMissing then L1(NULL) else L1(db);
  L1(db_orDefault):
    st db = db_orDefault;
    which_isMissing = missing.0(which);
    if which_isMissing then L2("strong") else L2(which);
  L2(which_orDefault):
    st which = which_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L3(FALSE) else L3(recursive);
  L3(recursive_orDefault):
    st recursive = recursive_orDefault;
    reverse_isMissing = missing.0(reverse);
    if reverse_isMissing then L4(FALSE) else L4(reverse);
  L4(reverse_orDefault):
    st reverse = reverse_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L5() else L6(verbose);
  L5():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L6(p);
  L6(verbose_orDefault):
    st verbose = verbose_orDefault;
    unique = ldf unique;
    check L89() else D0();
  D0():
    deopt 1 [];
  L89():
    p1 = prom<V +>{
      packages1 = ld packages;
      packages2 = force? packages1;
      checkMissing(packages2);
      return packages2;
    };
    r3 = dyn unique(p1);
    check L90() else D1();
  D1():
    deopt 3 [r3];
  L90():
    st packages1 = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L91() else L92();
  L7(r5):
    c1 = `as.logical`(r5);
    if c1 then L94() else L8();
  L91():
    db1 = ld db;
    check L93() else D2();
  L92():
    r4 = dyn base(<sym db>);
    goto L7(r4);
  D2():
    deopt 6 [db1];
  L8():
    goto L9();
  L9():
    _expand_dependency_type_spec = ldf `.expand_dependency_type_spec`;
    check L99() else D6();
  L93():
    db2 = force? db1;
    checkMissing(db2);
    c = `==`(db2, NULL);
    goto L7(c);
  L94():
    __ = ldf `::`;
    check L95() else D3();
  D3():
    deopt 10 [];
  D6():
    deopt 20 [];
  L95():
    r6 = dyn __("utils", "available.packages");
    check L96() else D4();
  L99():
    p2 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    r11 = dyn _expand_dependency_type_spec(p2);
    check L100() else D7();
  D4():
    deopt 13 [r6];
  D7():
    deopt 22 [r11];
  L96():
    checkFun.0(r6);
    r7 = r6 as cls;
    r8 = dyn r7();
    check L97() else D5();
  L100():
    st which = r11;
    st fields = r11;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L101() else L102();
  D5():
    deopt 15 [r8];
  L10(r13):
    c3 = `as.logical`(r13);
    if c3 then L104() else L11();
  L97():
    st db = r8;
    goto L9();
  L101():
    recursive1 = ld recursive;
    check L103() else D8();
  L102():
    r12 = dyn base1(<sym recursive>);
    goto L10(r12);
  D8():
    deopt 26 [recursive1];
  L11():
    goto L15();
  L15():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L117() else L118();
  L103():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    c2 = `is.character`(recursive2);
    goto L10(c2);
  L104():
    _expand_dependency_type_spec1 = ldf `.expand_dependency_type_spec`;
    check L105() else D9();
  D9():
    deopt 30 [];
  L16(r27):
    r28 = `!`(r27);
    c7 = `as.logical`(r28);
    if c7 then L120() else L17(c7);
  L105():
    p3 = prom<V +>{
      recursive3 = ld recursive;
      recursive4 = force? recursive3;
      checkMissing(recursive4);
      return recursive4;
    };
    r15 = dyn _expand_dependency_type_spec1(p3);
    check L106() else D10();
  L117():
    recursive9 = ld recursive;
    check L119() else D16();
  L118():
    r26 = dyn base4(<sym recursive>);
    goto L16(r26);
  D10():
    deopt 32 [r15];
  D16():
    deopt 60 [recursive9];
  L17(c9):
    c13 = `as.logical`(c9);
    if c13 then L123() else L18(c13);
  L106():
    st recursive = r15;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L107() else L108();
  L119():
    recursive10 = force? recursive9;
    checkMissing(recursive10);
    c6 = `is.character`(recursive10);
    goto L16(c6);
  L120():
    recursive11 = ld recursive;
    check L121() else D17();
  D17():
    deopt 64 [c7, recursive11];
  L12(r17):
    c4 = `as.logical`(r17);
    if c4 then L112() else L13();
  L18(c15):
    c19 = `as.logical`(c15);
    if c19 then L126() else L19(c19);
  L107():
    which3 = ld which;
    check L109() else D11();
  L108():
    r16 = dyn base2(<sym which>, <sym recursive>);
    goto L12(r16);
  L121():
    recursive12 = force? recursive11;
    checkMissing(recursive12);
    r29 = `!`(recursive12);
    c10 = `as.logical`(r29);
    c11 = `&&`(c7, c10);
    goto L17(c11);
  L123():
    reverse1 = ld reverse;
    check L124() else D18();
  D11():
    deopt 36 [which3];
  D18():
    deopt 68 [c13, reverse1];
  L13():
    unique1 = ldf unique;
    check L114() else D14();
  L14(r19):
    goto L15();
  L19(c21):
    c29 = `as.logical`(c21);
    if c29 then L131() else L21();
  L109():
    which4 = force? which3;
    checkMissing(which4);
    recursive5 = ld recursive;
    check L110() else D12();
  L112():
    st recursive = TRUE;
    goto L14(TRUE);
  L124():
    reverse2 = force? reverse1;
    checkMissing(reverse2);
    r30 = `!`(reverse2);
    c16 = `as.logical`(r30);
    c17 = `&&`(c13, c16);
    goto L18(c17);
  L126():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L127() else L128();
  D12():
    deopt 38 [recursive5];
  D14():
    deopt 53 [];
  L20(c24, r32):
    r33 = `!`(r32);
    c26 = `as.logical`(r33);
    c27 = `&&`(c24, c26);
    goto L19(c27);
  L21():
    duplicated = ldf duplicated;
    check L141() else D23();
  L24(r38):
    st ind = r38;
    as_data_frame = ldf `as.data.frame`;
    check L143() else D25();
  L110():
    recursive6 = force? recursive5;
    checkMissing(recursive6);
    identical = ldf identical in base;
    r18 = dyn identical(which4, recursive6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L111() else D13();
  L114():
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      recursive7 = ld recursive;
      recursive8 = force? recursive7;
      checkMissing(recursive8);
      c5 = ldf c in base;
      r22 = dyn c5(fields1, recursive8);
      goto L0(r22);
    L2():
      r20 = dyn base3(<sym fields>, <sym recursive>);
      goto L0(r20);
    };
    r24 = dyn unique1(p4);
    check L115() else D15();
  L127():
    packages3 = ld packages;
    check L129() else D19();
  L128():
    r31 = dyn base5(<sym packages>);
    goto L20(c19, r31);
  L131():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L132() else L133();
  D13():
    deopt 48 [r18];
  D15():
    deopt 55 [r24];
  D19():
    deopt 73 [c19, packages3];
  D23():
    deopt 93 [];
  D25():
    deopt 99 [];
  L22(r35):
    goto L24(r35);
  L111():
    goto L12(r18);
  L115():
    st fields = r24;
    goto L14(r24);
  L129():
    packages4 = force? packages3;
    checkMissing(packages4);
    c25 = `==`(packages4, NULL);
    goto L20(c19, c25);
  L132():
    packages5 = ld packages1;
    check L134() else D20();
  L133():
    r34 = dyn base6[, , nomatch](<sym packages1>, <lang `[`(db, , "Package")>, 0);
    goto L22(r34);
  L141():
    p5 = prom<V +>{
      db7 = ld db;
      db8 = force? db7;
      checkMissing(db8);
      c31 = `is.object`(db8);
      if c31 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", db8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r39 = dyn __2(db8, <missing>, "Package");
      goto L0(r39);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r41 = dyn duplicated(p5);
    check L142() else D24();
  L143():
    p6 = prom<V +>{
      db11 = ld db;
      db12 = force? db11;
      checkMissing(db12);
      c32 = `is.object`(db12);
      if c32 then L2() else L3(db12);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[", db12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(db14):
      ind = ld ind;
      ind1 = force? ind;
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L5() else L6();
    L1(r44):
      __3 = ldf `[` in base;
      r46 = dyn __3(db12, ind1, r44, FALSE);
      goto L0(r46);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      fields2 = ld fields;
      fields3 = force? fields2;
      checkMissing(fields3);
      c33 = ldf c in base;
      r45 = dyn c33("Package", fields3);
      goto L1(r45);
    L6():
      r43 = dyn base7("Package", <sym fields>);
      goto L1(r43);
    };
    r48 = dyn as_data_frame(p6);
    check L144() else D26();
  D20():
    deopt 80 [packages5];
  D24():
    deopt 95 [r41];
  D26():
    deopt 101 [r48];
  L134():
    packages6 = force? packages5;
    checkMissing(packages6);
    db3 = ld db;
    check L135() else D21();
  L142():
    r42 = `!`(r41);
    goto L24(r42);
  L144():
    st db = r48;
    fields4 = ld fields;
    check L145() else D27();
  D21():
    deopt 82 [db3];
  D27():
    deopt 103 [fields4];
  L135():
    db4 = force? db3;
    checkMissing(db4);
    c30 = `is.object`(db4);
    if c30 then L136() else L137();
  L145():
    fields5 = force? fields4;
    checkMissing(fields5);
    s = toForSeq(fields5);
    l = length(s);
    i = 0;
    goto L25(i);
  L23(dx1):
    match = ldf match in base;
    r37 = dyn match(packages6, dx1, 0, NULL);
    check L139() else D22();
  L25(i1):
    i2 = `+`.1(i1, 1);
    c34 = `<`.1(l, i2);
    if c34 then L146() else L31();
  L136():
    dr = tryDispatchBuiltin.1("[", db4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L138() else L137();
  L137():
    __1 = ldf `[` in base;
    r36 = dyn __1(db4, <missing>, "Package");
    goto L23(r36);
  D22():
    deopt 91 [r37];
  L31():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    sym8 = ldf `is.list`;
    base8 = ldf `is.list` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L147() else L148();
  L138():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L139():
    goto L22(r37);
  L146():
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L163() else L164();
  L26(i7, r50):
    r53 = `!`(r50);
    c36 = `as.logical`(r53);
    if c36 then L155() else L28();
  L32(r64):
    c39 = `as.logical`(r64);
    if c39 then L166() else L33();
  L147():
    db18 = ld db;
    check L149() else D28();
  L148():
    r49 = dyn base8(<lang `<-`(d, `[[`(db, f))>);
    goto L26(i2, r49);
  L163():
    recursive13 = ld recursive;
    check L165() else D34();
  L164():
    r63 = dyn base9(<sym recursive>);
    goto L32(r63);
  D28():
    deopt 107 [i2, db18];
  D34():
    deopt 132 [recursive13];
  L28():
    goto L30(i7);
  L30(i18):
    goto L25(i18);
  L33():
    do_call = ldf `do.call`;
    check L175() else D41();
  L149():
    db19 = force? db18;
    checkMissing(db19);
    c35 = `is.object`(db19);
    if c35 then L150() else L151(i2, db19);
  L155():
    lapply = ldf lapply;
    check L156() else D31();
  L165():
    recursive14 = force? recursive13;
    checkMissing(recursive14);
    c38 = `is.character`(recursive14);
    goto L32(c38);
  L166():
    Recall = ldf Recall;
    check L167() else D35();
  D31():
    deopt 117 [i7];
  D35():
    deopt 136 [];
  D41():
    deopt 164 [];
  L27(i11, dx7):
    st d = dx7;
    is_list = ldf `is.list` in base;
    r52 = dyn is_list(dx7);
    check L154() else D30();
  L150():
    dr6 = tryDispatchBuiltin.1("[[", db19);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L152() else L151(i2, dr6);
  L151(i9, db21):
    f = ld f;
    check L153() else D29();
  L156():
    p7 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p8 = prom<V +>{
      _extract_dependency_package_names = ld `.extract_dependency_package_names`;
      _extract_dependency_package_names1 = force? _extract_dependency_package_names;
      checkMissing(_extract_dependency_package_names1);
      return _extract_dependency_package_names1;
    };
    r56 = dyn lapply(p7, p8);
    check L157() else D32();
  L167():
    p9 = prom<V +>{
      packages7 = ld packages;
      packages8 = force? packages7;
      checkMissing(packages8);
      return packages8;
    };
    p10 = prom<V +>{
      db22 = ld db;
      db23 = force? db22;
      checkMissing(db23);
      return db23;
    };
    p11 = prom<V +>{
      which5 = ld which;
      which6 = force? which5;
      checkMissing(which6);
      return which6;
    };
    p12 = prom<V +>{
      reverse3 = ld reverse;
      reverse4 = force? reverse3;
      checkMissing(reverse4);
      return reverse4;
    };
    p13 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    r70 = dyn Recall(p9, p10, p11, FALSE, p12, p13);
    check L168() else D36();
  L175():
    p23 = prom<V +>{
      Map = ld Map;
      Map1 = force? Map;
      checkMissing(Map1);
      return Map1;
    };
    p24 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L0(r89):
      return r89;
    L4():
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L6() else L7();
    L5():
      r88 = dyn base10(<lang list("c")>, <lang `[`(db, which)>, <lang list(USE.NAMES=FALSE)>);
      goto L0(r88);
    L1(r91):
      db26 = ld db;
      db27 = force? db26;
      checkMissing(db27);
      c40 = `is.object`(db27);
      if c40 then L8() else L9(db27);
    L6():
      list = ldf list in base;
      r92 = dyn list("c");
      goto L1(r92);
    L7():
      r90 = dyn base11("c");
      goto L1(r90);
    L2(dx11):
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L11() else L12();
    L8():
      dr10 = tryDispatchBuiltin.1("[", db27);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L10() else L9(dr10);
    L9(db29):
      which7 = ld which;
      which8 = force? which7;
      __5 = ldf `[` in base;
      r93 = dyn __5(db29, which8);
      goto L2(r93);
    L3(r95):
      c41 = ldf c in base;
      r97 = dyn c41(r91, dx11, r95);
      goto L0(r97);
    L10():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L2(dx10);
    L11():
      list1 = ldf list in base;
      r96 = dyn list1(FALSE);
      goto L3(r96);
    L12():
      r94 = dyn base12[`USE.NAMES`](FALSE);
      goto L3(r94);
    };
    r99 = dyn do_call(p23, p24);
    check L176() else D42();
  D29():
    deopt 109 [i9, db21, f];
  D30():
    deopt 114 [i11, r52];
  D32():
    deopt 120 [i7, r56];
  D36():
    deopt 143 [r70];
  D42():
    deopt 167 [r99];
  L152():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L27(i2, dx6);
  L153():
    f1 = force? f;
    __4 = ldf `[[` in base;
    r51 = dyn __4(db21, f1);
    goto L27(i9, r51);
  L154():
    goto L26(i11, r52);
  L157():
    l1 = ld db;
    c37 = `is.object`(l1);
    if c37 then L158() else L159(i7, r56, l1);
  L168():
    st d_d = r70;
    Recall1 = ldf Recall;
    check L169() else D37();
  L176():
    st depends = r99;
    lapply2 = ldf lapply;
    check L177() else D43();
  D37():
    deopt 146 [];
  D43():
    deopt 170 [];
  L29(i17, r60, dx9):
    st db = dx9;
    goto L30(i17);
  L158():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, r56);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L160() else L159(i7, r56, dr8);
  L159(i15, r58, l3):
    f2 = ld f;
    check L161() else D33();
  L169():
    p16 = prom<V +>{
      unique2 = ldf unique;
      p15 = prom<V +>{
        unlist = ldf unlist;
        p14 = prom<V +>{
          d_d = ld d_d;
          d_d1 = force? d_d;
          checkMissing(d_d1);
          return d_d1;
        };
        r72 = dyn unlist(p14);
        return r72;
      };
      r74 = dyn unique2(p15);
      return r74;
    };
    p17 = prom<V +>{
      db24 = ld db;
      db25 = force? db24;
      checkMissing(db25);
      return db25;
    };
    p18 = prom<V +>{
      recursive15 = ld recursive;
      recursive16 = force? recursive15;
      checkMissing(recursive16);
      return recursive16;
    };
    p19 = prom<V +>{
      reverse5 = ld reverse;
      reverse6 = force? reverse5;
      checkMissing(reverse6);
      return reverse6;
    };
    p20 = prom<V +>{
      verbose3 = ld verbose;
      verbose4 = force? verbose3;
      checkMissing(verbose4);
      return verbose4;
    };
    r80 = dyn Recall1(p16, p17, p18, TRUE, p19, p20);
    check L170() else D38();
  L177():
    p25 = prom<V +>{
      depends = ld depends;
      depends1 = force? depends;
      checkMissing(depends1);
      return depends1;
    };
    p26 = prom<V +>{
      unique3 = ld unique;
      unique4 = force? unique3;
      checkMissing(unique4);
      return unique4;
    };
    r102 = dyn lapply2(p25, p26);
    check L178() else D44();
  D33():
    deopt 122 [i15, r58, l3, r56, f2];
  D38():
    deopt 153 [r80];
  D44():
    deopt 173 [r102];
  L160():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L29(i7, r56, dx8);
  L161():
    f3 = force? f2;
    ____ = ldf `[[<-` in base;
    r61 = dyn ____(l3, r56, f3);
    goto L29(i15, r58, r61);
  L170():
    st d_r = r80;
    lapply1 = ldf lapply;
    check L171() else D39();
  L178():
    st depends = r102;
    recursive17 = ld recursive;
    check L179() else D45();
  D39():
    deopt 156 [];
  D45():
    deopt 175 [recursive17];
  L171():
    p21 = prom<V +>{
      d_d2 = ld d_d;
      d_d3 = force? d_d2;
      checkMissing(d_d3);
      return d_d3;
    };
    p22 = prom<V +>{
      r82 = clos inner3913899244;
      return r82;
    };
    r84 = dyn lapply1(p21, p22);
    check L172() else D40();
  L179():
    recursive18 = force? recursive17;
    checkMissing(recursive18);
    r103 = `!`(recursive18);
    c42 = `as.logical`(r103);
    if c42 then L180() else L35(c42);
  D40():
    deopt 159 [r84];
  L35(c44):
    c48 = `as.logical`(c44);
    if c48 then L183() else L36();
  L172():
    popenv;
    return r84;
  L180():
    reverse7 = ld reverse;
    check L181() else D46();
  D46():
    deopt 178 [c42, reverse7];
  L36():
    sort = ldf sort;
    check L214() else D60();
  L181():
    reverse8 = force? reverse7;
    checkMissing(reverse8);
    r104 = `!`(reverse8);
    c45 = `as.logical`(r104);
    c46 = `&&`(c42, c45);
    goto L35(c46);
  L183():
    db30 = ld db;
    check L184() else D47();
  D47():
    deopt 182 [db30];
  D60():
    deopt 228 [];
  L184():
    db31 = force? db30;
    checkMissing(db31);
    c49 = `is.object`(db31);
    if c49 then L186() else L187(db31);
  L214():
    p29 = prom<V +>{
      unique5 = ldf unique;
      p28 = prom<V +>{
        sym16 = ldf c;
        base16 = ldf c in base;
        guard16 = `==`.4(sym16, base16);
        if guard16 then L1() else L2();
      L0(r121):
        return r121;
      L1():
        db34 = ld db;
        db35 = force? db34;
        checkMissing(db35);
        c53 = `is.object`(db35);
        if c53 then L4() else L5(db35);
      L2():
        r120 = dyn base16(<lang `$`(db, Package)>, <lang unlist(depends)>);
        goto L0(r120);
      L3(dx17):
        unlist1 = ldf unlist;
        p27 = prom<V +>{
          depends16 = ld depends;
          depends17 = force? depends16;
          checkMissing(depends17);
          return depends17;
        };
        r124 = dyn unlist1(p27);
        c54 = ldf c in base;
        r125 = dyn c54(dx17, r124);
        goto L0(r125);
      L4():
        dr16 = tryDispatchBuiltin.1("$", db35);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L6() else L5(dr16);
      L5(db37):
        r122 = `$`(db37, <sym Package>);
        goto L3(r122);
      L6():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L3(dx16);
      };
      r127 = dyn unique5(p28);
      return r127;
    };
    r129 = dyn sort(p29);
    check L215() else D61();
  D61():
    deopt 230 [r129];
  L185(dx13):
    l4 = ld depends;
    names__ = ldf `names<-`;
    check L189() else D48();
  L186():
    dr12 = tryDispatchBuiltin.1("$", db31);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L188() else L187(dr12);
  L187(db33):
    r105 = `$`(db33, <sym Package>);
    goto L185(r105);
  L215():
    st all_packages = r129;
    recursive19 = ld recursive;
    check L216() else D62();
  D48():
    deopt 186 [dx13, l4, dx13];
  D62():
    deopt 232 [recursive19];
  L188():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L185(dx12);
  L189():
    r106 = dyn names__(l4, NULL, dx13);
    check L190() else D49();
  L216():
    recursive20 = force? recursive19;
    checkMissing(recursive20);
    r130 = `!`(recursive20);
    c55 = `as.logical`(r130);
    if c55 then L217() else L44();
  D49():
    deopt 188 [dx13, r106];
  L44():
    sym21 = ldf match;
    base21 = ldf match in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L243() else L244();
  L190():
    st depends = r106;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L191() else L192();
  L217():
    split = ldf split;
    check L218() else D63();
  D63():
    deopt 236 [];
  L37(r108):
    r109 = `!`(r108);
    c51 = `as.logical`(r109);
    if c51 then L194() else L38();
  L52(r159):
    st matchP = r159;
    sym23 = ldf match;
    base23 = ldf match in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L257() else L258();
  L191():
    packages9 = ld packages;
    check L193() else D50();
  L192():
    r107 = dyn base13(<sym packages>);
    goto L37(r107);
  L218():
    p31 = prom<V +>{
      sym17 = ldf `rep.int`;
      base17 = ldf `rep.int` in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r132):
      return r132;
    L1():
      db38 = ld db;
      db39 = force? db38;
      checkMissing(db39);
      c56 = `is.object`(db39);
      if c56 then L4() else L5(db39);
    L2():
      r131 = dyn base17(<lang `$`(db, Package)>, <lang lengths(depends)>);
      goto L0(r131);
    L3(dx19):
      lengths = ldf lengths;
      p30 = prom<V +>{
        depends18 = ld depends;
        depends19 = force? depends18;
        checkMissing(depends19);
        return depends19;
      };
      r135 = dyn lengths(p30);
      rep_int = ldf `rep.int` in base;
      r136 = dyn rep_int(dx19, r135);
      goto L0(r136);
    L4():
      dr18 = tryDispatchBuiltin.1("$", db39);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(db41):
      r133 = `$`(db41, <sym Package>);
      goto L3(r133);
    L6():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx18);
    };
    p35 = prom<V +>{
      factor = ldf factor;
      p33 = prom<V +>{
        unlist2 = ldf unlist;
        p32 = prom<V +>{
          depends20 = ld depends;
          depends21 = force? depends20;
          checkMissing(depends21);
          return depends21;
        };
        r139 = dyn unlist2(p32);
        return r139;
      };
      p34 = prom<V +>{
        all_packages = ld all_packages;
        all_packages1 = force? all_packages;
        checkMissing(all_packages1);
        return all_packages1;
      };
      r142 = dyn factor[, levels](p33, p34);
      return r142;
    };
    r144 = dyn split(p31, p35);
    check L219() else D64();
  L243():
    sym22 = ldf `rep.int`;
    base22 = ldf `rep.int` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L245() else L246();
  L244():
    r158 = dyn base21(<lang rep.int(`$`(db, Package), lengths(depends))>, <sym all_packages>);
    goto L52(r158);
  D50():
    deopt 191 [packages9];
  D64():
    deopt 239 [r144];
  L38():
    goto L42();
  L42():
    depends14 = ld depends;
    check L211() else D59();
  L53(r161):
    all_packages2 = ld all_packages;
    check L255() else D79();
  L54(r168):
    st matchD = r168;
    reverse9 = ld reverse;
    check L263() else D85();
  L193():
    packages10 = force? packages9;
    checkMissing(packages10);
    c50 = `==`(packages10, NULL);
    goto L37(c50);
  L194():
    depends2 = ld depends;
    check L195() else D51();
  L219():
    st depends = r144;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L220() else L221();
  L245():
    db42 = ld db;
    check L247() else D75();
  L246():
    r160 = dyn base22(<lang `$`(db, Package)>, <lang lengths(depends)>);
    goto L53(r160);
  L257():
    unlist3 = ldf unlist;
    check L259() else D81();
  L258():
    r167 = dyn base23(<lang unlist(depends)>, <sym all_packages>);
    goto L54(r167);
  D51():
    deopt 195 [depends2];
  D59():
    deopt 222 [depends14];
  D75():
    deopt 282 [db42];
  D79():
    deopt 291 [all_packages2];
  D81():
    deopt 301 [];
  D85():
    deopt 311 [reverse9];
  L45(r146):
    r147 = `!`(r146);
    c58 = `as.logical`(r147);
    if c58 then L223() else L46();
  L195():
    depends3 = force? depends2;
    checkMissing(depends3);
    c52 = `is.object`(depends3);
    if c52 then L196() else L197(depends3);
  L211():
    depends15 = force? depends14;
    checkMissing(depends15);
    popenv;
    return depends15;
  L220():
    packages16 = ld packages;
    check L222() else D65();
  L221():
    r145 = dyn base18(<sym packages>);
    goto L45(r145);
  L247():
    db43 = force? db42;
    checkMissing(db43);
    c60 = `is.object`(db43);
    if c60 then L249() else L250(db43);
  L255():
    all_packages3 = force? all_packages2;
    checkMissing(all_packages3);
    match3 = ldf match in base;
    r166 = dyn match3(r161, all_packages3, NA_INT, NULL);
    check L256() else D80();
  L259():
    p37 = prom<V +>{
      depends38 = ld depends;
      depends39 = force? depends38;
      checkMissing(depends39);
      return depends39;
    };
    r170 = dyn unlist3(p37);
    check L260() else D82();
  L263():
    reverse10 = force? reverse9;
    checkMissing(reverse10);
    c61 = `as.logical`(reverse10);
    if c61 then L264() else L55();
  D65():
    deopt 242 [packages16];
  D80():
    deopt 296 [r166];
  D82():
    deopt 303 [r170];
  L39(dx15):
    st depends = dx15;
    packages13 = ld packages;
    check L207() else D56();
  L46():
    goto L50();
  L50():
    depends34 = ld depends;
    check L240() else D74();
  L55():
    split2 = ldf split;
    check L268() else D88();
  L56(r181):
    st tab = r181;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L270() else L271();
  L196():
    dr14 = tryDispatchBuiltin.1("[", depends3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L198() else L197(dr14);
  L197(depends5):
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L199() else L200();
  L222():
    packages17 = force? packages16;
    checkMissing(packages17);
    c57 = `==`(packages17, NULL);
    goto L45(c57);
  L223():
    depends22 = ld depends;
    check L224() else D66();
  L248(dx23):
    lengths1 = ldf lengths;
    check L252() else D76();
  L249():
    dr22 = tryDispatchBuiltin.1("$", db43);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L251() else L250(dr22);
  L250(db45):
    r162 = `$`(db45, <sym Package>);
    goto L248(r162);
  L256():
    goto L52(r166);
  L260():
    all_packages4 = ld all_packages;
    check L261() else D83();
  L264():
    split1 = ldf split;
    check L265() else D86();
  D56():
    deopt 213 [packages13];
  D66():
    deopt 246 [depends22];
  D74():
    deopt 273 [depends34];
  D76():
    deopt 286 [];
  D83():
    deopt 304 [all_packages4];
  D86():
    deopt 314 [];
  D88():
    deopt 319 [];
  L40(depends8, r111):
    __6 = ldf `[` in base;
    r116 = dyn __6(depends8, r111);
    goto L39(r116);
  L57(r192):
    c63 = `as.logical`(r192);
    if c63 then L273() else L58();
  L198():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L39(dx14);
  L199():
    packages11 = ld packages;
    check L201() else D52();
  L200():
    r110 = dyn base14(<sym packages>, <lang names(depends)>);
    goto L40(depends5, r110);
  L207():
    packages14 = force? packages13;
    checkMissing(packages14);
    l5 = ld depends;
    names__1 = ldf `names<-`;
    check L208() else D57();
  L224():
    depends23 = force? depends22;
    checkMissing(depends23);
    c59 = `is.object`(depends23);
    if c59 then L225() else L226(depends23);
  L240():
    depends35 = force? depends34;
    checkMissing(depends35);
    popenv;
    return depends35;
  L251():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L248(dx22);
  L252():
    p36 = prom<V +>{
      depends36 = ld depends;
      depends37 = force? depends36;
      checkMissing(depends37);
      return depends37;
    };
    r164 = dyn lengths1(p36);
    check L253() else D77();
  L261():
    all_packages5 = force? all_packages4;
    checkMissing(all_packages5);
    match4 = ldf match in base;
    r171 = dyn match4(r170, all_packages5, NA_INT, NULL);
    check L262() else D84();
  L265():
    p38 = prom<V +>{
      matchP = ld matchP;
      matchP1 = force? matchP;
      checkMissing(matchP1);
      return matchP1;
    };
    p41 = prom<V +>{
      factor1 = ldf factor;
      p39 = prom<V +>{
        matchD = ld matchD;
        matchD1 = force? matchD;
        checkMissing(matchD1);
        return matchD1;
      };
      p40 = prom<V +>{
        sym24 = ldf seq_along;
        base24 = ldf seq_along in base;
        guard24 = `==`.4(sym24, base24);
        if guard24 then L1() else L2();
      L0(r175):
        return r175;
      L1():
        all_packages6 = ld all_packages;
        all_packages7 = force? all_packages6;
        checkMissing(all_packages7);
        r176 = seq_along(all_packages7);
        goto L0(r176);
      L2():
        r174 = dyn base24(<sym all_packages>);
        goto L0(r174);
      };
      r178 = dyn factor1[, levels](p39, p40);
      return r178;
    };
    r180 = dyn split1(p38, p41);
    check L266() else D87();
  L268():
    p42 = prom<V +>{
      matchD2 = ld matchD;
      matchD3 = force? matchD2;
      checkMissing(matchD3);
      return matchD3;
    };
    p45 = prom<V +>{
      factor2 = ldf factor;
      p43 = prom<V +>{
        matchP2 = ld matchP;
        matchP3 = force? matchP2;
        checkMissing(matchP3);
        return matchP3;
      };
      p44 = prom<V +>{
        sym25 = ldf seq_along;
        base25 = ldf seq_along in base;
        guard25 = `==`.4(sym25, base25);
        if guard25 then L1() else L2();
      L0(r185):
        return r185;
      L1():
        all_packages8 = ld all_packages;
        all_packages9 = force? all_packages8;
        checkMissing(all_packages9);
        r186 = seq_along(all_packages9);
        goto L0(r186);
      L2():
        r184 = dyn base25(<sym all_packages>);
        goto L0(r184);
      };
      r188 = dyn factor2[, levels](p43, p44);
      return r188;
    };
    r190 = dyn split2(p42, p45);
    check L269() else D89();
  L270():
    packages23 = ld packages;
    check L272() else D90();
  L271():
    r191 = dyn base26(<sym packages>);
    goto L57(r191);
  D52():
    deopt 199 [depends5, packages11];
  D57():
    deopt 216 [packages14, l5, packages14];
  D77():
    deopt 288 [r164];
  D84():
    deopt 309 [r171];
  D87():
    deopt 317 [r180];
  D89():
    deopt 322 [r190];
  D90():
    deopt 325 [packages23];
  L47(dx21):
    st depends = dx21;
    packages20 = ld packages;
    check L236() else D71();
  L58():
    sym29 = ldf match;
    base29 = ldf match in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L292() else L293();
  L63():
    tab = ld tab;
    check L308() else D105();
  L201():
    packages12 = force? packages11;
    checkMissing(packages12);
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L202() else L203();
  L208():
    r117 = dyn names__1(l5, NULL, packages14);
    check L209() else D58();
  L225():
    dr20 = tryDispatchBuiltin.1("[", depends23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L227() else L226(dr20);
  L226(depends25):
    sym19 = ldf match;
    base19 = ldf match in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L228() else L229();
  L253():
    rep_int1 = ldf `rep.int` in base;
    r165 = dyn rep_int1(dx23, r164);
    check L254() else D78();
  L262():
    goto L54(r171);
  L266():
    goto L56(r180);
  L269():
    goto L56(r190);
  L272():
    packages24 = force? packages23;
    checkMissing(packages24);
    c62 = `==`(packages24, NULL);
    goto L57(c62);
  L273():
    reverse11 = ld reverse;
    check L274() else D91();
  D58():
    deopt 218 [packages14, r117];
  D71():
    deopt 264 [packages20];
  D78():
    deopt 290 [r165];
  D91():
    deopt 328 [reverse11];
  D105():
    deopt 382 [tab];
  L41(depends11, r113):
    match1 = ldf match in base;
    r115 = dyn match1(packages12, r113, NA_INT, NULL);
    check L206() else D55();
  L48(depends28, r149):
    __7 = ldf `[` in base;
    r154 = dyn __7(depends28, r149);
    goto L47(r154);
  L64(r203):
    st p_L = r203;
    sym30 = ldf any;
    base30 = ldf any in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L297() else L298();
  L202():
    depends12 = ld depends;
    check L204() else D53();
  L203():
    r112 = dyn base15(<sym depends>);
    goto L41(depends5, r112);
  L209():
    st depends = r117;
    goto L42();
  L227():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L47(dx20);
  L228():
    packages18 = ld packages;
    check L230() else D67();
  L229():
    r148 = dyn base19(<sym packages>, <lang names(depends)>);
    goto L48(depends25, r148);
  L236():
    packages21 = force? packages20;
    checkMissing(packages21);
    l6 = ld depends;
    names__2 = ldf `names<-`;
    check L237() else D72();
  L254():
    goto L53(r165);
  L274():
    reverse12 = force? reverse11;
    checkMissing(reverse12);
    c64 = `as.logical`(reverse12);
    if c64 then L275() else L59();
  L292():
    packages27 = ld packages1;
    check L294() else D98();
  L293():
    r202 = dyn base29[, , nomatch](<sym packages1>, <sym all_packages>, 0);
    goto L64(r202);
  L308():
    tab1 = force? tab;
    checkMissing(tab1);
    c68 = `is.object`(tab1);
    if c68 then L309() else L310(tab1);
  D53():
    deopt 203 [depends5, depends12];
  D55():
    deopt 210 [depends11, r115];
  D67():
    deopt 250 [depends25, packages18];
  D72():
    deopt 267 [packages21, l6, packages21];
  D98():
    deopt 355 [packages27];
  L59():
    db46 = ld db;
    check L281() else D94();
  L61(r196):
    goto L63();
  L65(r206):
    c66 = `as.logical`(r206);
    if c66 then L301() else L66();
  L68(dx29):
    st p_R = dx29;
    cbind = ldf cbind;
    check L313() else D107();
  L204():
    depends13 = force? depends12;
    checkMissing(depends13);
    names = ldf names in base;
    r114 = dyn names(depends13);
    check L205() else D54();
  L206():
    goto L40(depends11, r115);
  L230():
    packages19 = force? packages18;
    checkMissing(packages19);
    sym20 = ldf names;
    base20 = ldf names in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L231() else L232();
  L237():
    r155 = dyn names__2(l6, NULL, packages21);
    check L238() else D73();
  L275():
    all_packages10 = ld all_packages;
    check L276() else D92();
  L294():
    packages28 = force? packages27;
    checkMissing(packages28);
    all_packages16 = ld all_packages;
    check L295() else D99();
  L297():
    p_L = ld p_L;
    check L299() else D101();
  L298():
    r205 = dyn base30(<lang `<-`(ind, `(`(`==`(p_L, 0)))>);
    goto L65(r205);
  L309():
    dr28 = tryDispatchBuiltin.1("[", tab1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L311() else L310(dr28);
  L310(tab3):
    p_L6 = ld p_L;
    check L312() else D106();
  D54():
    deopt 206 [depends5, r114];
  D73():
    deopt 269 [packages21, r155];
  D92():
    deopt 330 [all_packages10];
  D94():
    deopt 338 [db46];
  D99():
    deopt 357 [all_packages16];
  D101():
    deopt 366 [p_L];
  D106():
    deopt 384 [tab3, p_L6];
  D107():
    deopt 389 [];
  L49(depends31, r151):
    match2 = ldf match in base;
    r153 = dyn match2(packages19, r151, NA_INT, NULL);
    check L235() else D70();
  L66():
    goto L63();
  L205():
    goto L41(depends5, r114);
  L231():
    depends32 = ld depends;
    check L233() else D68();
  L232():
    r150 = dyn base20(<sym depends>);
    goto L49(depends25, r150);
  L238():
    st depends = r155;
    goto L50();
  L276():
    all_packages11 = force? all_packages10;
    checkMissing(all_packages11);
    st packages1 = all_packages11;
    sym27 = ldf seq_along;
    base27 = ldf seq_along in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L277() else L278();
  L281():
    db47 = force? db46;
    checkMissing(db47);
    c65 = `is.object`(db47);
    if c65 then L283() else L284(db47);
  L295():
    all_packages17 = force? all_packages16;
    checkMissing(all_packages17);
    match6 = ldf match in base;
    r204 = dyn match6(packages28, all_packages17, 0, NULL);
    check L296() else D100();
  L299():
    p_L1 = force? p_L;
    checkMissing(p_L1);
    r207 = `==`(p_L1, 0);
    st ind = r207;
    any = ldf any in base;
    r208 = dyn any(r207);
    check L300() else D102();
  L301():
    p_L2 = ld p_L;
    check L302() else D103();
  L311():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L68(dx28);
  L312():
    p_L7 = force? p_L6;
    __9 = ldf `[` in base;
    r211 = dyn __9(tab3, p_L7);
    goto L68(r211);
  L313():
    p47 = prom<V +>{
      sym31 = ldf `rep.int`;
      base31 = ldf `rep.int` in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L1() else L2();
    L0(r213):
      return r213;
    L1():
      p_L8 = ld p_L;
      p_L9 = force? p_L8;
      checkMissing(p_L9);
      lengths2 = ldf lengths;
      p46 = prom<V +>{
        p_R = ld p_R;
        p_R1 = force? p_R;
        checkMissing(p_R1);
        return p_R1;
      };
      r215 = dyn lengths2(p46);
      rep_int2 = ldf `rep.int` in base;
      r216 = dyn rep_int2(p_L9, r215);
      goto L0(r216);
    L2():
      r212 = dyn base31(<sym p_L>, <lang lengths(p_R)>);
      goto L0(r212);
    };
    p49 = prom<V +>{
      unlist4 = ldf unlist;
      p48 = prom<V +>{
        p_R2 = ld p_R;
        p_R3 = force? p_R2;
        checkMissing(p_R3);
        return p_R3;
      };
      r219 = dyn unlist4(p48);
      return r219;
    };
    r221 = dyn cbind(p47, p49);
    check L314() else D108();
  D68():
    deopt 254 [depends25, depends32];
  D70():
    deopt 261 [depends31, r153];
  D100():
    deopt 362 [r204];
  D102():
    deopt 372 [r208];
  D103():
    deopt 373 [p_L2];
  D108():
    deopt 392 [r221];
  L60(r194):
    st p_L = r194;
    goto L61(r194);
  L233():
    depends33 = force? depends32;
    checkMissing(depends33);
    names1 = ldf names in base;
    r152 = dyn names1(depends33);
    check L234() else D69();
  L235():
    goto L48(depends31, r153);
  L277():
    all_packages12 = ld all_packages;
    check L279() else D93();
  L278():
    r193 = dyn base27(<sym all_packages>);
    goto L60(r193);
  L282(dx25):
    st packages1 = dx25;
    sym28 = ldf match;
    base28 = ldf match in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L286() else L287();
  L283():
    dr24 = tryDispatchBuiltin.1("$", db47);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L285() else L284(dr24);
  L284(db49):
    r197 = `$`(db49, <sym Package>);
    goto L282(r197);
  L296():
    goto L64(r204);
  L300():
    goto L65(r208);
  L302():
    p_L3 = force? p_L2;
    checkMissing(p_L3);
    c67 = `is.object`(p_L3);
    if c67 then L303() else L304(p_L3);
  L314():
    st pos = r221;
    st ctr = 0;
    sym32 = ldf `as.integer`;
    base32 = ldf `as.integer` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L315() else L316();
  D69():
    deopt 257 [depends25, r152];
  D93():
    deopt 334 [all_packages12];
  L62(r199):
    st p_L = r199;
    goto L61(r199);
  L67(dx27):
    st p_L = dx27;
    goto L63();
  L69(r223):
    st shift = r223;
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L318() else L319();
  L234():
    goto L49(depends25, r152);
  L279():
    all_packages13 = force? all_packages12;
    checkMissing(all_packages13);
    r195 = seq_along(all_packages13);
    goto L60(r195);
  L285():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L282(dx24);
  L286():
    packages25 = ld packages1;
    check L288() else D95();
  L287():
    r198 = dyn base28(<sym packages1>, <sym all_packages>);
    goto L62(r198);
  L303():
    dr26 = tryDispatchBuiltin.1("[", p_L3);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L305() else L304(dr26);
  L304(p_L5):
    ind2 = ld ind;
    check L306() else D104();
  L315():
    as_integer = ldf `as.integer` in base;
    r224 = dyn as_integer(32768.0);
    check L317() else D109();
  L316():
    r222 = dyn base32(<lang `^`(2.0, 15.0)>);
    goto L69(r222);
  D95():
    deopt 344 [packages25];
  D104():
    deopt 375 [p_L5, ind2];
  D109():
    deopt 402 [r224];
  L70(r226):
    c69 = `as.logical`(r226);
    if c69 then L322() else L71(c69);
  L288():
    packages26 = force? packages25;
    checkMissing(packages26);
    all_packages14 = ld all_packages;
    check L289() else D96();
  L305():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L67(dx26);
  L306():
    ind3 = force? ind2;
    checkMissing(ind3);
    r209 = `!`(ind3);
    __8 = ldf `[` in base;
    r210 = dyn __8(p_L5, r209);
    goto L67(r210);
  L317():
    goto L69(r224);
  L318():
    pos = ld pos;
    check L320() else D110();
  L319():
    r225 = dyn base33(<sym pos>);
    goto L70(r225);
  D96():
    deopt 346 [all_packages14];
  D110():
    deopt 406 [pos];
  L71(c71):
    c78 = `as.logical`(c71);
    if c78 then L329() else L73();
  L289():
    all_packages15 = force? all_packages14;
    checkMissing(all_packages15);
    match5 = ldf match in base;
    r200 = dyn match5(packages26, all_packages15, NA_INT, NULL);
    check L290() else D97();
  L320():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r227 = dyn length(pos1);
    check L321() else D111();
  L322():
    sym34 = ldf max;
    base34 = ldf max in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L323() else L324();
  D97():
    deopt 351 [r200];
  D111():
    deopt 409 [r227];
  L72(c74, r229):
    shift = ld shift;
    check L327() else D114();
  L73():
    r234 = clos inner3913899244;
    st posunique = r234;
    goto L74();
  L74():
    goto L82();
  L290():
    goto L62(r200);
  L321():
    goto L70(r227);
  L323():
    pos2 = ld pos;
    check L325() else D112();
  L324():
    r228 = dyn base34(<sym pos>);
    goto L72(c69, r228);
  L329():
    r232 = clos inner3913899244;
    st posunique = r232;
    goto L74();
  D112():
    deopt 412 [c69, pos2];
  D114():
    deopt 415 [c74, r229, shift];
  L82():
    verbose5 = ld verbose;
    check L331() else D115();
  L325():
    pos3 = force? pos2;
    checkMissing(pos3);
    max = ldf max in base;
    r230 = dyn max(pos3);
    check L326() else D113();
  L327():
    shift1 = force? shift;
    checkMissing(shift1);
    r231 = `<`(r229, shift1);
    c75 = `as.logical`(r231);
    c76 = `&&`(c74, c75);
    goto L71(c76);
  D113():
    deopt 415 [c69, r230];
  D115():
    deopt 425 [verbose5];
  L326():
    goto L72(c69, r230);
  L331():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c79 = `as.logical`(verbose6);
    if c79 then L332() else L75();
  L75():
    goto L76();
  L76():
    split3 = ldf split;
    check L336() else D118();
  L332():
    cat = ldf cat;
    check L333() else D116();
  D116():
    deopt 428 [];
  D118():
    deopt 435 [];
  L333():
    p50 = prom<V +>{
      ctr = ld ctr;
      ctr1 = force? ctr;
      checkMissing(ctr1);
      r235 = `+`(ctr1, 1);
      st ctr = r235;
      visible.0();
      return r235;
    };
    r237 = dyn cat("Cycle:", p50);
    check L334() else D117();
  L336():
    p51 = prom<V +>{
      pos4 = ld pos;
      pos5 = force? pos4;
      checkMissing(pos5);
      c80 = `is.object`(pos5);
      if c80 then L1() else L2();
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[", pos5);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2();
    L2():
      __10 = ldf `[` in base;
      r239 = dyn __10(pos5, <missing>, 1);
      goto L0(r239);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    p52 = prom<V +>{
      pos8 = ld pos;
      pos9 = force? pos8;
      checkMissing(pos9);
      c81 = `is.object`(pos9);
      if c81 then L1() else L2();
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[", pos9);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2();
    L2():
      __11 = ldf `[` in base;
      r241 = dyn __11(pos9, <missing>, 2);
      goto L0(r241);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    r243 = dyn split3(p51, p52);
    check L337() else D119();
  D117():
    deopt 431 [r237];
  D119():
    deopt 438 [r243];
  L334():
    goto L76();
  L337():
    st p_L = r243;
    do_call1 = ldf `do.call`;
    check L338() else D120();
  D120():
    deopt 441 [];
  L338():
    p53 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p57 = prom<V +>{
      Map2 = ldf Map;
      p54 = prom<V +>{
        r245 = clos inner2584330254;
        return r245;
      };
      p55 = prom<V +>{
        p_L10 = ld p_L;
        p_L11 = force? p_L10;
        checkMissing(p_L11);
        return p_L11;
      };
      p56 = prom<V +>{
        tab4 = ld tab;
        tab5 = force? tab4;
        checkMissing(tab5);
        c82 = `is.object`(tab5);
        if c82 then L3() else L4(tab5);
      L0(dx35):
        return dx35;
      L3():
        dr34 = tryDispatchBuiltin.1("[", tab5);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L5() else L4(dr34);
      L4(tab7):
        sym35 = ldf `as.integer`;
        base35 = ldf `as.integer` in base;
        guard35 = `==`.4(sym35, base35);
        if guard35 then L6() else L7();
      L1(tab10, r249):
        __12 = ldf `[` in base;
        r254 = dyn __12(tab10, r249);
        goto L0(r254);
      L5():
        dx34 = getTryDispatchBuiltinValue(dr34);
        goto L0(dx34);
      L6():
        sym36 = ldf names;
        base36 = ldf names in base;
        guard36 = `==`.4(sym36, base36);
        if guard36 then L8() else L9();
      L7():
        r248 = dyn base35(<lang names(p_L)>);
        goto L1(tab7, r248);
      L2(tab13, r251):
        as_integer1 = ldf `as.integer` in base;
        r253 = dyn as_integer1(r251);
        goto L1(tab13, r253);
      L8():
        p_L12 = ld p_L;
        p_L13 = force? p_L12;
        checkMissing(p_L13);
        names2 = ldf names in base;
        r252 = dyn names2(p_L13);
        goto L2(tab7, r252);
      L9():
        r250 = dyn base36(<sym p_L>);
        goto L2(tab7, r250);
      };
      r256 = dyn Map2(p54, p55, p56);
      return r256;
    };
    r258 = dyn do_call1(p53, p57);
    check L339() else D121();
  D121():
    deopt 444 [r258];
  L339():
    st new = r258;
    posunique = ldf posunique;
    check L340() else D122();
  D122():
    deopt 447 [];
  L340():
    p61 = prom<V +>{
      rbind2 = ldf rbind;
      p58 = prom<V +>{
        pos12 = ld pos;
        pos13 = force? pos12;
        checkMissing(pos13);
        return pos13;
      };
      p60 = prom<V +>{
        posunique1 = ldf posunique;
        p59 = prom<V +>{
          new = ld new;
          new1 = force? new;
          checkMissing(new1);
          return new1;
        };
        r261 = dyn posunique1(p59);
        return r261;
      };
      r263 = dyn rbind2(p58, p60);
      return r263;
    };
    r265 = dyn posunique(p61);
    check L341() else D123();
  D123():
    deopt 449 [r265];
  L341():
    st npos = r265;
    nrow = ldf nrow;
    check L342() else D124();
  D124():
    deopt 452 [];
  L342():
    p62 = prom<V +>{
      npos = ld npos;
      npos1 = force? npos;
      checkMissing(npos1);
      return npos1;
    };
    r267 = dyn nrow(p62);
    check L343() else D125();
  D125():
    deopt 454 [r267];
  L343():
    nrow1 = ldf nrow;
    check L344() else D126();
  D126():
    deopt 455 [r267];
  L344():
    p63 = prom<V +>{
      pos14 = ld pos;
      pos15 = force? pos14;
      checkMissing(pos15);
      return pos15;
    };
    r269 = dyn nrow1(p63);
    check L345() else D127();
  D127():
    deopt 457 [r267, r269];
  L345():
    r270 = `-`(r267, r269);
    st nnew = r270;
    verbose7 = ld verbose;
    check L346() else D128();
  D128():
    deopt 460 [verbose7];
  L346():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c83 = `as.logical`(verbose8);
    if c83 then L347() else L77();
  L77():
    goto L78();
  L78():
    nnew2 = ld nnew;
    check L351() else D131();
  L347():
    cat1 = ldf cat;
    check L348() else D129();
  D129():
    deopt 463 [];
  D131():
    deopt 470 [nnew2];
  L348():
    p64 = prom<V +>{
      nnew = ld nnew;
      nnew1 = force? nnew;
      checkMissing(nnew1);
      return nnew1;
    };
    r272 = dyn cat1(" NNew:", p64, "\n");
    check L349() else D130();
  L351():
    nnew3 = force? nnew2;
    checkMissing(nnew3);
    r274 = `!`(nnew3);
    c84 = `as.logical`(r274);
    if c84 then L352() else L79();
  D130():
    deopt 467 [r272];
  L79():
    npos2 = ld npos;
    check L355() else D132();
  L349():
    goto L78();
  L352():
    split4 = ldf split;
    check L357() else D133();
  D132():
    deopt 477 [npos2];
  D133():
    deopt 484 [];
  L355():
    npos3 = force? npos2;
    checkMissing(npos3);
    st pos = npos3;
    goto L82();
  L357():
    p65 = prom<V +>{
      all_packages18 = ld all_packages;
      all_packages19 = force? all_packages18;
      checkMissing(all_packages19);
      c85 = `is.object`(all_packages19);
      if c85 then L2() else L3(all_packages19);
    L0(dx37):
      return dx37;
    L2():
      dr36 = tryDispatchBuiltin.1("[", all_packages19);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L4() else L3(dr36);
    L3(all_packages21):
      pos16 = ld pos;
      pos17 = force? pos16;
      checkMissing(pos17);
      c86 = `is.object`(pos17);
      if c86 then L5() else L6(all_packages21);
    L1(all_packages25, dx39):
      __14 = ldf `[` in base;
      r277 = dyn __14(all_packages25, dx39);
      goto L0(r277);
    L4():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    L5():
      dr38 = tryDispatchBuiltin.1("[", pos17);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L7() else L6(all_packages21);
    L6(all_packages23):
      __13 = ldf `[` in base;
      r276 = dyn __13(pos17, <missing>, 2);
      goto L1(all_packages23, r276);
    L7():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L1(all_packages21, dx38);
    };
    p68 = prom<V +>{
      factor3 = ldf factor;
      p66 = prom<V +>{
        all_packages26 = ld all_packages;
        all_packages27 = force? all_packages26;
        checkMissing(all_packages27);
        c87 = `is.object`(all_packages27);
        if c87 then L2() else L3(all_packages27);
      L0(dx41):
        return dx41;
      L2():
        dr40 = tryDispatchBuiltin.1("[", all_packages27);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L4() else L3(dr40);
      L3(all_packages29):
        pos20 = ld pos;
        pos21 = force? pos20;
        checkMissing(pos21);
        c88 = `is.object`(pos21);
        if c88 then L5() else L6(all_packages29);
      L1(all_packages33, dx43):
        __16 = ldf `[` in base;
        r280 = dyn __16(all_packages33, dx43);
        goto L0(r280);
      L4():
        dx40 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx40);
      L5():
        dr42 = tryDispatchBuiltin.1("[", pos21);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L7() else L6(all_packages29);
      L6(all_packages31):
        __15 = ldf `[` in base;
        r279 = dyn __15(pos21, <missing>, 1);
        goto L1(all_packages31, r279);
      L7():
        dx42 = getTryDispatchBuiltinValue(dr42);
        goto L1(all_packages29, dx42);
      };
      p67 = prom<V +>{
        packages29 = ld packages1;
        packages30 = force? packages29;
        checkMissing(packages30);
        return packages30;
      };
      r283 = dyn factor3[, levels](p66, p67);
      return r283;
    };
    r285 = dyn split4(p65, p68);
    check L358() else D134();
  D134():
    deopt 487 [r285];
  L358():
    st depends = r285;
    sym37 = ldf `is.null`;
    base37 = ldf `is.null` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L359() else L360();
  L83(r287):
    r288 = `!`(r287);
    c90 = `as.logical`(r288);
    if c90 then L362() else L84();
  L359():
    packages31 = ld packages;
    check L361() else D135();
  L360():
    r286 = dyn base37(<sym packages>);
    goto L83(r286);
  D135():
    deopt 490 [packages31];
  L84():
    goto L88();
  L88():
    depends52 = ld depends;
    check L379() else D144();
  L361():
    packages32 = force? packages31;
    checkMissing(packages32);
    c89 = `==`(packages32, NULL);
    goto L83(c89);
  L362():
    depends40 = ld depends;
    check L363() else D136();
  D136():
    deopt 494 [depends40];
  D144():
    deopt 521 [depends52];
  L363():
    depends41 = force? depends40;
    checkMissing(depends41);
    c91 = `is.object`(depends41);
    if c91 then L364() else L365(depends41);
  L379():
    depends53 = force? depends52;
    checkMissing(depends53);
    popenv;
    return depends53;
  L85(dx45):
    st depends = dx45;
    packages35 = ld packages;
    check L375() else D141();
  L364():
    dr44 = tryDispatchBuiltin.1("[", depends41);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L366() else L365(dr44);
  L365(depends43):
    sym38 = ldf match;
    base38 = ldf match in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L367() else L368();
  D141():
    deopt 512 [packages35];
  L86(depends46, r290):
    __17 = ldf `[` in base;
    r295 = dyn __17(depends46, r290);
    goto L85(r295);
  L366():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L85(dx44);
  L367():
    packages33 = ld packages;
    check L369() else D137();
  L368():
    r289 = dyn base38(<sym packages>, <lang names(depends)>);
    goto L86(depends43, r289);
  L375():
    packages36 = force? packages35;
    checkMissing(packages36);
    l7 = ld depends;
    names__3 = ldf `names<-`;
    check L376() else D142();
  D137():
    deopt 498 [depends43, packages33];
  D142():
    deopt 515 [packages36, l7, packages36];
  L369():
    packages34 = force? packages33;
    checkMissing(packages34);
    sym39 = ldf names;
    base39 = ldf names in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L370() else L371();
  L376():
    r296 = dyn names__3(l7, NULL, packages36);
    check L377() else D143();
  D143():
    deopt 517 [packages36, r296];
  L87(depends49, r292):
    match7 = ldf match in base;
    r294 = dyn match7(packages34, r292, NA_INT, NULL);
    check L374() else D140();
  L370():
    depends50 = ld depends;
    check L372() else D138();
  L371():
    r291 = dyn base39(<sym depends>);
    goto L87(depends43, r291);
  L377():
    st depends = r296;
    goto L88();
  D138():
    deopt 502 [depends43, depends50];
  D140():
    deopt 509 [depends49, r294];
  L372():
    depends51 = force? depends50;
    checkMissing(depends51);
    names3 = ldf names in base;
    r293 = dyn names3(depends51);
    check L373() else D139();
  L374():
    goto L86(depends49, r294);
  D139():
    deopt 505 [depends43, r293];
  L373():
    goto L87(depends43, r293);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg sort:cls, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg p1:*, reg p2:V, reg unlist:cls, reg d_r:*, reg d_r1:V, reg c:L, reg d_r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg p3:*, reg p4:V, reg __:cls, reg r2:V, reg p5:p(V +), reg r4:V, reg c1:cls, reg r5:V, reg p6:p(V +), reg r7:V, reg p7:p(V +), reg r9:V |
    mkenv;
    st p = p;
    sort = ldf sort;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p7 = prom<V +>{
      unique = ldf unique;
      p6 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        p1 = ld p;
        p2 = force? p1;
        checkMissing(p2);
        unlist = ldf unlist;
        p5 = prom<V +>{
          d_r = ld d_r;
          d_r1 = force? d_r;
          checkMissing(d_r1);
          c = `is.object`(d_r1);
          if c then L1() else L2(d_r1);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", d_r1);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(d_r3):
          p3 = ld p;
          p4 = force? p3;
          __ = ldf `[` in base;
          r2 = dyn __(d_r3, p4);
          goto L0(r2);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r4 = dyn unlist[, `use.names`](p5, FALSE);
        c1 = ldf c in base;
        r5 = dyn c1(p2, r4);
        goto L0(r5);
      L2():
        r = dyn base(<sym p>, <lang unlist(`[`(d_r, p), use.names=FALSE)>);
        goto L0(r);
      };
      r7 = dyn unique(p6);
      return r7;
    };
    r9 = dyn sort(p7);
    check L1() else D1();
  D1():
    deopt 3 [r9];
  L1():
    popenv;
    return r9;
  }
}
fun inner2584330254(i, k) {
  (reg i:*, reg k:*) -+> V { var i:*, var k:*, reg cbind:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg i1:*, reg i2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg k1:*, reg k2:V, reg length:cls, reg r4:V, reg rep_int:cls, reg r5:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg rep:cls, reg r9:V, reg p1:p(V +), reg r11:V |
    mkenv;
    st i = i;
    st k = k;
    cbind = ldf cbind;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      i1 = ld i;
      i2 = force? i1;
      checkMissing(i2);
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<sym i>, <lang length(k)>);
      goto L0(r);
    L1(r3):
      rep_int = ldf `rep.int` in base;
      r5 = dyn rep_int(i2, r3);
      goto L0(r5);
    L4():
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      length = ldf length in base;
      r4 = dyn length(k2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym k>);
      goto L1(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      rep = ldf rep in base;
      r9 = dyn rep(<sym k>, <lang length(i)>);
      goto L0(r9);
    L2():
      r7 = dyn base2[, each](<sym k>, <lang length(i)>);
      goto L0(r7);
    };
    r11 = dyn cbind(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r11];
  L1():
    popenv;
    return r11;
  }
}