fun main() {
  () -+> V { reg r:cls, reg dotchart:cls, reg VADeaths:*, reg VADeaths1:V, reg p:p(V +), reg r2:V, reg par:cls, reg r3:V, reg dotchart1:cls, reg t:cls, reg VADeaths2:*, reg VADeaths3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg par1:cls, reg op:*, reg op1:V, reg p4:p(V +), reg r13:V |
    mkenv;
    r = clos `inner-1268262277`;
    st dotchart = r;
    dotchart = ldf dotchart;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      VADeaths = ld VADeaths;
      VADeaths1 = force? VADeaths;
      checkMissing(VADeaths1);
      return VADeaths1;
    };
    r2 = dyn dotchart[, main](p, "Death Rates in Virginia - 1940");
    check L1() else D1();
  D1():
    deopt 8 [r2];
  L1():
    par = ldf par;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    r3 = dyn par[xaxs]("i");
    check L3() else D3();
  D3():
    deopt 13 [r3];
  L3():
    st op = r3;
    dotchart1 = ldf dotchart;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p2 = prom<V +>{
      t = ldf t;
      p1 = prom<V +>{
        VADeaths2 = ld VADeaths;
        VADeaths3 = force? VADeaths2;
        checkMissing(VADeaths3);
        return VADeaths3;
      };
      r5 = dyn t(p1);
      return r5;
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c(0.0, 100.0);
      goto L0(r9);
    L2():
      r7 = dyn base(0.0, 100.0);
      goto L0(r7);
    };
    r11 = dyn dotchart1[, xlim, bg, main, xlab, ylab](p2, p3, "skyblue", "Death Rates in Virginia - 1940", "rate [ % ]", "Grouping:  Age  x   Urbanity . Gender");
    check L5() else D5();
  D5():
    deopt 28 [r11];
  L5():
    par1 = ldf par;
    check L6() else D6();
  D6():
    deopt 30 [];
  L6():
    p4 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r13 = dyn par1(p4);
    check L7() else D7();
  D7():
    deopt 32 [r13];
  L7():
    popenv;
    return r13;
  }
}
fun `inner-1268262277`(x, labels, groups, gdata, offset, ann, xaxt, `frame.plot`, log, cex, `pt.cex`, pch, gpch, bg, color, gcolor, lcolor, xlim, main, xlab, ylab, `...`) {
  (reg x:*, reg labels:*, reg groups:*, reg gdata:*, reg offset:*, reg ann:*, reg xaxt:*, reg frame_plot:*, reg log:*, reg cex:*, reg pt_cex:*, reg pch:*, reg gpch:*, reg bg:*, reg color:*, reg gcolor:*, reg lcolor:*, reg xlim:*, reg main:*, reg xlab:*, reg ylab:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var groups:*, reg groups_isMissing:L, reg groups_orDefault:*, var gdata:*, reg gdata_isMissing:L, reg gdata_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, reg p:p(V +), var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, reg par:cls, reg r1:V, reg p1:p(V +), var xaxt:*, reg xaxt_isMissing:L, reg xaxt_orDefault:*, reg par1:cls, reg r3:V, reg p2:p(V +), var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, reg par2:cls, reg r5:V, reg p3:p(V +), var `pt.cex`:*, reg pt_cex_isMissing:L, reg pt_cex_orDefault:*, reg cex1:*, reg cex2:V, reg p4:p(V +), var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, var gpch:*, reg gpch_isMissing:L, reg gpch_orDefault:*, var bg:*, reg bg_isMissing:L, reg bg_orDefault:*, reg par3:cls, reg r8:V, reg p5:p(V +), var color:*, reg color_isMissing:L, reg color_orDefault:*, reg par4:cls, reg r10:V, reg p6:p(V +), var gcolor:*, reg gcolor_isMissing:L, reg gcolor_orDefault:*, reg par5:cls, reg r12:V, reg p7:p(V +), var lcolor:*, reg lcolor_isMissing:L, reg lcolor_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg x7:V, reg r17:V, reg x8:*, reg x9:V, reg is_finite:cls, reg r18:V, reg __:cls, reg r19:V, reg range:cls, reg r20:V, reg p8:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `...`:dots?, reg par6:cls, reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg on_exit:cls, reg r25:V, reg par7:cls, reg cex3:*, reg cex4:V, reg p9:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg x10:*, reg x11:V, reg is_numeric:cls, reg r30:V, reg r31:V, reg c1:L, reg stop:cls, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg x12:*, reg x13:V, reg length:cls, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg x14:*, reg x15:V, reg is_matrix:cls, reg r39:V, reg c2:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg labels1:*, reg labels2:V, reg c3:V, reg c4:L, reg rownames:cls, reg x16:*, reg x17:V, reg p10:p(V +), reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg labels3:*, reg labels4:V, reg c5:V, reg c6:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg nrow:cls, reg x18:*, reg x19:V, reg p11:p(V +), reg r52:V, reg r53:I, reg as_character:cls, reg r54:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg labels5:*, reg labels6:V, reg n:*, reg n1:V, reg rep_len:cls, reg r58:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg groups1:*, reg groups2:V, reg c7:V, reg c8:L, reg col:cls, reg x20:*, reg x21:V, reg p12:p(V +), reg r62:V, reg levels:cls, reg groups3:*, reg groups4:V, reg p13:p(V +), reg r65:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg labels7:*, reg labels8:V, reg c9:V, reg c10:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg r70:V, reg x22:*, reg x23:V, reg names:cls, reg r71:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r73:V, reg r74:V, reg groups5:*, reg groups6:V, reg c11:V, reg r75:V, reg c12:L, reg levels1:cls, reg groups7:*, reg groups8:V, reg p14:p(V +), reg r77:V, reg r78:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r79:V, reg r80:V, reg x24:*, reg x25:V, reg is_vector:cls, reg r81:V, reg r82:V, reg c13:L, reg warning:cls, reg r83:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r84:V, reg r85:V, reg x26:*, reg x27:V, reg as_numeric:cls, reg r86:V, reg plot_new:cls, reg r87:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r88:V, reg r89:V, reg labels9:*, reg labels10:V, reg c14:V, reg r90:V, reg c15:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r91:V, reg r92:V, reg strwidth:cls, reg labels11:*, reg labels12:V, reg p15:p(V +), reg r94:V, reg max:cls, reg r95:V, reg r96:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r97:V, reg r98:V, reg glabels:*, reg glabels1:V, reg c16:V, reg c17:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r100:V, reg r101:V, reg strwidth1:cls, reg glabels2:*, reg glabels3:V, reg p16:p(V +), reg r103:V, reg max1:cls, reg r104:V, reg offset1:*, reg offset2:V, reg opar:*, reg opar1:V, reg c18:L, reg opar3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r105:V, reg ann1:*, reg ann2:V, reg c19:L, reg nmai:*, reg nmai1:V, reg c20:L, reg nmai3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r106:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r107:V, reg r108:V, reg labels13:*, reg labels14:V, reg c21:V, reg c22:L, reg c24:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r109:V, reg c27:L, reg r110:V, reg glabels4:*, reg glabels5:V, reg c28:V, reg c29:L, reg c30:V, reg r111:V, reg c32:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r112:V, reg r113:V, reg ylab1:*, reg ylab2:V, reg c33:V, reg c34:L, reg c35:V, reg ann3:*, reg ann4:V, reg r114:V, reg c37:L, reg c38:V, reg c40:L, reg r115:V, reg offset3:*, reg offset4:V, reg nmai4:*, reg nmai5:V, reg c41:L, reg nmai7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r116:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r117:V, reg dx11:V, reg r118:V, reg yi:*, reg yi1:V, reg linch:*, reg linch1:V, reg r119:V, reg goffset:*, reg goffset1:V, reg r120:V, reg ginch:*, reg ginch1:V, reg max2:cls, reg r121:V, reg r122:V, reg r123:V, reg nmai8:*, reg nmai9:V, reg c42:L, reg nmai11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r124:V, reg nm_2:*, reg nm_3:V, reg r125:V, reg c43:L, reg nm_4:*, reg nm_5:V, reg l:*, reg c44:L, reg nm_7:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg ___:cls, reg r126:V, reg par8:cls, reg nmai12:*, reg nmai13:V, reg p17:p(V +), reg r128:V, reg r129:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r131:V, reg r132:V, reg groups9:*, reg groups10:V, reg c45:V, reg c46:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r133:V, reg r134:V, reg n2:*, reg n3:V, reg r135:I, reg o:*, reg o1:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r136:V, reg r137:V, reg n4:*, reg n5:V, reg r138:V, reg c47:cls, reg r139:V, reg sort_list:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r141:V, reg r142:V, reg groups11:*, reg groups12:V, reg as_numeric1:cls, reg r143:V, reg p18:p(V +), reg r145:V, reg x28:*, reg x29:V, reg c48:L, reg x31:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg o2:*, reg o3:V, reg __5:cls, reg r146:V, reg groups13:*, reg groups14:V, reg c49:L, reg groups16:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg o4:*, reg o5:V, reg __6:cls, reg r147:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r148:V, reg r149:V, reg color1:*, reg color2:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r150:V, reg r151:V, reg groups17:*, reg groups18:V, reg length1:cls, reg r152:V, reg rep_len1:cls, reg r153:V, reg c50:L, reg r155:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg o6:*, reg o7:V, reg __7:cls, reg r156:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r157:V, reg r158:V, reg lcolor1:*, reg lcolor2:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r159:V, reg r160:V, reg groups19:*, reg groups20:V, reg length2:cls, reg r161:V, reg rep_len2:cls, reg r162:V, reg c51:L, reg r164:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg o8:*, reg o9:V, reg __8:cls, reg r165:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r166:V, reg r167:V, reg pch1:*, reg pch2:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r168:V, reg r169:V, reg groups21:*, reg groups22:V, reg length3:cls, reg r170:V, reg rep_len3:cls, reg r171:V, reg c52:L, reg r173:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg o10:*, reg o11:V, reg __9:cls, reg r174:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r175:V, reg r176:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r177:V, reg r178:V, reg diff:cls, reg sym37:cls, reg base37:cls, reg guard37:L, reg r179:V, reg r180:V, reg groups23:*, reg groups24:V, reg as_numeric2:cls, reg r181:V, reg p19:p(V +), reg r183:V, reg r184:V, reg c53:cls, reg r185:V, reg cumsum:cls, reg r186:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r187:V, reg r188:V, reg n6:*, reg n7:V, reg r189:I, reg of_1:*, reg of_2:V, reg r190:V, reg r191:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r192:V, reg r193:V, reg y:*, reg y1:V, reg r194:V, reg range1:cls, reg r195:V, reg plot_window:cls, reg xlim1:*, reg xlim2:V, reg p20:p(V +), reg ylim:*, reg ylim1:V, reg p21:p(V +), reg log1:*, reg log2:V, reg p22:p(V +), reg r199:V, reg par9:cls, reg r200:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r201:V, reg r202:V, reg labels15:*, reg labels16:V, reg c54:V, reg r203:V, reg c55:L, reg linch2:*, reg linch3:V, reg r204:V, reg lheight:*, reg lheight1:V, reg r205:V, reg mtext:cls, reg labels17:*, reg labels18:V, reg c56:L, reg labels20:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg o12:*, reg o13:V, reg __10:cls, reg r206:V, reg p23:p(V +), reg loffset:*, reg loffset1:V, reg p24:p(V +), reg y2:*, reg y3:V, reg p25:p(V +), reg color3:*, reg color4:V, reg p26:p(V +), reg cex5:*, reg cex6:V, reg p27:p(V +), reg ddd1:dots?, reg r212:V, reg abline:cls, reg y4:*, reg y5:V, reg p28:p(V +), reg lcolor3:*, reg lcolor4:V, reg p29:p(V +), reg r216:V, reg points:cls, reg x32:*, reg x33:V, reg p30:p(V +), reg y6:*, reg y7:V, reg p31:p(V +), reg pch3:*, reg pch4:V, reg p32:p(V +), reg color5:*, reg color6:V, reg p33:p(V +), reg bg1:*, reg bg2:V, reg p34:p(V +), reg pt_cex1:*, reg pt_cex2:V, reg cex7:*, reg cex8:V, reg r222:V, reg p35:p(V +), reg r224:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r225:V, reg r226:V, reg groups25:*, reg groups26:V, reg c57:V, reg r227:V, reg c58:L, reg rev:cls, reg sym42:cls, reg base42:cls, reg guard42:L, reg r228:V, reg r229:V, reg rev1:cls, reg tapply:cls, reg groups27:*, reg groups28:V, reg p36:p(V +), reg groups29:*, reg groups30:V, reg p37:p(V +), reg length4:*, reg length5:V, reg p38:p(V +), reg r233:V, reg p39:p(V +), reg r235:V, reg r236:V, reg cumsum1:cls, reg r237:V, reg r238:V, reg p40:p(V +), reg r240:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r241:V, reg r242:V, reg strwidth2:cls, reg glabels6:*, reg glabels7:V, reg p41:p(V +), reg r244:V, reg max3:cls, reg r245:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r246:V, reg r247:V, reg linch4:*, reg linch5:V, reg offset5:*, reg offset6:V, reg r248:V, reg ginch2:*, reg ginch3:V, reg max4:cls, reg r249:V, reg r250:V, reg lheight2:*, reg lheight3:V, reg r251:V, reg mtext1:cls, reg glabels8:*, reg glabels9:V, reg p42:p(V +), reg goffset2:*, reg goffset3:V, reg p43:p(V +), reg gpos:*, reg gpos1:V, reg p44:p(V +), reg gcolor1:*, reg gcolor2:V, reg p45:p(V +), reg cex9:*, reg cex10:V, reg p46:p(V +), reg ddd2:dots?, reg r257:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r258:V, reg r259:V, reg gdata1:*, reg gdata2:V, reg c59:V, reg r260:V, reg c60:L, reg abline1:cls, reg gpos2:*, reg gpos3:V, reg p47:p(V +), reg r262:V, reg points1:cls, reg gdata3:*, reg gdata4:V, reg p48:p(V +), reg gpos4:*, reg gpos5:V, reg p49:p(V +), reg gpch1:*, reg gpch2:V, reg p50:p(V +), reg gcolor3:*, reg gcolor4:V, reg p51:p(V +), reg bg3:*, reg bg4:V, reg p52:p(V +), reg pt_cex3:*, reg pt_cex4:V, reg cex11:*, reg cex12:V, reg r268:V, reg p53:p(V +), reg ddd3:dots?, reg r270:V, reg r271:V, reg axis:cls, reg xaxt1:*, reg xaxt2:V, reg p54:p(V +), reg r274:V, reg frame_plot1:*, reg frame_plot2:V, reg c61:L, reg box:cls, reg r275:V, reg ann5:*, reg ann6:V, reg c62:L, reg title:cls, reg main1:*, reg main2:V, reg p55:p(V +), reg xlab1:*, reg xlab2:V, reg p56:p(V +), reg ddd4:dots?, reg r279:V, reg par10:cls, reg r280:V, reg par11:cls, reg sym46:cls, reg base46:cls, reg guard46:L, reg r281:V, reg r282:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r283:V, reg r284:V, reg mgp:*, reg mgp1:V, reg c63:L, reg mgp3:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg __11:cls, reg r285:V, reg nm_10:*, reg nm_11:V, reg lheight4:*, reg lheight5:V, reg r286:V, reg r287:V, reg max5:cls, reg r288:V, reg mgp4:*, reg mgp5:V, reg c64:L, reg mgp7:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg __12:cls, reg r289:V, reg c65:cls, reg r290:V, reg p57:p(V +), reg r292:V, reg title1:cls, reg ylab3:*, reg ylab4:V, reg p58:p(V +), reg ddd5:dots?, reg r294:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r296:V, reg r297:V, reg invisible:cls, reg r298:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0(NULL) else L0(labels);
  L0(labels_orDefault):
    st labels = labels_orDefault;
    groups_isMissing = missing.0(groups);
    if groups_isMissing then L1(NULL) else L1(groups);
  L1(groups_orDefault):
    st groups = groups_orDefault;
    gdata_isMissing = missing.0(gdata);
    if gdata_isMissing then L2(NULL) else L2(gdata);
  L2(gdata_orDefault):
    st gdata = gdata_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L3() else L4(offset);
  L3():
    p = prom<V +>{
      return 0.125;
    };
    goto L4(p);
  L4(offset_orDefault):
    st offset = offset_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L5() else L6(ann);
  L5():
    p1 = prom<V +>{
      par = ldf par;
      r1 = dyn par("ann");
      return r1;
    };
    goto L6(p1);
  L6(ann_orDefault):
    st ann = ann_orDefault;
    xaxt_isMissing = missing.0(xaxt);
    if xaxt_isMissing then L7() else L8(xaxt);
  L7():
    p2 = prom<V +>{
      par1 = ldf par;
      r3 = dyn par1("xaxt");
      return r3;
    };
    goto L8(p2);
  L8(xaxt_orDefault):
    st xaxt = xaxt_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L9(TRUE) else L9(frame_plot);
  L9(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L10("") else L10(log);
  L10(log_orDefault):
    st log = log_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L11() else L12(cex);
  L11():
    p3 = prom<V +>{
      par2 = ldf par;
      r5 = dyn par2("cex");
      return r5;
    };
    goto L12(p3);
  L12(cex_orDefault):
    st cex = cex_orDefault;
    pt_cex_isMissing = missing.0(pt_cex);
    if pt_cex_isMissing then L13() else L14(pt_cex);
  L13():
    p4 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    goto L14(p4);
  L14(pt_cex_orDefault):
    st `pt.cex` = pt_cex_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L15(21.0) else L15(pch);
  L15(pch_orDefault):
    st pch = pch_orDefault;
    gpch_isMissing = missing.0(gpch);
    if gpch_isMissing then L16(21.0) else L16(gpch);
  L16(gpch_orDefault):
    st gpch = gpch_orDefault;
    bg_isMissing = missing.0(bg);
    if bg_isMissing then L17() else L18(bg);
  L17():
    p5 = prom<V +>{
      par3 = ldf par;
      r8 = dyn par3("bg");
      return r8;
    };
    goto L18(p5);
  L18(bg_orDefault):
    st bg = bg_orDefault;
    color_isMissing = missing.0(color);
    if color_isMissing then L19() else L20(color);
  L19():
    p6 = prom<V +>{
      par4 = ldf par;
      r10 = dyn par4("fg");
      return r10;
    };
    goto L20(p6);
  L20(color_orDefault):
    st color = color_orDefault;
    gcolor_isMissing = missing.0(gcolor);
    if gcolor_isMissing then L21() else L22(gcolor);
  L21():
    p7 = prom<V +>{
      par5 = ldf par;
      r12 = dyn par5("fg");
      return r12;
    };
    goto L22(p7);
  L22(gcolor_orDefault):
    st gcolor = gcolor_orDefault;
    lcolor_isMissing = missing.0(lcolor);
    if lcolor_isMissing then L23("gray") else L23(lcolor);
  L23(lcolor_orDefault):
    st lcolor = lcolor_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L24() else L25(xlim);
  L24():
    p8 = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r15):
      return r15;
    L3():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L5() else L6(x2);
    L4():
      r14 = dyn base(<lang `[`(x, is.finite(x))>);
      goto L0(r14);
    L1(dx1):
      range = ldf range in base;
      r20 = dyn range(dx1);
      goto L0(r20);
    L5():
      dr = tryDispatchBuiltin.1("[", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(x4):
      sym1 = ldf `is.finite`;
      base1 = ldf `is.finite` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L2(x7, r17):
      __ = ldf `[` in base;
      r19 = dyn __(x7, r17);
      goto L1(r19);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      is_finite = ldf `is.finite` in base;
      r18 = dyn is_finite(x9);
      goto L2(x4, r18);
    L9():
      r16 = dyn base1(<sym x>);
      goto L2(x4, r16);
    };
    goto L25(p8);
  L25(xlim_orDefault):
    st xlim = xlim_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L26(NULL) else L26(main);
  L26(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L27(NULL) else L27(xlab);
  L27(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L28(NULL) else L28(ylab);
  L28(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    par6 = ldf par;
    check L122() else D0();
  D0():
    deopt 1 [];
  L122():
    r22 = dyn par6("mai", "mar", "mgp", "cex", "yaxs");
    check L123() else D1();
  D1():
    deopt 7 [r22];
  L123():
    st opar = r22;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L124() else L125();
  L29():
    par7 = ldf par;
    check L126() else D2();
  L124():
    on_exit = ldf `on.exit` in base;
    r25 = dyn on_exit(<lang par(opar)>);
    goto L29();
  L125():
    r23 = dyn base2(<lang par(opar)>);
    goto L29();
  D2():
    deopt 13 [];
  L126():
    p9 = prom<V +>{
      cex3 = ld cex;
      cex4 = force? cex3;
      checkMissing(cex4);
      return cex4;
    };
    r27 = dyn par7[cex, yaxs](p9, "i");
    check L127() else D3();
  D3():
    deopt 18 [r27];
  L127():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L128() else L129();
  L30(r29):
    r31 = `!`(r29);
    c1 = `as.logical`(r31);
    if c1 then L132() else L31();
  L128():
    x10 = ld x;
    check L130() else D4();
  L129():
    r28 = dyn base3(<sym x>);
    goto L30(r28);
  D4():
    deopt 21 [x10];
  L31():
    goto L32();
  L32():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L136() else L137();
  L130():
    x11 = force? x10;
    checkMissing(x11);
    is_numeric = ldf `is.numeric` in base;
    r30 = dyn is_numeric(x11);
    check L131() else D5();
  L132():
    stop = ldf stop;
    check L133() else D6();
  D5():
    deopt 24 [r30];
  D6():
    deopt 27 [];
  L33(r35):
    st n = r35;
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L140() else L141();
  L131():
    goto L30(r30);
  L133():
    r32 = dyn stop("'x' must be a numeric vector or matrix");
    check L134() else D7();
  L136():
    x12 = ld x;
    check L138() else D8();
  L137():
    r34 = dyn base4(<sym x>);
    goto L33(r34);
  D7():
    deopt 29 [r32];
  D8():
    deopt 34 [x12];
  L34(r38):
    c2 = `as.logical`(r38);
    if c2 then L144() else L35();
  L134():
    goto L32();
  L138():
    x13 = force? x12;
    checkMissing(x13);
    length = ldf length in base;
    r36 = dyn length(x13);
    check L139() else D9();
  L140():
    x14 = ld x;
    check L142() else D10();
  L141():
    r37 = dyn base5(<sym x>);
    goto L34(r37);
  D9():
    deopt 37 [r36];
  D10():
    deopt 41 [x14];
  L35():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L179() else L180();
  L48():
    plot_new = ldf `plot.new`;
    check L207() else D39();
  L139():
    goto L33(r36);
  L142():
    x15 = force? x14;
    checkMissing(x15);
    is_matrix = ldf `is.matrix` in base;
    r39 = dyn is_matrix(x15);
    check L143() else D11();
  L144():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L145() else L146();
  D11():
    deopt 44 [r39];
  D39():
    deopt 147 [];
  L36(r41):
    c4 = `as.logical`(r41);
    if c4 then L148() else L37();
  L49(r68):
    c10 = `as.logical`(r68);
    if c10 then L182() else L50();
  L143():
    goto L34(r39);
  L145():
    labels1 = ld labels;
    check L147() else D12();
  L146():
    r40 = dyn base6(<sym labels>);
    goto L36(r40);
  L179():
    labels7 = ld labels;
    check L181() else D27();
  L180():
    r67 = dyn base12(<sym labels>);
    goto L49(r67);
  L207():
    r87 = dyn plot_new();
    check L208() else D40();
  D12():
    deopt 46 [labels1];
  D27():
    deopt 101 [labels7];
  D40():
    deopt 148 [r87];
  L37():
    goto L38();
  L38():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L152() else L153();
  L50():
    goto L52();
  L52():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L188() else L189();
  L147():
    labels2 = force? labels1;
    checkMissing(labels2);
    c3 = `==`(labels2, NULL);
    goto L36(c3);
  L148():
    rownames = ldf rownames;
    check L149() else D13();
  L181():
    labels8 = force? labels7;
    checkMissing(labels8);
    c9 = `==`(labels8, NULL);
    goto L49(c9);
  L182():
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L183() else L184();
  L208():
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L209() else L210();
  D13():
    deopt 50 [];
  L39(r46):
    c6 = `as.logical`(r46);
    if c6 then L155() else L40();
  L51(r70):
    st labels = r70;
    goto L52();
  L53(r74):
    r75 = `!`(r74);
    c12 = `as.logical`(r75);
    if c12 then L191() else L54();
  L59(r89):
    r90 = `!`(r89);
    c15 = `as.logical`(r90);
    if c15 then L212() else L60();
  L149():
    p10 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r43 = dyn rownames(p10);
    check L150() else D14();
  L152():
    labels3 = ld labels;
    check L154() else D15();
  L153():
    r45 = dyn base7(<sym labels>);
    goto L39(r45);
  L183():
    x22 = ld x;
    check L185() else D28();
  L184():
    r69 = dyn base13(<sym x>);
    goto L51(r69);
  L188():
    groups5 = ld groups;
    check L190() else D30();
  L189():
    r73 = dyn base14(<sym groups>);
    goto L53(r73);
  L209():
    labels9 = ld labels;
    check L211() else D41();
  L210():
    r88 = dyn base17(<sym labels>);
    goto L59(r88);
  D14():
    deopt 52 [r43];
  D15():
    deopt 57 [labels3];
  D28():
    deopt 106 [x22];
  D30():
    deopt 114 [groups5];
  D41():
    deopt 150 [labels9];
  L40():
    goto L43();
  L43():
    sym10 = ldf rep_len;
    base10 = ldf rep_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L164() else L165();
  L54():
    goto L55(NULL);
  L55(r78):
    st glabels = r78;
    sym15 = ldf `is.vector`;
    base15 = ldf `is.vector` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L195() else L196();
  L60():
    goto L62(0.0);
  L62(r96):
    st linch = r96;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L219() else L220();
  L150():
    st labels = r43;
    goto L38();
  L154():
    labels4 = force? labels3;
    checkMissing(labels4);
    c5 = `==`(labels4, NULL);
    goto L39(c5);
  L155():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L156() else L157();
  L185():
    x23 = force? x22;
    checkMissing(x23);
    names = ldf names in base;
    r71 = dyn names(x23);
    check L186() else D29();
  L190():
    groups6 = force? groups5;
    checkMissing(groups6);
    c11 = `==`(groups6, NULL);
    goto L53(c11);
  L191():
    levels1 = ldf levels;
    check L192() else D31();
  L211():
    labels10 = force? labels9;
    checkMissing(labels10);
    c14 = `==`(labels10, NULL);
    goto L59(c14);
  L212():
    sym18 = ldf max;
    base18 = ldf max in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L213() else L214();
  D29():
    deopt 109 [r71];
  D31():
    deopt 119 [];
  L41(r48):
    st labels = r48;
    goto L43();
  L44(r57):
    st labels = r57;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L169() else L170();
  L56(r80):
    r82 = `!`(r80);
    c13 = `as.logical`(r82);
    if c13 then L199() else L57();
  L61(r92):
    goto L62(r92);
  L63(r98):
    c17 = `as.logical`(r98);
    if c17 then L222() else L64();
  L156():
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L158() else L159();
  L157():
    r47 = dyn base8(<lang seq_len(nrow(x))>);
    goto L41(r47);
  L164():
    labels5 = ld labels;
    check L166() else D19();
  L165():
    r56 = dyn base10(<sym labels>, <sym n>);
    goto L44(r56);
  L186():
    goto L51(r71);
  L192():
    p14 = prom<V +>{
      groups7 = ld groups;
      groups8 = force? groups7;
      checkMissing(groups8);
      return groups8;
    };
    r77 = dyn levels1(p14);
    check L193() else D32();
  L195():
    x24 = ld x;
    check L197() else D33();
  L196():
    r79 = dyn base15(<sym x>);
    goto L56(r79);
  L213():
    strwidth = ldf strwidth;
    check L215() else D42();
  L214():
    r91 = dyn base18[, `na.rm`](<lang strwidth(labels, "inch")>, TRUE);
    goto L61(r91);
  L219():
    glabels = ld glabels;
    check L221() else D45();
  L220():
    r97 = dyn base19(<sym glabels>);
    goto L63(r97);
  D19():
    deopt 75 [labels5];
  D32():
    deopt 121 [r77];
  D33():
    deopt 127 [x24];
  D42():
    deopt 157 [];
  D45():
    deopt 169 [glabels];
  L42(r50):
    as_character = ldf `as.character` in base;
    r54 = dyn as_character(r50);
    check L162() else D18();
  L45(r60):
    c8 = `as.logical`(r60);
    if c8 then L172() else L46();
  L57():
    goto L48();
  L64():
    sym20 = ldf max;
    base20 = ldf max in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L224() else L225();
  L65():
    opar = ld opar;
    check L230() else D50();
  L158():
    nrow = ldf nrow;
    check L160() else D16();
  L159():
    r49 = dyn base9(<lang nrow(x)>);
    goto L42(r49);
  L166():
    labels6 = force? labels5;
    checkMissing(labels6);
    n = ld n;
    check L167() else D20();
  L169():
    groups1 = ld groups;
    check L171() else D22();
  L170():
    r59 = dyn base11(<sym groups>);
    goto L45(r59);
  L193():
    goto L55(r77);
  L197():
    x25 = force? x24;
    checkMissing(x25);
    is_vector = ldf `is.vector` in base;
    r81 = dyn is_vector(x25, "any");
    check L198() else D34();
  L199():
    warning = ldf warning;
    check L200() else D35();
  L215():
    p15 = prom<V +>{
      labels11 = ld labels;
      labels12 = force? labels11;
      checkMissing(labels12);
      return labels12;
    };
    r94 = dyn strwidth(p15, "inch");
    check L216() else D43();
  L221():
    glabels1 = force? glabels;
    checkMissing(glabels1);
    c16 = `==`(glabels1, NULL);
    goto L63(c16);
  L222():
    st ginch = 0.0;
    st goffset = 0.0;
    goto L65();
  D16():
    deopt 64 [];
  D18():
    deopt 69 [r54];
  D20():
    deopt 77 [n];
  D22():
    deopt 83 [groups1];
  D34():
    deopt 131 [r81];
  D35():
    deopt 134 [];
  D43():
    deopt 160 [r94];
  D50():
    deopt 193 [opar];
  L46():
    goto L47();
  L47():
    levels = ldf levels;
    check L176() else D25();
  L66(r101):
    st ginch = r101;
    offset1 = ld offset;
    check L229() else D49();
  L160():
    p11 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r52 = dyn nrow(p11);
    check L161() else D17();
  L162():
    goto L41(r54);
  L167():
    n1 = force? n;
    checkMissing(n1);
    rep_len = ldf rep_len in base;
    r58 = dyn rep_len(labels6, n1);
    check L168() else D21();
  L171():
    groups2 = force? groups1;
    checkMissing(groups2);
    c7 = `==`(groups2, NULL);
    goto L45(c7);
  L172():
    col = ldf col;
    check L173() else D23();
  L198():
    goto L56(r81);
  L200():
    r83 = dyn warning("'x' is neither a vector nor a matrix: using as.numeric(x)");
    check L201() else D36();
  L216():
    max = ldf max in base;
    r95 = dyn max(r94, TRUE);
    check L217() else D44();
  L224():
    strwidth1 = ldf strwidth;
    check L226() else D46();
  L225():
    r100 = dyn base20[, `na.rm`](<lang strwidth(glabels, "inch")>, TRUE);
    goto L66(r100);
  L230():
    opar1 = force? opar;
    checkMissing(opar1);
    c18 = `is.object`(opar1);
    if c18 then L231() else L232(opar1);
  D17():
    deopt 66 [r52];
  D21():
    deopt 80 [r58];
  D23():
    deopt 87 [];
  D25():
    deopt 96 [];
  D36():
    deopt 136 [r83];
  D44():
    deopt 164 [r95];
  D46():
    deopt 181 [];
  D49():
    deopt 190 [offset1];
  L67(dx3):
    st nmai = dx3;
    ann1 = ld ann;
    check L234() else D51();
  L161():
    r53 = seq_len(r52);
    goto L42(r53);
  L168():
    goto L44(r58);
  L173():
    p12 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    r62 = dyn col[, `as.factor`](p12, TRUE);
    check L174() else D24();
  L176():
    p13 = prom<V +>{
      groups3 = ld groups;
      groups4 = force? groups3;
      checkMissing(groups4);
      return groups4;
    };
    r65 = dyn levels(p13);
    check L177() else D26();
  L201():
    sym16 = ldf `as.numeric`;
    base16 = ldf `as.numeric` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L202() else L203();
  L217():
    goto L61(r95);
  L226():
    p16 = prom<V +>{
      glabels2 = ld glabels;
      glabels3 = force? glabels2;
      checkMissing(glabels3);
      return glabels3;
    };
    r103 = dyn strwidth1(p16, "inch");
    check L227() else D47();
  L229():
    offset2 = force? offset1;
    checkMissing(offset2);
    st goffset = offset2;
    goto L65();
  L231():
    dr2 = tryDispatchBuiltin.1("[[", opar1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L233() else L232(dr2);
  L232(opar3):
    __1 = ldf `[[` in base;
    r105 = dyn __1(opar3, "mai");
    goto L67(r105);
  D24():
    deopt 91 [r62];
  D26():
    deopt 98 [r65];
  D47():
    deopt 184 [r103];
  D51():
    deopt 199 [ann1];
  L58(r85):
    st x = r85;
    goto L48();
  L174():
    st groups = r62;
    goto L47();
  L177():
    st glabels = r65;
    goto L48();
  L202():
    x26 = ld x;
    check L204() else D37();
  L203():
    r84 = dyn base16(<sym x>);
    goto L58(r84);
  L227():
    max1 = ldf max in base;
    r104 = dyn max1(r103, TRUE);
    check L228() else D48();
  L233():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L67(dx2);
  L234():
    ann2 = force? ann1;
    checkMissing(ann2);
    c19 = `as.logical`(ann2);
    if c19 then L235() else L68();
  D37():
    deopt 139 [x26];
  D48():
    deopt 188 [r104];
  L68():
    goto L70();
  L70():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L241() else L242();
  L204():
    x27 = force? x26;
    checkMissing(x27);
    as_numeric = ldf `as.numeric` in base;
    r86 = dyn as_numeric(x27);
    check L205() else D38();
  L228():
    goto L66(r104);
  L235():
    nmai = ld nmai;
    check L236() else D52();
  D38():
    deopt 142 [r86];
  D52():
    deopt 201 [nmai];
  L71(r108):
    c22 = `as.logical`(r108);
    if c22 then L244() else L72(c22);
  L205():
    goto L58(r86);
  L236():
    nmai1 = force? nmai;
    checkMissing(nmai1);
    c20 = `is.object`(nmai1);
    if c20 then L237() else L238(nmai1);
  L241():
    labels13 = ld labels;
    check L243() else D53();
  L242():
    r107 = dyn base21(<sym labels>);
    goto L71(r107);
  D53():
    deopt 210 [labels13];
  L69(dx5):
    st `nm.2` = dx5;
    goto L70();
  L72(c24):
    r111 = `!`(c24);
    c32 = `as.logical`(r111);
    if c32 then L249() else L74();
  L237():
    dr4 = tryDispatchBuiltin.1("[", nmai1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L239() else L238(dr4);
  L238(nmai3):
    __2 = ldf `[` in base;
    r106 = dyn __2(nmai3, 2);
    goto L69(r106);
  L243():
    labels14 = force? labels13;
    checkMissing(labels14);
    c21 = `==`(labels14, NULL);
    goto L71(c21);
  L244():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L245() else L246();
  L73(c27, r110):
    c29 = `as.logical`(r110);
    c30 = `&&`(c27, c29);
    goto L72(c30);
  L74():
    goto L85();
  L85():
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L284() else L285();
  L239():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L69(dx4);
  L245():
    glabels4 = ld glabels;
    check L247() else D54();
  L246():
    r109 = dyn base22(<sym glabels>);
    goto L73(c22, r109);
  L249():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L250() else L251();
  D54():
    deopt 214 [c22, glabels4];
  L75(r113):
    c34 = `as.logical`(r113);
    if c34 then L76(c34) else L253();
  L86(r132):
    c46 = `as.logical`(r132);
    if c46 then L287() else L87();
  L247():
    glabels5 = force? glabels4;
    checkMissing(glabels5);
    c28 = `==`(glabels5, NULL);
    goto L73(c22, c28);
  L250():
    ylab1 = ld ylab;
    check L252() else D55();
  L251():
    r112 = dyn base23(<sym ylab>);
    goto L75(r112);
  L284():
    groups9 = ld groups;
    check L286() else D69();
  L285():
    r131 = dyn base25(<sym groups>);
    goto L86(r131);
  D55():
    deopt 220 [ylab1];
  D69():
    deopt 276 [groups9];
  L76(c35):
    c40 = `as.logical`(c35);
    if c40 then L256() else L77();
  L87():
    sort_list = ldf `sort.list`;
    check L297() else D74();
  L90():
    plot_window = ldf `plot.window`;
    check L361() else D103();
  L252():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c33 = `==`(ylab2, NULL);
    goto L75(c33);
  L253():
    ann3 = ld ann;
    check L254() else D56();
  L286():
    groups10 = force? groups9;
    checkMissing(groups10);
    c45 = `==`(groups10, NULL);
    goto L86(c45);
  L287():
    sym26 = ldf seq_len;
    base26 = ldf seq_len in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L288() else L289();
  D56():
    deopt 223 [c34, ann3];
  D74():
    deopt 298 [];
  D103():
    deopt 400 [];
  L77():
    offset3 = ld offset;
    check L258() else D57();
  L78(r115):
    st yi = r115;
    nmai4 = ld nmai;
    check L259() else D58();
  L88(r134):
    st o = r134;
    o = ld o;
    check L291() else D71();
  L254():
    ann4 = force? ann3;
    checkMissing(ann4);
    r114 = `!`(ann4);
    c37 = `as.logical`(r114);
    c38 = `||`(c34, c37);
    goto L76(c38);
  L256():
    goto L78(0.0);
  L288():
    n2 = ld n;
    check L290() else D70();
  L289():
    r133 = dyn base26(<sym n>);
    goto L88(r133);
  L297():
    p18 = prom<V +>{
      sym28 = ldf `as.numeric`;
      base28 = ldf `as.numeric` in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r142):
      return r142;
    L1():
      groups11 = ld groups;
      groups12 = force? groups11;
      checkMissing(groups12);
      as_numeric1 = ldf `as.numeric` in base;
      r143 = dyn as_numeric1(groups12);
      goto L0(r143);
    L2():
      r141 = dyn base28(<sym groups>);
      goto L0(r141);
    };
    r145 = dyn sort_list[, decreasing](p18, TRUE);
    check L298() else D75();
  L361():
    p20 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p21 = prom<V +>{
      ylim = ld ylim;
      ylim1 = force? ylim;
      checkMissing(ylim1);
      return ylim1;
    };
    p22 = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    r199 = dyn plot_window[xlim, ylim, log](p20, p21, p22);
    check L362() else D104();
  D57():
    deopt 229 [offset3];
  D58():
    deopt 232 [nmai4];
  D70():
    deopt 280 [n2];
  D71():
    deopt 284 [o];
  D75():
    deopt 302 [r145];
  D104():
    deopt 407 [r199];
  L258():
    offset4 = force? offset3;
    checkMissing(offset4);
    goto L78(offset4);
  L259():
    nmai5 = force? nmai4;
    checkMissing(nmai5);
    c41 = `is.object`(nmai5);
    if c41 then L260() else L261(nmai5);
  L290():
    n3 = force? n2;
    checkMissing(n3);
    r135 = seq_len(n3);
    goto L88(r135);
  L291():
    o1 = force? o;
    checkMissing(o1);
    st y = o1;
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L292() else L293();
  L298():
    st o = r145;
    x28 = ld x;
    check L299() else D76();
  L362():
    par9 = ldf par;
    check L363() else D105();
  D76():
    deopt 304 [x28];
  D105():
    deopt 409 [];
  L79(dx8):
    sym24 = ldf max;
    base24 = ldf max in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L263() else L264();
  L89(r137):
    st ylim = r137;
    goto L90();
  L260():
    dr6 = tryDispatchBuiltin.1("[", nmai5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L262() else L261(dr6);
  L261(nmai7):
    __3 = ldf `[` in base;
    r116 = dyn __3(nmai7, 4);
    goto L79(r116);
  L292():
    n4 = ld n;
    check L294() else D72();
  L293():
    r136 = dyn base27(0.0, <lang `+`(n, 1.0)>);
    goto L89(r136);
  L299():
    x29 = force? x28;
    checkMissing(x29);
    c48 = `is.object`(x29);
    if c48 then L300() else L301(x29);
  L363():
    r200 = dyn par9("csi");
    check L364() else D106();
  D72():
    deopt 290 [n4];
  D106():
    deopt 411 [r200];
  L80(dx11, r118):
    r122 = `+`(dx11, r118);
    r123 = `+`(r122, 0.0625);
    st `nm.2` = r123;
    nmai8 = ld nmai;
    check L270() else D64();
  L91(dx17):
    st x = dx17;
    groups13 = ld groups;
    check L304() else D78();
  L262():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L79(dx7);
  L263():
    yi = ld yi;
    check L265() else D59();
  L264():
    r117 = dyn base24(<lang `+`(`+`(yi, linch), goffset)>, <sym ginch>);
    goto L80(dx8, r117);
  L294():
    n5 = force? n4;
    checkMissing(n5);
    r138 = `+`(n5, 1.0);
    c47 = ldf c in base;
    r139 = dyn c47(0.0, r138);
    check L295() else D73();
  L300():
    dr12 = tryDispatchBuiltin.1("[", x29);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L302() else L301(dr12);
  L301(x31):
    o2 = ld o;
    check L303() else D77();
  L364():
    st lheight = r200;
    sym40 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L365() else L366();
  D59():
    deopt 238 [dx8, yi];
  D64():
    deopt 252 [nmai8];
  D73():
    deopt 295 [r139];
  D77():
    deopt 306 [x31, o2];
  D78():
    deopt 310 [groups13];
  L106(r202):
    r203 = `!`(r202);
    c55 = `as.logical`(r203);
    if c55 then L368() else L107();
  L265():
    yi1 = force? yi;
    checkMissing(yi1);
    linch = ld linch;
    check L266() else D60();
  L270():
    nmai9 = force? nmai8;
    checkMissing(nmai9);
    c42 = `is.object`(nmai9);
    if c42 then L271() else L272(nmai9);
  L295():
    goto L89(r139);
  L302():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L91(dx16);
  L303():
    o3 = force? o2;
    __5 = ldf `[` in base;
    r146 = dyn __5(x31, o3);
    goto L91(r146);
  L304():
    groups14 = force? groups13;
    checkMissing(groups14);
    c49 = `is.object`(groups14);
    if c49 then L305() else L306(groups14);
  L365():
    labels15 = ld labels;
    check L367() else D107();
  L366():
    r201 = dyn base40(<sym labels>);
    goto L106(r201);
  D60():
    deopt 239 [dx8, yi1, linch];
  D107():
    deopt 414 [labels15];
  L81(dx13):
    nm_2 = ld `nm.2`;
    check L274() else D65();
  L92(dx19):
    st groups = dx19;
    sym29 = ldf rep_len;
    base29 = ldf rep_len in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L309() else L310();
  L107():
    goto L108();
  L108():
    abline = ldf abline;
    check L374() else D112();
  L266():
    linch1 = force? linch;
    checkMissing(linch1);
    r119 = `+`(yi1, linch1);
    goffset = ld goffset;
    check L267() else D61();
  L271():
    dr8 = tryDispatchBuiltin.1("[", nmai9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L273() else L272(dr8);
  L272(nmai11):
    __4 = ldf `[` in base;
    r124 = dyn __4(nmai11, 2);
    goto L81(r124);
  L305():
    dr14 = tryDispatchBuiltin.1("[", groups14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L307() else L306(dr14);
  L306(groups16):
    o4 = ld o;
    check L308() else D79();
  L367():
    labels16 = force? labels15;
    checkMissing(labels16);
    c54 = `==`(labels16, NULL);
    goto L106(c54);
  L368():
    linch2 = ld linch;
    check L369() else D108();
  D61():
    deopt 241 [dx8, r119, goffset];
  D65():
    deopt 256 [dx13, nm_2];
  D79():
    deopt 312 [groups16, o4];
  D108():
    deopt 418 [linch2];
  D112():
    deopt 447 [];
  L93(r149):
    c50 = `is.object`(r149);
    if c50 then L317() else L318(r149);
  L267():
    goffset1 = force? goffset;
    checkMissing(goffset1);
    r120 = `+`(r119, goffset1);
    ginch = ld ginch;
    check L268() else D62();
  L273():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L81(dx12);
  L274():
    nm_3 = force? nm_2;
    checkMissing(nm_3);
    r125 = `<`(dx13, nm_3);
    c43 = `as.logical`(r125);
    if c43 then L275() else L82();
  L307():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L92(dx18);
  L308():
    o5 = force? o4;
    __6 = ldf `[` in base;
    r147 = dyn __6(groups16, o5);
    goto L92(r147);
  L309():
    color1 = ld color;
    check L311() else D80();
  L310():
    r148 = dyn base29(<sym color>, <lang length(groups)>);
    goto L93(r148);
  L369():
    linch3 = force? linch2;
    checkMissing(linch3);
    r204 = `+`(linch3, 0.1);
    lheight = ld lheight;
    check L370() else D109();
  L374():
    p28 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p29 = prom<V +>{
      lcolor3 = ld lcolor;
      lcolor4 = force? lcolor3;
      checkMissing(lcolor4);
      return lcolor4;
    };
    r216 = dyn abline[h, lty, col](p28, "dotted", p29);
    check L375() else D113();
  D62():
    deopt 244 [dx8, ginch];
  D80():
    deopt 318 [color1];
  D109():
    deopt 421 [r204, lheight];
  D113():
    deopt 454 [r216];
  L82():
    goto L84(NULL);
  L84(r129):
    goto L85();
  L95(dx21):
    st color = dx21;
    sym31 = ldf rep_len;
    base31 = ldf rep_len in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L321() else L322();
  L268():
    ginch1 = force? ginch;
    checkMissing(ginch1);
    max2 = ldf max in base;
    r121 = dyn max2(r120, ginch1);
    check L269() else D63();
  L275():
    nm_4 = ld `nm.2`;
    check L276() else D66();
  L311():
    color2 = force? color1;
    checkMissing(color2);
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L312() else L313();
  L317():
    dr16 = tryDispatchBuiltin.1("[", r149);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L319() else L318(dr16);
  L318(r155):
    o6 = ld o;
    check L320() else D84();
  L370():
    lheight1 = force? lheight;
    checkMissing(lheight1);
    r205 = `/`(r204, lheight1);
    st loffset = r205;
    mtext = ldf mtext;
    check L371() else D110();
  L375():
    points = ldf points;
    check L376() else D114();
  D63():
    deopt 247 [dx8, r121];
  D66():
    deopt 259 [nm_4];
  D84():
    deopt 328 [r155, o6];
  D110():
    deopt 426 [];
  D114():
    deopt 456 [];
  L94(r151):
    rep_len1 = ldf rep_len in base;
    r153 = dyn rep_len1(color2, r151);
    check L316() else D83();
  L96(r158):
    c51 = `is.object`(r158);
    if c51 then L329() else L330(r158);
  L269():
    goto L80(dx8, r121);
  L276():
    nm_5 = force? nm_4;
    checkMissing(nm_5);
    l = ld nmai;
    c44 = `is.object`(l);
    if c44 then L277() else L278(nm_5, l);
  L312():
    groups17 = ld groups;
    check L314() else D81();
  L313():
    r150 = dyn base30(<sym groups>);
    goto L94(r150);
  L319():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L95(dx20);
  L320():
    o7 = force? o6;
    __7 = ldf `[` in base;
    r156 = dyn __7(r155, o7);
    goto L95(r156);
  L321():
    lcolor1 = ld lcolor;
    check L323() else D85();
  L322():
    r157 = dyn base31(<sym lcolor>, <lang length(groups)>);
    goto L96(r157);
  L371():
    p23 = prom<V +>{
      labels17 = ld labels;
      labels18 = force? labels17;
      checkMissing(labels18);
      c56 = `is.object`(labels18);
      if c56 then L1() else L2(labels18);
    L0(dx27):
      return dx27;
    L1():
      dr22 = tryDispatchBuiltin.1("[", labels18);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(labels20):
      o12 = ld o;
      o13 = force? o12;
      __10 = ldf `[` in base;
      r206 = dyn __10(labels20, o13);
      goto L0(r206);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx26);
    };
    p24 = prom<V +>{
      loffset = ld loffset;
      loffset1 = force? loffset;
      checkMissing(loffset1);
      return loffset1;
    };
    p25 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p26 = prom<V +>{
      color3 = ld color;
      color4 = force? color3;
      checkMissing(color4);
      return color4;
    };
    p27 = prom<V +>{
      cex5 = ld cex;
      cex6 = force? cex5;
      checkMissing(cex6);
      return cex6;
    };
    ddd1 = ld `...`;
    r212 = dyn mtext[, side, line, at, adj, col, las, cex, `...`](p23, 2.0, p24, p25, 0.0, p26, 2.0, p27, ddd1);
    check L372() else D111();
  L376():
    p30 = prom<V +>{
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      return x33;
    };
    p31 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p32 = prom<V +>{
      pch3 = ld pch;
      pch4 = force? pch3;
      checkMissing(pch4);
      return pch4;
    };
    p33 = prom<V +>{
      color5 = ld color;
      color6 = force? color5;
      checkMissing(color6);
      return color6;
    };
    p34 = prom<V +>{
      bg1 = ld bg;
      bg2 = force? bg1;
      checkMissing(bg2);
      return bg2;
    };
    p35 = prom<V +>{
      pt_cex1 = ld `pt.cex`;
      pt_cex2 = force? pt_cex1;
      checkMissing(pt_cex2);
      cex7 = ld cex;
      cex8 = force? cex7;
      checkMissing(cex8);
      r222 = `/`(pt_cex2, cex8);
      return r222;
    };
    r224 = dyn points[, , pch, col, bg, cex](p30, p31, p32, p33, p34, p35);
    check L377() else D115();
  D81():
    deopt 322 [groups17];
  D83():
    deopt 327 [r153];
  D85():
    deopt 334 [lcolor1];
  D111():
    deopt 443 [r212];
  D115():
    deopt 467 [r224];
  L83(dx15):
    st nmai = dx15;
    par8 = ldf par;
    check L280() else D67();
  L98(dx23):
    st lcolor = dx23;
    sym33 = ldf rep_len;
    base33 = ldf rep_len in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L333() else L334();
  L277():
    dr10 = tryDispatchBuiltin.0("[<-", l, nm_5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L279() else L278(nm_5, dr10);
  L278(nm_7, l2):
    ___ = ldf `[<-` in base;
    r126 = dyn ___(l2, nm_5, 2);
    goto L83(r126);
  L314():
    groups18 = force? groups17;
    checkMissing(groups18);
    length1 = ldf length in base;
    r152 = dyn length1(groups18);
    check L315() else D82();
  L316():
    goto L93(r153);
  L323():
    lcolor2 = force? lcolor1;
    checkMissing(lcolor2);
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L324() else L325();
  L329():
    dr18 = tryDispatchBuiltin.1("[", r158);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L331() else L330(dr18);
  L330(r164):
    o8 = ld o;
    check L332() else D89();
  L372():
    goto L108();
  L377():
    sym41 = ldf `is.null`;
    base41 = ldf `is.null` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L378() else L379();
  D67():
    deopt 267 [];
  D82():
    deopt 325 [r152];
  D89():
    deopt 344 [r164, o8];
  L97(r160):
    rep_len2 = ldf rep_len in base;
    r162 = dyn rep_len2(lcolor2, r160);
    check L328() else D88();
  L99(r167):
    c52 = `is.object`(r167);
    if c52 then L341() else L342(r167);
  L109(r226):
    r227 = `!`(r226);
    c58 = `as.logical`(r227);
    if c58 then L381() else L110();
  L279():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L83(dx14);
  L280():
    p17 = prom<V +>{
      nmai12 = ld nmai;
      nmai13 = force? nmai12;
      checkMissing(nmai13);
      return nmai13;
    };
    r128 = dyn par8[mai](p17);
    check L281() else D68();
  L315():
    goto L94(r152);
  L324():
    groups19 = ld groups;
    check L326() else D86();
  L325():
    r159 = dyn base32(<sym groups>);
    goto L97(r159);
  L331():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L98(dx22);
  L332():
    o9 = force? o8;
    __8 = ldf `[` in base;
    r165 = dyn __8(r164, o9);
    goto L98(r165);
  L333():
    pch1 = ld pch;
    check L335() else D90();
  L334():
    r166 = dyn base33(<sym pch>, <lang length(groups)>);
    goto L99(r166);
  L378():
    groups25 = ld groups;
    check L380() else D116();
  L379():
    r225 = dyn base41(<sym groups>);
    goto L109(r225);
  D68():
    deopt 270 [r128];
  D86():
    deopt 338 [groups19];
  D88():
    deopt 343 [r162];
  D90():
    deopt 350 [pch1];
  D116():
    deopt 469 [groups25];
  L101(dx25):
    st pch = dx25;
    sym35 = ldf cumsum;
    base35 = ldf cumsum in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L345() else L346();
  L110():
    goto L116();
  L116():
    axis = ldf axis;
    check L408() else D134();
  L281():
    goto L84(r128);
  L326():
    groups20 = force? groups19;
    checkMissing(groups20);
    length2 = ldf length in base;
    r161 = dyn length2(groups20);
    check L327() else D87();
  L328():
    goto L96(r162);
  L335():
    pch2 = force? pch1;
    checkMissing(pch2);
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L336() else L337();
  L341():
    dr20 = tryDispatchBuiltin.1("[", r167);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L343() else L342(dr20);
  L342(r173):
    o10 = ld o;
    check L344() else D94();
  L380():
    groups26 = force? groups25;
    checkMissing(groups26);
    c57 = `==`(groups26, NULL);
    goto L109(c57);
  L381():
    rev = ldf rev;
    check L382() else D117();
  D87():
    deopt 341 [r161];
  D94():
    deopt 360 [r173, o10];
  D117():
    deopt 474 [];
  D134():
    deopt 557 [];
  L100(r169):
    rep_len3 = ldf rep_len in base;
    r171 = dyn rep_len3(pch2, r169);
    check L340() else D93();
  L102(r176):
    st `of.1` = r176;
    sym38 = ldf seq_len;
    base38 = ldf seq_len in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L353() else L354();
  L327():
    goto L97(r161);
  L336():
    groups21 = ld groups;
    check L338() else D91();
  L337():
    r168 = dyn base34(<sym groups>);
    goto L100(r168);
  L343():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L101(dx24);
  L344():
    o11 = force? o10;
    __9 = ldf `[` in base;
    r174 = dyn __9(r173, o11);
    goto L101(r174);
  L345():
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L347() else L348();
  L346():
    r175 = dyn base35(<lang c(0.0, `!=`(diff(as.numeric(groups)), 0.0))>);
    goto L102(r175);
  L382():
    p40 = prom<V +>{
      sym42 = ldf cumsum;
      base42 = ldf cumsum in base;
      guard42 = `==`.4(sym42, base42);
      if guard42 then L1() else L2();
    L0(r229):
      r238 = `-`(r229, 1.0);
      return r238;
    L1():
      rev1 = ldf rev;
      p39 = prom<V +>{
        tapply = ldf tapply;
        p36 = prom<V +>{
          groups27 = ld groups;
          groups28 = force? groups27;
          checkMissing(groups28);
          return groups28;
        };
        p37 = prom<V +>{
          groups29 = ld groups;
          groups30 = force? groups29;
          checkMissing(groups30);
          return groups30;
        };
        p38 = prom<V +>{
          length4 = ld length;
          length5 = force? length4;
          checkMissing(length5);
          return length5;
        };
        r233 = dyn tapply(p36, p37, p38);
        return r233;
      };
      r235 = dyn rev1(p39);
      r236 = `+`(r235, 2.0);
      cumsum1 = ldf cumsum in base;
      r237 = dyn cumsum1(r236);
      goto L0(r237);
    L2():
      r228 = dyn base42(<lang `+`(rev(tapply(groups, groups, length)), 2.0)>);
      goto L0(r228);
    };
    r240 = dyn rev(p40);
    check L383() else D118();
  L408():
    p54 = prom<V +>{
      xaxt1 = ld xaxt;
      xaxt2 = force? xaxt1;
      checkMissing(xaxt2);
      return xaxt2;
    };
    r274 = dyn axis[, xaxt](1.0, p54);
    check L409() else D135();
  D91():
    deopt 354 [groups21];
  D93():
    deopt 359 [r171];
  D118():
    deopt 476 [r240];
  D135():
    deopt 561 [r274];
  L103(r178):
    cumsum = ldf cumsum in base;
    r186 = dyn cumsum(r178);
    check L352() else D98();
  L104(r188):
    of_1 = ld `of.1`;
    check L356() else D100();
  L338():
    groups22 = force? groups21;
    checkMissing(groups22);
    length3 = ldf length in base;
    r170 = dyn length3(groups22);
    check L339() else D92();
  L340():
    goto L99(r171);
  L347():
    diff = ldf diff;
    check L349() else D95();
  L348():
    r177 = dyn base36(0.0, <lang `!=`(diff(as.numeric(groups)), 0.0)>);
    goto L103(r177);
  L353():
    n6 = ld n;
    check L355() else D99();
  L354():
    r187 = dyn base38(<sym n>);
    goto L104(r187);
  L383():
    st gpos = r240;
    sym43 = ldf max;
    base43 = ldf max in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L384() else L385();
  L409():
    frame_plot1 = ld `frame.plot`;
    check L410() else D136();
  D92():
    deopt 357 [r170];
  D95():
    deopt 370 [];
  D98():
    deopt 378 [r186];
  D99():
    deopt 381 [n6];
  D100():
    deopt 384 [r188, 2.0, of_1];
  D136():
    deopt 562 [frame_plot1];
  L111(r242):
    st ginch = r242;
    sym44 = ldf max;
    base44 = ldf max in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L389() else L390();
  L339():
    goto L100(r170);
  L349():
    p19 = prom<V +>{
      sym37 = ldf `as.numeric`;
      base37 = ldf `as.numeric` in base;
      guard37 = `==`.4(sym37, base37);
      if guard37 then L1() else L2();
    L0(r180):
      return r180;
    L1():
      groups23 = ld groups;
      groups24 = force? groups23;
      checkMissing(groups24);
      as_numeric2 = ldf `as.numeric` in base;
      r181 = dyn as_numeric2(groups24);
      goto L0(r181);
    L2():
      r179 = dyn base37(<sym groups>);
      goto L0(r179);
    };
    r183 = dyn diff(p19);
    check L350() else D96();
  L352():
    goto L102(r186);
  L355():
    n7 = force? n6;
    checkMissing(n7);
    r189 = seq_len(n7);
    goto L104(r189);
  L356():
    of_2 = force? of_1;
    checkMissing(of_2);
    r190 = `*`(2.0, of_2);
    r191 = `+`(r188, r190);
    st y = r191;
    sym39 = ldf range;
    base39 = ldf range in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L357() else L358();
  L384():
    strwidth2 = ldf strwidth;
    check L386() else D119();
  L385():
    r241 = dyn base43[, `na.rm`](<lang strwidth(glabels, "inch")>, TRUE);
    goto L111(r241);
  L410():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c61 = `as.logical`(frame_plot2);
    if c61 then L411() else L117();
  D96():
    deopt 372 [r183];
  D119():
    deopt 481 [];
  L105(r193):
    st ylim = r193;
    goto L90();
  L112(r247):
    r250 = `+`(r247, 0.0625);
    lheight2 = ld lheight;
    check L395() else D126();
  L117():
    goto L118();
  L118():
    ann5 = ld ann;
    check L415() else D139();
  L350():
    r184 = `!=`(r183, 0.0);
    c53 = ldf c in base;
    r185 = dyn c53(0.0, r184);
    check L351() else D97();
  L357():
    y = ld y;
    check L359() else D101();
  L358():
    r192 = dyn base39(0.0, <lang `+`(y, 2.0)>);
    goto L105(r192);
  L386():
    p41 = prom<V +>{
      glabels6 = ld glabels;
      glabels7 = force? glabels6;
      checkMissing(glabels7);
      return glabels7;
    };
    r244 = dyn strwidth2(p41, "inch");
    check L387() else D120();
  L389():
    linch4 = ld linch;
    check L391() else D122();
  L390():
    r246 = dyn base44[, , `na.rm`](<lang `+`(linch, offset)>, <sym ginch>, TRUE);
    goto L112(r246);
  L411():
    box = ldf box;
    check L412() else D137();
  D97():
    deopt 376 [r185];
  D101():
    deopt 392 [y];
  D120():
    deopt 484 [r244];
  D122():
    deopt 492 [linch4];
  D126():
    deopt 503 [r250, lheight2];
  D137():
    deopt 565 [];
  D139():
    deopt 569 [ann5];
  L351():
    goto L103(r185);
  L359():
    y1 = force? y;
    checkMissing(y1);
    r194 = `+`(y1, 2.0);
    range1 = ldf range in base;
    r195 = dyn range1(0.0, r194);
    check L360() else D102();
  L387():
    max3 = ldf max in base;
    r245 = dyn max3(r244, TRUE);
    check L388() else D121();
  L391():
    linch5 = force? linch4;
    checkMissing(linch5);
    offset5 = ld offset;
    check L392() else D123();
  L395():
    lheight3 = force? lheight2;
    checkMissing(lheight3);
    r251 = `/`(r250, lheight3);
    st goffset = r251;
    mtext1 = ldf mtext;
    check L396() else D127();
  L412():
    r275 = dyn box();
    check L413() else D138();
  L415():
    ann6 = force? ann5;
    checkMissing(ann6);
    c62 = `as.logical`(ann6);
    if c62 then L416() else L119();
  D102():
    deopt 397 [r195];
  D121():
    deopt 488 [r245];
  D123():
    deopt 493 [linch5, offset5];
  D127():
    deopt 508 [];
  D138():
    deopt 566 [r275];
  L119():
    goto L120();
  L120():
    sym48 = ldf invisible;
    base48 = ldf invisible in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L426() else L427();
  L360():
    goto L105(r195);
  L388():
    goto L111(r245);
  L392():
    offset6 = force? offset5;
    checkMissing(offset6);
    r248 = `+`(linch5, offset6);
    ginch2 = ld ginch;
    check L393() else D124();
  L396():
    p42 = prom<V +>{
      glabels8 = ld glabels;
      glabels9 = force? glabels8;
      checkMissing(glabels9);
      return glabels9;
    };
    p43 = prom<V +>{
      goffset2 = ld goffset;
      goffset3 = force? goffset2;
      checkMissing(goffset3);
      return goffset3;
    };
    p44 = prom<V +>{
      gpos = ld gpos;
      gpos1 = force? gpos;
      checkMissing(gpos1);
      return gpos1;
    };
    p45 = prom<V +>{
      gcolor1 = ld gcolor;
      gcolor2 = force? gcolor1;
      checkMissing(gcolor2);
      return gcolor2;
    };
    p46 = prom<V +>{
      cex9 = ld cex;
      cex10 = force? cex9;
      checkMissing(cex10);
      return cex10;
    };
    ddd2 = ld `...`;
    r257 = dyn mtext1[, side, line, at, adj, col, las, cex, `...`](p42, 2.0, p43, p44, 0.0, p45, 2.0, p46, ddd2);
    check L397() else D128();
  L413():
    goto L118();
  L416():
    title = ldf title;
    check L417() else D140();
  D124():
    deopt 496 [ginch2];
  D128():
    deopt 525 [r257];
  D140():
    deopt 572 [];
  L121(r297):
    popenv;
    return r297;
  L393():
    ginch3 = force? ginch2;
    checkMissing(ginch3);
    max4 = ldf max in base;
    r249 = dyn max4(r248, ginch3, TRUE);
    check L394() else D125();
  L397():
    sym45 = ldf `is.null`;
    base45 = ldf `is.null` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L398() else L399();
  L417():
    p55 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p56 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    ddd4 = ld `...`;
    r279 = dyn title[main, xlab, `...`](p55, p56, ddd4);
    check L418() else D141();
  L426():
    invisible = ldf invisible in base;
    r298 = dyn invisible();
    check L428() else D148();
  L427():
    r296 = dyn base48();
    goto L121(r296);
  D125():
    deopt 501 [r249];
  D141():
    deopt 578 [r279];
  D148():
    deopt 600 [r298];
  L113(r259):
    r260 = `!`(r259);
    c60 = `as.logical`(r260);
    if c60 then L401() else L114();
  L394():
    goto L112(r249);
  L398():
    gdata1 = ld gdata;
    check L400() else D129();
  L399():
    r258 = dyn base45(<sym gdata>);
    goto L113(r258);
  L418():
    par10 = ldf par;
    check L419() else D142();
  L428():
    goto L121(r298);
  D129():
    deopt 527 [gdata1];
  D142():
    deopt 580 [];
  L114():
    goto L115(NULL);
  L115(r271):
    goto L116();
  L400():
    gdata2 = force? gdata1;
    checkMissing(gdata2);
    c59 = `==`(gdata2, NULL);
    goto L113(c59);
  L401():
    abline1 = ldf abline;
    check L402() else D130();
  L419():
    r280 = dyn par10("mgp");
    check L420() else D143();
  D130():
    deopt 532 [];
  D143():
    deopt 582 [r280];
  L402():
    p47 = prom<V +>{
      gpos2 = ld gpos;
      gpos3 = force? gpos2;
      checkMissing(gpos3);
      return gpos3;
    };
    r262 = dyn abline1[h, lty](p47, "dotted");
    check L403() else D131();
  L420():
    st mgp = r280;
    par11 = ldf par;
    check L421() else D144();
  D131():
    deopt 537 [r262];
  D144():
    deopt 585 [];
  L403():
    points1 = ldf points;
    check L404() else D132();
  L421():
    p57 = prom<V +>{
      sym46 = ldf c;
      base46 = ldf c in base;
      guard46 = `==`.4(sym46, base46);
      if guard46 then L4() else L5();
    L0(r282):
      return r282;
    L4():
      sym47 = ldf max;
      base47 = ldf max in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L6() else L7();
    L5():
      r281 = dyn base46(<lang max(`[`(mgp, 1.0), `-`(`/`(nm.2, lheight), 1.5))>, <lang `[`(mgp, `-`(1.0))>);
      goto L0(r281);
    L1(r284):
      mgp4 = ld mgp;
      mgp5 = force? mgp4;
      checkMissing(mgp5);
      c64 = `is.object`(mgp5);
      if c64 then L11() else L12(mgp5);
    L6():
      mgp = ld mgp;
      mgp1 = force? mgp;
      checkMissing(mgp1);
      c63 = `is.object`(mgp1);
      if c63 then L8() else L9(mgp1);
    L7():
      r283 = dyn base47(<lang `[`(mgp, 1.0)>, <lang `-`(`/`(nm.2, lheight), 1.5)>);
      goto L1(r283);
    L2(dx29):
      nm_10 = ld `nm.2`;
      nm_11 = force? nm_10;
      checkMissing(nm_11);
      lheight4 = ld lheight;
      lheight5 = force? lheight4;
      checkMissing(lheight5);
      r286 = `/`(nm_11, lheight5);
      r287 = `-`(r286, 1.5);
      max5 = ldf max in base;
      r288 = dyn max5(dx29, r287);
      goto L1(r288);
    L3(dx31):
      c65 = ldf c in base;
      r290 = dyn c65(r284, dx31);
      goto L0(r290);
    L8():
      dr24 = tryDispatchBuiltin.1("[", mgp1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L10() else L9(dr24);
    L9(mgp3):
      __11 = ldf `[` in base;
      r285 = dyn __11(mgp3, 1.0);
      goto L2(r285);
    L11():
      dr26 = tryDispatchBuiltin.1("[", mgp5);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L13() else L12(dr26);
    L12(mgp7):
      __12 = ldf `[` in base;
      r289 = dyn __12(mgp7, -1.0);
      goto L3(r289);
    L10():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L2(dx28);
    L13():
      dx30 = getTryDispatchBuiltinValue(dr26);
      goto L3(dx30);
    };
    r292 = dyn par11[mgp](p57);
    check L422() else D145();
  D132():
    deopt 539 [];
  D145():
    deopt 588 [r292];
  L404():
    p48 = prom<V +>{
      gdata3 = ld gdata;
      gdata4 = force? gdata3;
      checkMissing(gdata4);
      return gdata4;
    };
    p49 = prom<V +>{
      gpos4 = ld gpos;
      gpos5 = force? gpos4;
      checkMissing(gpos5);
      return gpos5;
    };
    p50 = prom<V +>{
      gpch1 = ld gpch;
      gpch2 = force? gpch1;
      checkMissing(gpch2);
      return gpch2;
    };
    p51 = prom<V +>{
      gcolor3 = ld gcolor;
      gcolor4 = force? gcolor3;
      checkMissing(gcolor4);
      return gcolor4;
    };
    p52 = prom<V +>{
      bg3 = ld bg;
      bg4 = force? bg3;
      checkMissing(bg4);
      return bg4;
    };
    p53 = prom<V +>{
      pt_cex3 = ld `pt.cex`;
      pt_cex4 = force? pt_cex3;
      checkMissing(pt_cex4);
      cex11 = ld cex;
      cex12 = force? cex11;
      checkMissing(cex12);
      r268 = `/`(pt_cex4, cex12);
      return r268;
    };
    ddd3 = ld `...`;
    r270 = dyn points1[, , pch, col, bg, cex, `...`](p48, p49, p50, p51, p52, p53, ddd3);
    check L405() else D133();
  L422():
    title1 = ldf title;
    check L423() else D146();
  D133():
    deopt 551 [r270];
  D146():
    deopt 590 [];
  L405():
    goto L115(r270);
  L423():
    p58 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd5 = ld `...`;
    r294 = dyn title1[ylab, `...`](p58, ddd5);
    check L424() else D147();
  D147():
    deopt 594 [r294];
  L424():
    goto L120();
  }
}