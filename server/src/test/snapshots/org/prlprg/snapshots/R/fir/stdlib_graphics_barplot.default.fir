fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3650779308;
    st `barplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3650779308(height, width, space, `names.arg`, `legend.text`, beside, horiz, density, angle, col, border, main, sub, xlab, ylab, xlim, ylim, xpd, log, axes, axisnames, `cex.axis`, `cex.names`, inside, plot, `axis.lty`, offset, add, ann, `args.legend`, `...`) {
  (reg height:*, reg width:*, reg space:*, reg names_arg:*, reg legend_text:*, reg beside:*, reg horiz:*, reg density:*, reg angle:*, reg col:*, reg border:*, reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg xlim:*, reg ylim:*, reg xpd:*, reg log:*, reg axes:*, reg axisnames:*, reg cex_axis:*, reg cex_names:*, reg inside:*, reg plot:*, reg axis_lty:*, reg offset:*, reg add:*, reg ann:*, reg args_legend:*, reg ddd:dots) -+> V { var height:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var space:*, reg space_isMissing:L, reg space_orDefault:*, var `names.arg`:*, reg names_arg_isMissing:L, reg names_arg_orDefault:*, var `legend.text`:*, reg legend_text_isMissing:L, reg legend_text_orDefault:*, var beside:*, reg beside_isMissing:L, reg beside_orDefault:*, var horiz:*, reg horiz_isMissing:L, reg horiz_orDefault:*, var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var xpd:*, reg xpd_isMissing:L, reg xpd_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var axisnames:*, reg axisnames_isMissing:L, reg axisnames_orDefault:*, var `cex.axis`:*, reg cex_axis_isMissing:L, reg cex_axis_orDefault:*, reg par1:cls, reg r2:V, reg p1:p(V +), var `cex.names`:*, reg cex_names_isMissing:L, reg cex_names_orDefault:*, reg par2:cls, reg r4:V, reg p2:p(V +), var inside:*, reg inside_isMissing:L, reg inside_orDefault:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `axis.lty`:*, reg axis_lty_isMissing:L, reg axis_lty_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, reg add1:*, reg add2:V, reg r6:V, reg c:L, reg c2:V, reg par3:cls, reg r7:V, reg c3:L, reg c4:V, reg p3:p(V +), var `args.legend`:*, reg args_legend_isMissing:L, reg args_legend_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg r12:V, reg c6:L, reg _NotYetUsed:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg space1:*, reg space2:V, reg c7:V, reg c8:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg height1:*, reg height2:V, reg is_matrix:cls, reg r19:V, reg c9:L, reg c11:V, reg beside1:*, reg beside2:V, reg c12:L, reg c13:V, reg c15:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg c16:cls, reg r22:V, reg r23:V, reg space3:*, reg space4:V, reg mean:cls, reg width1:*, reg width2:V, reg p4:p(V +), reg r26:V, reg r27:V, reg plot1:*, reg plot2:V, reg c17:L, reg c19:V, reg axisnames1:*, reg axisnames2:V, reg c20:L, reg c21:V, reg c23:L, reg c25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg c28:L, reg r29:V, reg names_arg1:*, reg names_arg2:V, reg c29:V, reg c30:L, reg c31:V, reg c33:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg height3:*, reg height4:V, reg is_matrix1:cls, reg r32:V, reg c34:L, reg colnames:cls, reg height5:*, reg height6:V, reg p5:p(V +), reg r34:V, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg height7:*, reg height8:V, reg names:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg height9:*, reg height10:V, reg is_vector:cls, reg r41:V, reg c35:L, reg c36:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg c40:L, reg r43:V, reg height11:*, reg height12:V, reg is_array:cls, reg r44:V, reg c41:L, reg c44:L, reg c45:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg c50:L, reg c51:L, reg r46:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg c56:L, reg c57:L, reg r48:V, reg height13:*, reg height14:V, reg dim:cls, reg r49:V, reg length:cls, reg r50:V, reg r51:V, reg c58:L, reg c59:V, reg c62:L, reg c63:V, reg vectorInput:*, reg vectorInput1:V, reg c65:L, reg cbind:cls, reg height15:*, reg height16:V, reg p6:p(V +), reg r53:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r54:V, reg r55:V, reg col1:*, reg col2:V, reg c66:V, reg c67:L, reg r56:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r58:V, reg r59:V, reg height17:*, reg height18:V, reg is_matrix2:cls, reg r60:V, reg c68:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg r62:V, reg col3:*, reg col4:V, reg c69:V, reg c70:L, reg gray_colors:cls, reg nrow:cls, reg height19:*, reg height20:V, reg p7:p(V +), reg r64:V, reg p8:p(V +), reg r66:V, reg r67:V, reg stop:cls, reg r68:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg r70:V, reg legend_text1:*, reg legend_text2:V, reg c71:L, reg c72:L, reg isTRUE:cls, reg legend_text3:*, reg legend_text4:V, reg p9:p(V +), reg r72:V, reg c73:L, reg c75:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r73:V, reg c78:L, reg r74:V, reg height21:*, reg height22:V, reg is_matrix3:cls, reg r75:V, reg c79:L, reg c80:V, reg c82:L, reg rownames:cls, reg height23:*, reg height24:V, reg p10:p(V +), reg r77:V, reg r78:V, reg stopifnot:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r80:V, reg r81:V, reg log1:*, reg log2:V, reg c83:L, reg p11:p(V +), reg r83:V, reg log3:*, reg log4:V, reg r84:V, reg c84:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r85:V, reg r86:V, reg grep:cls, reg log5:*, reg log6:V, reg p12:p(V +), reg r88:V, reg length1:cls, reg r89:V, reg r90:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r91:V, reg r92:V, reg grep1:cls, reg log7:*, reg log8:V, reg p13:p(V +), reg r94:V, reg length2:cls, reg r95:V, reg r96:V, reg logx:*, reg logx1:V, reg c85:L, reg c86:V, reg logy:*, reg logy1:V, reg c88:L, reg c89:V, reg c91:L, reg c93:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r98:V, reg c96:L, reg r99:V, reg density1:*, reg density2:V, reg c97:V, reg r100:V, reg c98:L, reg c99:V, reg c101:L, reg stop1:cls, reg r101:V, reg nrow1:cls, reg height25:*, reg height26:V, reg p14:p(V +), reg r104:V, reg ncol:cls, reg height27:*, reg height28:V, reg p15:p(V +), reg r106:V, reg beside3:*, reg beside4:V, reg c102:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r107:V, reg r108:V, reg space5:*, reg space6:V, reg length3:cls, reg r109:V, reg r110:V, reg c103:L, reg c105:V, reg vectorInput2:*, reg vectorInput3:V, reg r111:V, reg c106:L, reg c107:V, reg c109:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r112:V, reg r113:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r114:V, reg r115:V, reg space7:*, reg space8:V, reg c110:L, reg space10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r116:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r117:V, reg r118:V, reg space11:*, reg space12:V, reg c111:L, reg space14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r119:V, reg NR:*, reg NR1:V, reg r120:V, reg rep_int:cls, reg r121:V, reg c112:cls, reg r122:V, reg NC:*, reg NC1:V, reg rep_int1:cls, reg r123:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r125:V, reg r126:V, reg width3:*, reg width4:V, reg NR2:*, reg NR3:V, reg rep_len:cls, reg r127:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r129:V, reg r130:V, reg width5:*, reg width6:V, reg NC2:*, reg NC3:V, reg rep_len1:cls, reg r131:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r132:V, reg r133:V, reg as_vector:cls, reg offset1:*, reg offset2:V, reg p16:p(V +), reg r135:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r136:V, reg r137:V, reg width7:*, reg width8:V, reg length4:cls, reg r138:V, reg rep_len2:cls, reg r139:V, reg width9:*, reg width10:V, reg r140:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r141:V, reg r142:V, reg space15:*, reg space16:V, reg width11:*, reg width12:V, reg r143:V, reg cumsum:cls, reg r144:V, reg w_r:*, reg w_r1:V, reg delta:*, reg delta1:V, reg r145:V, reg w_m:*, reg w_m1:V, reg delta2:*, reg delta3:V, reg r146:V, reg logx2:*, reg logx3:V, reg c113:L, reg c115:V, reg horiz1:*, reg horiz2:V, reg c116:L, reg c117:V, reg c119:L, reg c120:V, reg logy2:*, reg logy3:V, reg c122:L, reg c125:L, reg c126:V, reg horiz3:*, reg horiz4:V, reg r147:V, reg c127:L, reg c128:V, reg c131:L, reg c132:V, reg log_dat:*, reg log_dat1:V, reg c134:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r148:V, reg r149:V, reg height29:*, reg height30:V, reg offset3:*, reg offset4:V, reg r150:V, reg min:cls, reg r151:V, reg r152:V, reg c135:L, reg stop2:cls, reg r153:V, reg logx4:*, reg logx5:V, reg c136:L, reg c138:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r155:V, reg c141:L, reg r156:V, reg xlim1:*, reg xlim2:V, reg c142:V, reg r157:V, reg c143:L, reg c144:V, reg c146:L, reg c148:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r158:V, reg c151:L, reg r159:V, reg xlim3:*, reg xlim4:V, reg min1:cls, reg r160:V, reg r161:V, reg c152:L, reg c153:V, reg c155:L, reg stop3:cls, reg r162:V, reg logy4:*, reg logy5:V, reg c156:L, reg c158:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r164:V, reg c161:L, reg r165:V, reg ylim1:*, reg ylim2:V, reg c162:V, reg r166:V, reg c163:L, reg c164:V, reg c166:L, reg c168:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r167:V, reg c171:L, reg r168:V, reg ylim3:*, reg ylim4:V, reg min2:cls, reg r169:V, reg r170:V, reg c172:L, reg c173:V, reg c175:L, reg stop4:cls, reg r171:V, reg logy6:*, reg logy7:V, reg c176:L, reg c178:V, reg horiz5:*, reg horiz6:V, reg r173:V, reg c179:L, reg c180:V, reg c182:L, reg c184:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r174:V, reg c187:L, reg r175:V, reg ylim5:*, reg ylim6:V, reg c188:V, reg r176:V, reg c189:L, reg c190:V, reg c192:L, reg ylim7:*, reg ylim8:V, reg c193:L, reg ylim10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r177:V, reg dx6:V, reg logx6:*, reg logx7:V, reg c194:L, reg c196:V, reg horiz7:*, reg horiz8:V, reg c197:L, reg c198:V, reg c200:L, reg c202:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r178:V, reg c205:L, reg r179:V, reg xlim5:*, reg xlim6:V, reg c206:V, reg r180:V, reg c207:L, reg c208:V, reg c210:L, reg xlim7:*, reg xlim8:V, reg c211:L, reg xlim10:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r181:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r184:V, reg r185:R, reg r186:V, reg height31:*, reg height32:V, reg min3:cls, reg r187:V, reg r188:V, reg beside5:*, reg beside6:V, reg r189:V, reg c212:L, reg rbind:cls, reg rectbase:*, reg rectbase1:V, reg p17:p(V +), reg apply:cls, reg height33:*, reg height34:V, reg p18:p(V +), reg cumsum1:*, reg cumsum2:V, reg p19:p(V +), reg r193:V, reg p20:p(V +), reg r195:V, reg offset5:*, reg offset6:V, reg log_dat2:*, reg log_dat3:V, reg c213:L, reg height35:*, reg height36:V, reg r197:V, reg offset9:V, reg r198:V, reg height37:*, reg height38:V, reg r199:V, reg r200:V, reg width13:*, reg width14:V, reg r201:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r202:V, reg r203:V, reg space17:*, reg space18:V, reg width15:*, reg width16:V, reg r204:V, reg cumsum3:cls, reg r205:V, reg w_r2:*, reg w_r3:V, reg delta4:*, reg delta5:V, reg r206:V, reg w_m2:*, reg w_m3:V, reg delta6:*, reg delta7:V, reg r207:V, reg horiz9:*, reg horiz10:V, reg c214:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r208:V, reg r209:V, reg xlim11:*, reg xlim12:V, reg c215:V, reg c216:L, reg sym39:cls, reg base39:cls, reg guard39:L, reg r210:V, reg r211:V, reg rAdj:*, reg rAdj1:V, reg height39:*, reg height40:V, reg offset10:*, reg offset11:V, reg r212:V, reg range:cls, reg r213:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r215:V, reg r216:V, reg ylim11:*, reg ylim12:V, reg c217:V, reg c218:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r217:V, reg r218:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r219:V, reg r220:V, reg w_l:*, reg w_l1:V, reg min4:cls, reg r221:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r222:V, reg r223:V, reg w_r4:*, reg w_r5:V, reg max:cls, reg r224:V, reg c219:cls, reg r225:V, reg r226:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r228:V, reg r229:V, reg xlim13:*, reg xlim14:V, reg c220:V, reg c221:L, reg sym45:cls, reg base45:cls, reg guard45:L, reg r230:V, reg r231:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r232:V, reg r233:V, reg w_l2:*, reg w_l3:V, reg min5:cls, reg r234:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r235:V, reg r236:V, reg w_r6:*, reg w_r7:V, reg max1:cls, reg r237:V, reg c222:cls, reg r238:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r240:V, reg r241:V, reg ylim13:*, reg ylim14:V, reg c223:V, reg c224:L, reg sym49:cls, reg base49:cls, reg guard49:L, reg r242:V, reg r243:V, reg rAdj2:*, reg rAdj3:V, reg height41:*, reg height42:V, reg offset12:*, reg offset13:V, reg r244:V, reg range1:cls, reg r245:V, reg beside7:*, reg beside8:V, reg c225:L, reg matrix:cls, reg w_m4:*, reg w_m5:V, reg p21:p(V +), reg NC4:*, reg NC5:V, reg p22:p(V +), reg r248:V, reg plot3:*, reg plot4:V, reg c226:L, reg dev_hold:cls, reg r250:V, reg horiz11:*, reg horiz12:V, reg c227:L, reg par4:cls, reg xpd1:*, reg xpd2:V, reg p23:p(V +), reg r252:V, reg r253:V, reg par5:cls, reg xpd3:*, reg xpd4:V, reg p24:p(V +), reg r255:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r256:V, reg on_exit:cls, reg r258:V, reg add3:*, reg add4:V, reg r259:V, reg c228:L, reg plot_new:cls, reg r260:V, reg plot_window:cls, reg xlim15:*, reg xlim16:V, reg p25:p(V +), reg ylim15:*, reg ylim16:V, reg p26:p(V +), reg log9:*, reg log10:V, reg p27:p(V +), reg ddd1:dots?, reg r264:V, reg r266:cls, reg beside9:*, reg beside10:V, reg c229:L, reg xyrect:cls, reg rectbase2:*, reg rectbase3:V, reg offset14:*, reg offset15:V, reg r267:V, reg p28:p(V +), reg w_l4:*, reg w_l5:V, reg p29:p(V +), reg sym51:cls, reg base51:cls, reg guard51:L, reg r270:V, reg r271:V, reg height43:*, reg height44:V, reg c230:cls, reg r272:V, reg offset16:*, reg offset17:V, reg r273:V, reg p30:p(V +), reg w_r8:*, reg w_r9:V, reg p31:p(V +), reg horiz13:*, reg horiz14:V, reg p32:p(V +), reg angle1:*, reg angle2:V, reg p33:p(V +), reg density3:*, reg density4:V, reg p34:p(V +), reg col5:*, reg col6:V, reg p35:p(V +), reg border1:*, reg border2:V, reg p36:p(V +), reg r281:V, reg NC6:*, reg NC7:V, reg r283:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c231:L, reg x:V, reg xyrect1:cls, reg height45:*, reg height46:V, reg c232:L, reg height48:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg NR4:*, reg NR5:V, reg r284:V, reg i5:*, reg i6:V, reg __4:cls, reg r285:V, reg offset18:*, reg offset19:V, reg c233:L, reg dx13:V, reg offset21:V, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg dx17:V, reg i7:*, reg i8:V, reg __5:cls, reg r286:V, reg r287:V, reg p37:p(V +), reg w_l6:*, reg w_l7:V, reg c234:L, reg w_l9:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg i9:*, reg i10:V, reg __6:cls, reg r289:V, reg p38:p(V +), reg height49:*, reg height50:V, reg c235:L, reg height52:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg i11:*, reg i12:V, reg __7:cls, reg r291:V, reg offset22:*, reg offset23:V, reg c236:L, reg dx23:V, reg offset25:V, reg dr16:V, reg dc8:L, reg dx25:V, reg dx26:V, reg dx27:V, reg i13:*, reg i14:V, reg __8:cls, reg r292:V, reg r293:V, reg p39:p(V +), reg w_r10:*, reg w_r11:V, reg c237:L, reg w_r13:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg i15:*, reg i16:V, reg __9:cls, reg r295:V, reg p40:p(V +), reg horiz15:*, reg horiz16:V, reg p41:p(V +), reg angle3:*, reg angle4:V, reg p42:p(V +), reg density5:*, reg density6:V, reg p43:p(V +), reg col7:*, reg col8:V, reg p44:p(V +), reg border3:*, reg border4:V, reg p45:p(V +), reg r302:V, reg axisnames3:*, reg axisnames4:V, reg c238:L, reg c240:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r303:V, reg c243:L, reg r304:V, reg names_arg3:*, reg names_arg4:V, reg c244:V, reg r305:V, reg c245:L, reg c246:V, reg c248:L, reg sym53:cls, reg base53:cls, reg guard53:L, reg r306:V, reg r307:V, reg names_arg5:*, reg names_arg6:V, reg length5:cls, reg r308:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r311:V, reg r312:V, reg r313:V, reg w_m6:*, reg w_m7:V, reg length6:cls, reg r314:V, reg r315:V, reg c249:L, reg sym55:cls, reg base55:cls, reg guard55:L, reg r316:V, reg r317:V, reg names_arg7:*, reg names_arg8:V, reg length7:cls, reg r318:V, reg NC8:*, reg NC9:V, reg r319:V, reg c250:L, reg colMeans:cls, reg w_m8:*, reg w_m9:V, reg p46:p(V +), reg r321:V, reg r322:V, reg stop5:cls, reg r323:V, reg r324:V, reg w_m10:*, reg w_m11:V, reg axis:cls, reg horiz17:*, reg horiz18:V, reg c251:L, reg p47:p(V +), reg at_l:*, reg at_l1:V, reg p48:p(V +), reg names_arg9:*, reg names_arg10:V, reg p49:p(V +), reg axis_lty1:*, reg axis_lty2:V, reg p50:p(V +), reg cex_names1:*, reg cex_names2:V, reg p51:p(V +), reg ddd2:dots?, reg r330:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r332:V, reg r333:V, reg legend_text5:*, reg legend_text6:V, reg c252:V, reg r334:V, reg c253:L, reg sym57:cls, reg base57:cls, reg guard57:L, reg r335:V, reg r336:V, reg col9:*, reg col10:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r337:V, reg r338:V, reg legend_text7:*, reg legend_text8:V, reg length8:cls, reg r339:V, reg rep_len3:cls, reg r340:V, reg horiz19:*, reg horiz20:V, reg beside11:*, reg beside12:V, reg r341:V, reg c254:L, reg c255:V, reg horiz21:*, reg horiz22:V, reg r342:V, reg beside13:*, reg beside14:V, reg r343:V, reg r344:V, reg c257:L, reg c258:V, reg c260:L, reg rev:cls, reg legend_text9:*, reg legend_text10:V, reg p52:p(V +), reg r346:V, reg rev1:cls, reg legend_col:*, reg legend_col1:V, reg p53:p(V +), reg r348:V, reg rev2:cls, reg density7:*, reg density8:V, reg p54:p(V +), reg r350:V, reg rev3:cls, reg angle5:*, reg angle6:V, reg p55:p(V +), reg r352:V, reg par6:cls, reg r354:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r355:V, reg r356:V, reg args_legend1:*, reg args_legend2:V, reg c261:V, reg c262:L, reg legend:cls, reg xy:*, reg xy1:V, reg c263:L, reg xy3:V, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg __10:cls, reg r357:V, reg xinch:cls, reg r358:V, reg r359:V, reg p56:p(V +), reg xy4:*, reg xy5:V, reg c264:L, reg xy7:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg __11:cls, reg r361:V, reg yinch:cls, reg r362:V, reg r363:V, reg p57:p(V +), reg legend_text11:*, reg legend_text12:V, reg p58:p(V +), reg angle7:*, reg angle8:V, reg p59:p(V +), reg density9:*, reg density10:V, reg p60:p(V +), reg legend_col2:*, reg legend_col3:V, reg p61:p(V +), reg r369:V, reg r370:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r371:V, reg r372:V, reg xy8:*, reg xy9:V, reg c265:L, reg xy11:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg __12:cls, reg r373:V, reg xinch1:cls, reg r374:V, reg r375:V, reg xy12:*, reg xy13:V, reg c266:L, reg xy15:V, reg dr26:V, reg dc13:L, reg dx36:V, reg dx37:V, reg __13:cls, reg r376:V, reg yinch1:cls, reg r377:V, reg r378:V, reg legend_text13:*, reg legend_text14:V, reg angle9:*, reg angle10:V, reg density11:*, reg density12:V, reg legend_col4:*, reg legend_col5:V, reg list:cls, reg r379:V, reg args_legend3:*, reg args_legend4:V, reg l1:*, reg c267:L, reg args_legend6:V, reg l3:*, reg dr28:V, reg dc14:L, reg dx38:V, reg dx39:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r380:V, reg args_legend13:V, reg l6:*, reg args_legend14:V, reg r381:V, reg args_legend15:*, reg args_legend16:V, reg names1:cls, reg r382:V, reg ___:cls, reg r383:V, reg do_call:cls, reg args_legend17:*, reg args_legend18:V, reg p62:p(V +), reg r385:V, reg ann1:*, reg ann2:V, reg c268:L, reg title:cls, reg main1:*, reg main2:V, reg p63:p(V +), reg sub1:*, reg sub2:V, reg p64:p(V +), reg xlab1:*, reg xlab2:V, reg p65:p(V +), reg ylab1:*, reg ylab2:V, reg p66:p(V +), reg ddd3:dots?, reg r391:V, reg axes1:*, reg axes2:V, reg c269:L, reg axis1:cls, reg horiz23:*, reg horiz24:V, reg c270:L, reg p67:p(V +), reg cex_axis1:*, reg cex_axis2:V, reg p68:p(V +), reg ddd4:dots?, reg r395:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r397:V, reg r398:V, reg w_m12:*, reg w_m13:V, reg invisible:cls, reg r399:V, reg w_m14:*, reg w_m15:V |
    mkenv;
    st height = height;
    width_isMissing = missing.0(width);
    if width_isMissing then L0(1.0) else L0(width);
  L0(width_orDefault):
    st width = width_orDefault;
    space_isMissing = missing.0(space);
    if space_isMissing then L1(NULL) else L1(space);
  L1(space_orDefault):
    st space = space_orDefault;
    names_arg_isMissing = missing.0(names_arg);
    if names_arg_isMissing then L2(NULL) else L2(names_arg);
  L2(names_arg_orDefault):
    st `names.arg` = names_arg_orDefault;
    legend_text_isMissing = missing.0(legend_text);
    if legend_text_isMissing then L3(NULL) else L3(legend_text);
  L3(legend_text_orDefault):
    st `legend.text` = legend_text_orDefault;
    beside_isMissing = missing.0(beside);
    if beside_isMissing then L4(FALSE) else L4(beside);
  L4(beside_orDefault):
    st beside = beside_orDefault;
    horiz_isMissing = missing.0(horiz);
    if horiz_isMissing then L5(FALSE) else L5(horiz);
  L5(horiz_orDefault):
    st horiz = horiz_orDefault;
    density_isMissing = missing.0(density);
    if density_isMissing then L6(NULL) else L6(density);
  L6(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L7(45.0) else L7(angle);
  L7(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L8(NULL) else L8(col);
  L8(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L9() else L10(border);
  L9():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("fg");
      return r;
    };
    goto L10(p);
  L10(border_orDefault):
    st border = border_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L11(NULL) else L11(main);
  L11(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L12(NULL) else L12(sub);
  L12(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L13(NULL) else L13(xlab);
  L13(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L14(NULL) else L14(ylab);
  L14(ylab_orDefault):
    st ylab = ylab_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L15(NULL) else L15(xlim);
  L15(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L16(NULL) else L16(ylim);
  L16(ylim_orDefault):
    st ylim = ylim_orDefault;
    xpd_isMissing = missing.0(xpd);
    if xpd_isMissing then L17(TRUE) else L17(xpd);
  L17(xpd_orDefault):
    st xpd = xpd_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L18("") else L18(log);
  L18(log_orDefault):
    st log = log_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L19(TRUE) else L19(axes);
  L19(axes_orDefault):
    st axes = axes_orDefault;
    axisnames_isMissing = missing.0(axisnames);
    if axisnames_isMissing then L20(TRUE) else L20(axisnames);
  L20(axisnames_orDefault):
    st axisnames = axisnames_orDefault;
    cex_axis_isMissing = missing.0(cex_axis);
    if cex_axis_isMissing then L21() else L22(cex_axis);
  L21():
    p1 = prom<V +>{
      par1 = ldf par;
      r2 = dyn par1("cex.axis");
      return r2;
    };
    goto L22(p1);
  L22(cex_axis_orDefault):
    st `cex.axis` = cex_axis_orDefault;
    cex_names_isMissing = missing.0(cex_names);
    if cex_names_isMissing then L23() else L24(cex_names);
  L23():
    p2 = prom<V +>{
      par2 = ldf par;
      r4 = dyn par2("cex.axis");
      return r4;
    };
    goto L24(p2);
  L24(cex_names_orDefault):
    st `cex.names` = cex_names_orDefault;
    inside_isMissing = missing.0(inside);
    if inside_isMissing then L25(TRUE) else L25(inside);
  L25(inside_orDefault):
    st inside = inside_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L26(TRUE) else L26(plot);
  L26(plot_orDefault):
    st plot = plot_orDefault;
    axis_lty_isMissing = missing.0(axis_lty);
    if axis_lty_isMissing then L27(0.0) else L27(axis_lty);
  L27(axis_lty_orDefault):
    st `axis.lty` = axis_lty_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L28(0.0) else L28(offset);
  L28(offset_orDefault):
    st offset = offset_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L29(FALSE) else L29(add);
  L29(add_orDefault):
    st add = add_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L30() else L31(ann);
  L30():
    p3 = prom<V +>{
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      r6 = `!`(add2);
      c = `as.logical`(r6);
      if c then L1() else L0(c);
    L0(c2):
      return c2;
    L1():
      par3 = ldf par;
      r7 = dyn par3("ann");
      c3 = `as.logical`(r7);
      c4 = `&&`(c, c3);
      goto L0(c4);
    };
    goto L31(p3);
  L31(ann_orDefault):
    st ann = ann_orDefault;
    args_legend_isMissing = missing.0(args_legend);
    if args_legend_isMissing then L32(NULL) else L32(args_legend);
  L32(args_legend_orDefault):
    st `args.legend` = args_legend_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L202() else L203();
  L33(r10):
    r12 = `!`(r10);
    c6 = `as.logical`(r12);
    if c6 then L204() else L34();
  L202():
    missing = ldf missing in base;
    r11 = dyn missing(<sym inside>);
    goto L33(r11);
  L203():
    r9 = dyn base(<sym inside>);
    goto L33(r9);
  L34():
    goto L35();
  L35():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L208() else L209();
  L204():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L205() else D0();
  D0():
    deopt 5 [];
  L36(r16):
    c8 = `as.logical`(r16);
    if c8 then L211() else L37();
  L205():
    r13 = dyn _NotYetUsed[, error]("inside", FALSE);
    check L206() else D1();
  L208():
    space1 = ld space;
    check L210() else D2();
  L209():
    r15 = dyn base1(<sym space>);
    goto L36(r15);
  D1():
    deopt 9 [r13];
  D2():
    deopt 13 [space1];
  L37():
    goto L43();
  L43():
    space3 = ld space;
    check L225() else D7();
  L206():
    goto L35();
  L210():
    space2 = force? space1;
    checkMissing(space2);
    c7 = `==`(space2, NULL);
    goto L36(c7);
  L211():
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L212() else L213();
  D7():
    deopt 36 [space3];
  L38(r18):
    c9 = `as.logical`(r18);
    if c9 then L216() else L39(c9);
  L212():
    height1 = ld height;
    check L214() else D3();
  L213():
    r17 = dyn base2(<sym height>);
    goto L38(r17);
  L225():
    space4 = force? space3;
    checkMissing(space4);
    mean = ldf mean;
    check L226() else D8();
  D3():
    deopt 18 [height1];
  D8():
    deopt 38 [space4];
  L39(c11):
    c15 = `as.logical`(c11);
    if c15 then L219() else L40();
  L214():
    height2 = force? height1;
    checkMissing(height2);
    is_matrix = ldf `is.matrix` in base;
    r19 = dyn is_matrix(height2);
    check L215() else D4();
  L216():
    beside1 = ld beside;
    check L217() else D5();
  L226():
    p4 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      return width2;
    };
    r26 = dyn mean(p4);
    check L227() else D9();
  D4():
    deopt 21 [r19];
  D5():
    deopt 22 [c9, beside1];
  D9():
    deopt 40 [space4, r26];
  L40():
    goto L42(0.2);
  L42(r23):
    st space = r23;
    goto L43();
  L215():
    goto L38(r19);
  L217():
    beside2 = force? beside1;
    checkMissing(beside2);
    c12 = `as.logical`(beside2);
    c13 = `&&`(c9, c12);
    goto L39(c13);
  L219():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L220() else L221();
  L227():
    r27 = `*`(space4, r26);
    st space = r27;
    plot1 = ld plot;
    check L228() else D10();
  D10():
    deopt 43 [plot1];
  L41(r21):
    goto L42(r21);
  L220():
    c16 = ldf c in base;
    r22 = dyn c16(0.0, 1.0);
    check L222() else D6();
  L221():
    r20 = dyn base3(0.0, 1.0);
    goto L41(r20);
  L228():
    plot2 = force? plot1;
    checkMissing(plot2);
    c17 = `as.logical`(plot2);
    if c17 then L229() else L44(c17);
  D6():
    deopt 30 [r22];
  L44(c19):
    c23 = `as.logical`(c19);
    if c23 then L232() else L45(c23);
  L222():
    goto L41(r22);
  L229():
    axisnames1 = ld axisnames;
    check L230() else D11();
  D11():
    deopt 45 [c17, axisnames1];
  L45(c25):
    c33 = `as.logical`(c25);
    if c33 then L237() else L47();
  L230():
    axisnames2 = force? axisnames1;
    checkMissing(axisnames2);
    c20 = `as.logical`(axisnames2);
    c21 = `&&`(c17, c20);
    goto L44(c21);
  L232():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L233() else L234();
  L46(c28, r29):
    c30 = `as.logical`(r29);
    c31 = `&&`(c28, c30);
    goto L45(c31);
  L47():
    goto L51();
  L51():
    sym7 = ldf `is.vector`;
    base7 = ldf `is.vector` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L251() else L252();
  L233():
    names_arg1 = ld `names.arg`;
    check L235() else D12();
  L234():
    r28 = dyn base4(<sym names.arg>);
    goto L46(c23, r28);
  L237():
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L238() else L239();
  D12():
    deopt 49 [c23, names_arg1];
  L48(r31):
    c34 = `as.logical`(r31);
    if c34 then L242() else L49();
  L52(r40):
    c35 = `as.logical`(r40);
    if c35 then L53(c35) else L255();
  L235():
    names_arg2 = force? names_arg1;
    checkMissing(names_arg2);
    c29 = `==`(names_arg2, NULL);
    goto L46(c23, c29);
  L238():
    height3 = ld height;
    check L240() else D13();
  L239():
    r30 = dyn base5(<sym height>);
    goto L48(r30);
  L251():
    height9 = ld height;
    check L253() else D19();
  L252():
    r39 = dyn base7(<sym height>);
    goto L52(r39);
  D13():
    deopt 55 [height3];
  D19():
    deopt 74 [height9];
  L49():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L246() else L247();
  L50(r35):
    st `names.arg` = r35;
    goto L51();
  L53(c36):
    st vectorInput = c36;
    vectorInput = ld vectorInput;
    check L270() else D26();
  L240():
    height4 = force? height3;
    checkMissing(height4);
    is_matrix1 = ldf `is.matrix` in base;
    r32 = dyn is_matrix1(height4);
    check L241() else D14();
  L242():
    colnames = ldf colnames;
    check L243() else D15();
  L253():
    height10 = force? height9;
    checkMissing(height10);
    is_vector = ldf `is.vector` in base;
    r41 = dyn is_vector(height10, "any");
    check L254() else D20();
  L255():
    sym8 = ldf `is.array`;
    base8 = ldf `is.array` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L256() else L257();
  D14():
    deopt 58 [r32];
  D15():
    deopt 60 [];
  D20():
    deopt 78 [r41];
  D26():
    deopt 100 [vectorInput];
  L54(c40, r43):
    c41 = `as.logical`(r43);
    if c41 then L260() else L55(c40, c41);
  L241():
    goto L48(r32);
  L243():
    p5 = prom<V +>{
      height5 = ld height;
      height6 = force? height5;
      checkMissing(height6);
      return height6;
    };
    r34 = dyn colnames(p5);
    check L244() else D16();
  L246():
    height7 = ld height;
    check L248() else D17();
  L247():
    r36 = dyn base6(<sym height>);
    goto L50(r36);
  L254():
    goto L52(r41);
  L256():
    height11 = ld height;
    check L258() else D21();
  L257():
    r42 = dyn base8(<sym height>);
    goto L54(c35, r42);
  L270():
    vectorInput1 = force? vectorInput;
    checkMissing(vectorInput1);
    c65 = `as.logical`(vectorInput1);
    if c65 then L271() else L58();
  D16():
    deopt 62 [r34];
  D17():
    deopt 65 [height7];
  D21():
    deopt 81 [c35, height11];
  L55(c44, c45):
    c62 = `as.logical`(c45);
    c63 = `||`(c44, c62);
    goto L53(c63);
  L58():
    sym12 = ldf `is.matrix`;
    base12 = ldf `is.matrix` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L280() else L281();
  L62():
    sym14 = ldf `is.logical`;
    base14 = ldf `is.logical` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L295() else L296();
  L244():
    goto L50(r34);
  L248():
    height8 = force? height7;
    checkMissing(height8);
    names = ldf names in base;
    r37 = dyn names(height8);
    check L249() else D18();
  L258():
    height12 = force? height11;
    checkMissing(height12);
    is_array = ldf `is.array` in base;
    r44 = dyn is_array(height12);
    check L259() else D22();
  L260():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L261() else L262();
  L271():
    cbind = ldf cbind;
    check L272() else D27();
  D18():
    deopt 68 [r37];
  D22():
    deopt 84 [c35, r44];
  D27():
    deopt 103 [];
  L56(c50, c51, r46):
    r51 = `==`(r46, 1.0);
    c58 = `as.logical`(r51);
    c59 = `&&`(c51, c58);
    goto L55(c50, c59);
  L63(r59):
    c68 = `as.logical`(r59);
    if c68 then L284() else L64();
  L68(r70):
    c72 = `as.logical`(r70);
    if c72 then L298() else L69();
  L249():
    goto L50(r37);
  L259():
    goto L54(c35, r44);
  L261():
    sym10 = ldf dim;
    base10 = ldf dim in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L263() else L264();
  L262():
    r45 = dyn base9(<lang dim(height)>);
    goto L56(c40, c41, r45);
  L272():
    p6 = prom<V +>{
      height15 = ld height;
      height16 = force? height15;
      checkMissing(height16);
      return height16;
    };
    r53 = dyn cbind(p6);
    check L273() else D28();
  L280():
    height17 = ld height;
    check L282() else D30();
  L281():
    r58 = dyn base12(<sym height>);
    goto L63(r58);
  L295():
    legend_text1 = ld `legend.text`;
    check L297() else D37();
  L296():
    r69 = dyn base14(<sym legend.text>);
    goto L68(r69);
  D28():
    deopt 105 [r53];
  D30():
    deopt 121 [height17];
  D37():
    deopt 141 [legend_text1];
  L57(c56, c57, r48):
    length = ldf length in base;
    r50 = dyn length(r48);
    check L267() else D25();
  L64():
    stop = ldf stop;
    check L293() else D35();
  L69():
    goto L74();
  L74():
    stopifnot = ldf stopifnot;
    check L312() else D44();
  L263():
    height13 = ld height;
    check L265() else D23();
  L264():
    r47 = dyn base10(<sym height>);
    goto L57(c40, c41, r47);
  L273():
    st height = r53;
    st beside = TRUE;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L274() else L275();
  L282():
    height18 = force? height17;
    checkMissing(height18);
    is_matrix2 = ldf `is.matrix` in base;
    r60 = dyn is_matrix2(height18);
    check L283() else D31();
  L284():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L285() else L286();
  L297():
    legend_text2 = force? legend_text1;
    checkMissing(legend_text2);
    c71 = `is.logical`(legend_text2);
    goto L68(c71);
  L298():
    isTRUE = ldf isTRUE;
    check L299() else D38();
  D23():
    deopt 89 [c40, c41, height13];
  D25():
    deopt 94 [c56, c57, r50];
  D31():
    deopt 124 [r60];
  D35():
    deopt 137 [];
  D38():
    deopt 145 [];
  D44():
    deopt 165 [];
  L59(r55):
    c67 = `as.logical`(r55);
    if c67 then L277() else L60();
  L65(r62):
    c70 = `as.logical`(r62);
    if c70 then L288() else L66();
  L265():
    height14 = force? height13;
    checkMissing(height14);
    dim = ldf dim in base;
    r49 = dyn dim(height14);
    check L266() else D24();
  L267():
    goto L56(c56, c57, r50);
  L274():
    col1 = ld col;
    check L276() else D29();
  L275():
    r54 = dyn base11(<sym col>);
    goto L59(r54);
  L283():
    goto L63(r60);
  L285():
    col3 = ld col;
    check L287() else D32();
  L286():
    r61 = dyn base13(<sym col>);
    goto L65(r61);
  L293():
    r68 = dyn stop("'height' must be a vector or a matrix");
    check L294() else D36();
  L299():
    p9 = prom<V +>{
      legend_text3 = ld `legend.text`;
      legend_text4 = force? legend_text3;
      checkMissing(legend_text4);
      return legend_text4;
    };
    r72 = dyn isTRUE(p9);
    check L300() else D39();
  L312():
    p11 = prom<V +>{
      sym16 = ldf `is.character`;
      base16 = ldf `is.character` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      c83 = `is.character`(log2);
      goto L0(c83);
    L2():
      r80 = dyn base16(<sym log>);
      goto L0(r80);
    };
    r83 = dyn stopifnot(p11);
    check L313() else D45();
  D24():
    deopt 92 [c40, c41, r49];
  D29():
    deopt 111 [col1];
  D32():
    deopt 126 [col3];
  D36():
    deopt 139 [r68];
  D39():
    deopt 147 [r72];
  D45():
    deopt 167 [r83];
  L60():
    goto L61(NULL);
  L61(r56):
    goto L62();
  L66():
    goto L67(NULL);
  L67(r67):
    goto L62();
  L266():
    goto L57(c40, c41, r49);
  L276():
    col2 = force? col1;
    checkMissing(col2);
    c66 = `==`(col2, NULL);
    goto L59(c66);
  L277():
    st col = "grey";
    goto L61("grey");
  L287():
    col4 = force? col3;
    checkMissing(col4);
    c69 = `==`(col4, NULL);
    goto L65(c69);
  L288():
    gray_colors = ldf `gray.colors`;
    check L289() else D33();
  L294():
    goto L62();
  L300():
    c73 = `as.logical`(r72);
    if c73 then L301() else L70(c73);
  L313():
    st logy = FALSE;
    st logx = FALSE;
    log3 = ld log;
    check L314() else D46();
  D33():
    deopt 130 [];
  D46():
    deopt 172 [log3];
  L70(c75):
    c82 = `as.logical`(c75);
    if c82 then L307() else L72();
  L289():
    p8 = prom<V +>{
      nrow = ldf nrow;
      p7 = prom<V +>{
        height19 = ld height;
        height20 = force? height19;
        checkMissing(height20);
        return height20;
      };
      r64 = dyn nrow(p7);
      return r64;
    };
    r66 = dyn gray_colors(p8);
    check L290() else D34();
  L301():
    sym15 = ldf `is.matrix`;
    base15 = ldf `is.matrix` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L302() else L303();
  L314():
    log4 = force? log3;
    checkMissing(log4);
    r84 = `!=`(log4, "");
    c84 = `as.logical`(r84);
    if c84 then L315() else L75();
  D34():
    deopt 132 [r66];
  L71(c78, r74):
    c79 = `as.logical`(r74);
    c80 = `&&`(c78, c79);
    goto L70(c80);
  L72():
    goto L73(NULL);
  L73(r78):
    st `legend.text` = r78;
    goto L74();
  L75():
    goto L78();
  L78():
    logx = ld logx;
    check L327() else D53();
  L290():
    st col = r66;
    goto L67(r66);
  L302():
    height21 = ld height;
    check L304() else D40();
  L303():
    r73 = dyn base15(<sym height>);
    goto L71(c73, r73);
  L307():
    rownames = ldf rownames;
    check L308() else D42();
  L315():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L316() else L317();
  D40():
    deopt 150 [c73, height21];
  D42():
    deopt 156 [];
  D53():
    deopt 202 [logx];
  L76(r86):
    r90 = `>`(r86, 0);
    st logx = r90;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L321() else L322();
  L304():
    height22 = force? height21;
    checkMissing(height22);
    is_matrix3 = ldf `is.matrix` in base;
    r75 = dyn is_matrix3(height22);
    check L305() else D41();
  L308():
    p10 = prom<V +>{
      height23 = ld height;
      height24 = force? height23;
      checkMissing(height24);
      return height24;
    };
    r77 = dyn rownames(p10);
    check L309() else D43();
  L316():
    grep = ldf grep;
    check L318() else D47();
  L317():
    r85 = dyn base17(<lang grep("x", log)>);
    goto L76(r85);
  L327():
    logx1 = force? logx;
    checkMissing(logx1);
    c85 = `as.logical`(logx1);
    if c85 then L79(c85) else L328();
  D41():
    deopt 153 [c73, r75];
  D43():
    deopt 158 [r77];
  D47():
    deopt 179 [];
  L77(r92):
    r96 = `>`(r92, 0);
    st logy = r96;
    goto L78();
  L79(c86):
    c91 = `as.logical`(c86);
    if c91 then L331() else L80(c91);
  L305():
    goto L71(c73, r75);
  L309():
    goto L73(r77);
  L318():
    p12 = prom<V +>{
      log5 = ld log;
      log6 = force? log5;
      checkMissing(log6);
      return log6;
    };
    r88 = dyn grep("x", p12);
    check L319() else D48();
  L321():
    grep1 = ldf grep;
    check L323() else D50();
  L322():
    r91 = dyn base18(<lang grep("y", log)>);
    goto L77(r91);
  L328():
    logy = ld logy;
    check L329() else D54();
  D48():
    deopt 182 [r88];
  D50():
    deopt 191 [];
  D54():
    deopt 204 [c85, logy];
  L80(c93):
    c101 = `as.logical`(c93);
    if c101 then L336() else L82();
  L319():
    length1 = ldf length in base;
    r89 = dyn length1(r88);
    check L320() else D49();
  L323():
    p13 = prom<V +>{
      log7 = ld log;
      log8 = force? log7;
      checkMissing(log8);
      return log8;
    };
    r94 = dyn grep1("y", p13);
    check L324() else D51();
  L329():
    logy1 = force? logy;
    checkMissing(logy1);
    c88 = `as.logical`(logy1);
    c89 = `||`(c85, c88);
    goto L79(c89);
  L331():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L332() else L333();
  D49():
    deopt 184 [r89];
  D51():
    deopt 194 [r94];
  L81(c96, r99):
    r100 = `!`(r99);
    c98 = `as.logical`(r100);
    c99 = `&&`(c96, c98);
    goto L80(c99);
  L82():
    goto L83();
  L83():
    nrow1 = ldf nrow;
    check L340() else D58();
  L320():
    goto L76(r89);
  L324():
    length2 = ldf length in base;
    r95 = dyn length2(r94);
    check L325() else D52();
  L332():
    density1 = ld density;
    check L334() else D55();
  L333():
    r98 = dyn base19(<sym density>);
    goto L81(c91, r98);
  L336():
    stop1 = ldf stop;
    check L337() else D56();
  D52():
    deopt 196 [r95];
  D55():
    deopt 208 [c91, density1];
  D56():
    deopt 214 [];
  D58():
    deopt 220 [];
  L325():
    goto L77(r95);
  L334():
    density2 = force? density1;
    checkMissing(density2);
    c97 = `==`(density2, NULL);
    goto L81(c91, c97);
  L337():
    r101 = dyn stop1("Cannot use shading lines in bars when log scale is used");
    check L338() else D57();
  L340():
    p14 = prom<V +>{
      height25 = ld height;
      height26 = force? height25;
      checkMissing(height26);
      return height26;
    };
    r104 = dyn nrow1(p14);
    check L341() else D59();
  D57():
    deopt 216 [r101];
  D59():
    deopt 222 [r104];
  L338():
    goto L83();
  L341():
    st NR = r104;
    ncol = ldf ncol;
    check L342() else D60();
  D60():
    deopt 225 [];
  L342():
    p15 = prom<V +>{
      height27 = ld height;
      height28 = force? height27;
      checkMissing(height28);
      return height28;
    };
    r106 = dyn ncol(p15);
    check L343() else D61();
  D61():
    deopt 227 [r106];
  L343():
    st NC = r106;
    beside3 = ld beside;
    check L344() else D62();
  D62():
    deopt 229 [beside3];
  L344():
    beside4 = force? beside3;
    checkMissing(beside4);
    c102 = `as.logical`(beside4);
    if c102 then L345() else L84();
  L84():
    sym25 = ldf rep_len;
    base25 = ldf rep_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L380() else L381();
  L95():
    sym26 = ldf rep_len;
    base26 = ldf rep_len in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L385() else L386();
  L345():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L346() else L347();
  L85(r108):
    r110 = `==`(r108, 2.0);
    c103 = `as.logical`(r110);
    if c103 then L350() else L86(c103);
  L96(r130):
    st width = r130;
    goto L95();
  L97(r133):
    st offset = r133;
    width9 = ld width;
    check L394() else D84();
  L346():
    space5 = ld space;
    check L348() else D63();
  L347():
    r107 = dyn base20(<sym space>);
    goto L85(r107);
  L380():
    width5 = ld width;
    check L382() else D76();
  L381():
    r129 = dyn base25(<sym width>, <sym NC>);
    goto L96(r129);
  L385():
    as_vector = ldf `as.vector`;
    check L387() else D79();
  L386():
    r132 = dyn base26(<lang as.vector(offset)>, <lang length(width)>);
    goto L97(r132);
  D63():
    deopt 233 [space5];
  D76():
    deopt 285 [width5];
  D79():
    deopt 295 [];
  D84():
    deopt 307 [width9];
  L86(c105):
    c109 = `as.logical`(c105);
    if c109 then L353() else L87();
  L348():
    space6 = force? space5;
    checkMissing(space6);
    length3 = ldf length in base;
    r109 = dyn length3(space6);
    check L349() else D64();
  L350():
    vectorInput2 = ld vectorInput;
    check L351() else D65();
  L382():
    width6 = force? width5;
    checkMissing(width6);
    NC2 = ld NC;
    check L383() else D77();
  L387():
    p16 = prom<V +>{
      offset1 = ld offset;
      offset2 = force? offset1;
      checkMissing(offset2);
      return offset2;
    };
    r135 = dyn as_vector(p16);
    check L388() else D80();
  L394():
    width10 = force? width9;
    checkMissing(width10);
    r140 = `/`(width10, 2.0);
    st delta = r140;
    sym28 = ldf cumsum;
    base28 = ldf cumsum in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L395() else L396();
  D64():
    deopt 236 [r109];
  D65():
    deopt 239 [c103, vectorInput2];
  D77():
    deopt 287 [NC2];
  D80():
    deopt 297 [r135];
  L87():
    goto L93();
  L93():
    sym24 = ldf rep_len;
    base24 = ldf rep_len in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L374() else L375();
  L99(r142):
    st `w.r` = r142;
    w_r = ld `w.r`;
    check L400() else D88();
  L349():
    goto L85(r109);
  L351():
    vectorInput3 = force? vectorInput2;
    checkMissing(vectorInput3);
    r111 = `!`(vectorInput3);
    c106 = `as.logical`(r111);
    c107 = `&&`(c103, c106);
    goto L86(c107);
  L353():
    sym21 = ldf `rep.int`;
    base21 = ldf `rep.int` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L354() else L355();
  L383():
    NC3 = force? NC2;
    checkMissing(NC3);
    rep_len1 = ldf rep_len in base;
    r131 = dyn rep_len1(width6, NC3);
    check L384() else D78();
  L388():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L389() else L390();
  L395():
    space15 = ld space;
    check L397() else D85();
  L396():
    r141 = dyn base28(<lang `+`(space, width)>);
    goto L99(r141);
  D78():
    deopt 290 [r131];
  D85():
    deopt 314 [space15];
  D88():
    deopt 321 [w_r];
  L88(r113):
    st space = r113;
    goto L93();
  L94(r126):
    st width = r126;
    goto L95();
  L98(r137):
    rep_len2 = ldf rep_len in base;
    r139 = dyn rep_len2(r135, r137);
    check L393() else D83();
  L354():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L356() else L357();
  L355():
    r112 = dyn base21(<lang c(`[`(space, 2), rep.int(`[`(space, 1), `-`(NR, 1.0)))>, <sym NC>);
    goto L88(r112);
  L374():
    width3 = ld width;
    check L376() else D73();
  L375():
    r125 = dyn base24(<sym width>, <sym NR>);
    goto L94(r125);
  L384():
    goto L96(r131);
  L389():
    width7 = ld width;
    check L391() else D81();
  L390():
    r136 = dyn base27(<sym width>);
    goto L98(r136);
  L397():
    space16 = force? space15;
    checkMissing(space16);
    width11 = ld width;
    check L398() else D86();
  L400():
    w_r1 = force? w_r;
    checkMissing(w_r1);
    delta = ld delta;
    check L401() else D89();
  D73():
    deopt 276 [width3];
  D81():
    deopt 300 [width7];
  D83():
    deopt 305 [r139];
  D86():
    deopt 315 [space16, width11];
  D89():
    deopt 322 [w_r1, delta];
  L89(r115):
    NC = ld NC;
    check L371() else D71();
  L356():
    space7 = ld space;
    check L358() else D66();
  L357():
    r114 = dyn base22(<lang `[`(space, 2)>, <lang rep.int(`[`(space, 1), `-`(NR, 1.0))>);
    goto L89(r114);
  L376():
    width4 = force? width3;
    checkMissing(width4);
    NR2 = ld NR;
    check L377() else D74();
  L391():
    width8 = force? width7;
    checkMissing(width8);
    length4 = ldf length in base;
    r138 = dyn length4(width8);
    check L392() else D82();
  L393():
    goto L97(r139);
  L398():
    width12 = force? width11;
    checkMissing(width12);
    r143 = `+`(space16, width12);
    cumsum = ldf cumsum in base;
    r144 = dyn cumsum(r143);
    check L399() else D87();
  L401():
    delta1 = force? delta;
    checkMissing(delta1);
    r145 = `-`(w_r1, delta1);
    st `w.m` = r145;
    w_m = ld `w.m`;
    check L402() else D90();
  D66():
    deopt 247 [space7];
  D71():
    deopt 267 [NC];
  D74():
    deopt 278 [NR2];
  D82():
    deopt 303 [r138];
  D87():
    deopt 319 [r144];
  D90():
    deopt 326 [w_m];
  L358():
    space8 = force? space7;
    checkMissing(space8);
    c110 = `is.object`(space8);
    if c110 then L359() else L360(space8);
  L371():
    NC1 = force? NC;
    checkMissing(NC1);
    rep_int1 = ldf `rep.int` in base;
    r123 = dyn rep_int1(r115, NC1);
    check L372() else D72();
  L377():
    NR3 = force? NR2;
    checkMissing(NR3);
    rep_len = ldf rep_len in base;
    r127 = dyn rep_len(width4, NR3);
    check L378() else D75();
  L392():
    goto L98(r138);
  L399():
    goto L99(r144);
  L402():
    w_m1 = force? w_m;
    checkMissing(w_m1);
    delta2 = ld delta;
    check L403() else D91();
  D72():
    deopt 270 [r123];
  D75():
    deopt 281 [r127];
  D91():
    deopt 327 [w_m1, delta2];
  L90(dx1):
    sym23 = ldf `rep.int`;
    base23 = ldf `rep.int` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L362() else L363();
  L359():
    dr = tryDispatchBuiltin.1("[", space8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L361() else L360(dr);
  L360(space10):
    __ = ldf `[` in base;
    r116 = dyn __(space10, 2);
    goto L90(r116);
  L372():
    goto L88(r123);
  L378():
    goto L94(r127);
  L403():
    delta3 = force? delta2;
    checkMissing(delta3);
    r146 = `-`(w_m1, delta3);
    st `w.l` = r146;
    logx2 = ld logx;
    check L404() else D92();
  D92():
    deopt 331 [logx2];
  L91(r118):
    c112 = ldf c in base;
    r122 = dyn c112(dx1, r118);
    check L370() else D70();
  L361():
    dx = getTryDispatchBuiltinValue(dr);
    goto L90(dx);
  L362():
    space11 = ld space;
    check L364() else D67();
  L363():
    r117 = dyn base23(<lang `[`(space, 1)>, <lang `-`(NR, 1.0)>);
    goto L91(r117);
  L404():
    logx3 = force? logx2;
    checkMissing(logx3);
    c113 = `as.logical`(logx3);
    if c113 then L405() else L100(c113);
  D67():
    deopt 254 [space11];
  D70():
    deopt 266 [r122];
  L100(c115):
    c119 = `as.logical`(c115);
    if c119 then L101(c119) else L408();
  L364():
    space12 = force? space11;
    checkMissing(space12);
    c111 = `is.object`(space12);
    if c111 then L365() else L366(space12);
  L370():
    goto L89(r122);
  L405():
    horiz1 = ld horiz;
    check L406() else D93();
  D93():
    deopt 333 [c113, horiz1];
  L92(dx3):
    NR = ld NR;
    check L368() else D68();
  L101(c120):
    st `log.dat` = c120;
    log_dat = ld `log.dat`;
    check L414() else D96();
  L365():
    dr2 = tryDispatchBuiltin.1("[", space12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L367() else L366(dr2);
  L366(space14):
    __1 = ldf `[` in base;
    r119 = dyn __1(space14, 1);
    goto L92(r119);
  L406():
    horiz2 = force? horiz1;
    checkMissing(horiz2);
    c116 = `as.logical`(horiz2);
    c117 = `&&`(c113, c116);
    goto L100(c117);
  L408():
    logy2 = ld logy;
    check L409() else D94();
  D68():
    deopt 259 [NR];
  D94():
    deopt 336 [c119, logy2];
  D96():
    deopt 344 [log_dat];
  L367():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L92(dx2);
  L368():
    NR1 = force? NR;
    checkMissing(NR1);
    r120 = `-`(NR1, 1.0);
    rep_int = ldf `rep.int` in base;
    r121 = dyn rep_int(dx3, r120);
    check L369() else D69();
  L409():
    logy3 = force? logy2;
    checkMissing(logy3);
    c122 = `as.logical`(logy3);
    if c122 then L410() else L102(c119, c122);
  L414():
    log_dat1 = force? log_dat;
    checkMissing(log_dat1);
    c134 = `as.logical`(log_dat1);
    if c134 then L415() else L103();
  D69():
    deopt 264 [r121];
  L102(c125, c126):
    c131 = `as.logical`(c126);
    c132 = `||`(c125, c131);
    goto L101(c132);
  L103():
    st rectbase = 0.0;
    goto L131();
  L131():
    beside5 = ld beside;
    check L492() else D124();
  L369():
    goto L91(r121);
  L410():
    horiz3 = ld horiz;
    check L411() else D95();
  L415():
    sym29 = ldf min;
    base29 = ldf min in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L416() else L417();
  D95():
    deopt 338 [c119, c122, horiz3];
  D124():
    deopt 457 [beside5];
  L104(r149):
    r152 = `<=`(r149, 0.0);
    c135 = `as.logical`(r152);
    if c135 then L421() else L105();
  L411():
    horiz4 = force? horiz3;
    checkMissing(horiz4);
    r147 = `!`(horiz4);
    c127 = `as.logical`(r147);
    c128 = `&&`(c122, c127);
    goto L102(c119, c128);
  L416():
    height29 = ld height;
    check L418() else D97();
  L417():
    r148 = dyn base29[, `na.rm`](<lang `+`(height, offset)>, TRUE);
    goto L104(r148);
  L492():
    beside6 = force? beside5;
    checkMissing(beside6);
    r189 = `!`(beside6);
    c212 = `as.logical`(r189);
    if c212 then L493() else L132();
  D97():
    deopt 348 [height29];
  L105():
    goto L106();
  L106():
    logx4 = ld logx;
    check L425() else D102();
  L132():
    goto L133();
  L133():
    offset5 = ld offset;
    check L497() else D127();
  L418():
    height30 = force? height29;
    checkMissing(height30);
    offset3 = ld offset;
    check L419() else D98();
  L421():
    stop2 = ldf stop;
    check L422() else D100();
  L493():
    rbind = ldf rbind;
    check L494() else D125();
  D98():
    deopt 349 [height30, offset3];
  D100():
    deopt 359 [];
  D102():
    deopt 364 [logx4];
  D125():
    deopt 461 [];
  D127():
    deopt 468 [offset5];
  L419():
    offset4 = force? offset3;
    checkMissing(offset4);
    r150 = `+`(height30, offset4);
    min = ldf min in base;
    r151 = dyn min(r150, TRUE);
    check L420() else D99();
  L422():
    r153 = dyn stop2("log scale error: at least one 'height + offset' value <= 0");
    check L423() else D101();
  L425():
    logx5 = force? logx4;
    checkMissing(logx5);
    c136 = `as.logical`(logx5);
    if c136 then L426() else L107(c136);
  L494():
    p17 = prom<V +>{
      rectbase = ld rectbase;
      rectbase1 = force? rectbase;
      checkMissing(rectbase1);
      return rectbase1;
    };
    p20 = prom<V +>{
      apply = ldf apply;
      p18 = prom<V +>{
        height33 = ld height;
        height34 = force? height33;
        checkMissing(height34);
        return height34;
      };
      p19 = prom<V +>{
        cumsum1 = ld cumsum;
        cumsum2 = force? cumsum1;
        checkMissing(cumsum2);
        return cumsum2;
      };
      r193 = dyn apply(p18, 2, p19);
      return r193;
    };
    r195 = dyn rbind(p17, p20);
    check L495() else D126();
  L497():
    offset6 = force? offset5;
    checkMissing(offset6);
    log_dat2 = ld `log.dat`;
    check L498() else D128();
  D99():
    deopt 355 [r151];
  D101():
    deopt 361 [r153];
  D126():
    deopt 464 [r195];
  D128():
    deopt 469 [offset6, log_dat2];
  L107(c138):
    c146 = `as.logical`(c138);
    if c146 then L431() else L109(c146);
  L420():
    goto L104(r151);
  L423():
    goto L106();
  L426():
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L427() else L428();
  L495():
    st height = r195;
    goto L133();
  L498():
    log_dat3 = force? log_dat2;
    checkMissing(log_dat3);
    c213 = `as.logical`(log_dat3);
    if c213 then L499() else L134();
  L108(c141, r156):
    r157 = `!`(r156);
    c143 = `as.logical`(r157);
    c144 = `&&`(c141, c143);
    goto L107(c144);
  L109(c148):
    c155 = `as.logical`(c148);
    if c155 then L437() else L111();
  L134():
    height37 = ld height;
    check L502() else D130();
  L135(offset9, r198):
    r200 = `+`(offset9, r198);
    st rAdj = r200;
    width13 = ld width;
    check L503() else D131();
  L427():
    xlim1 = ld xlim;
    check L429() else D103();
  L428():
    r155 = dyn base30(<sym xlim>);
    goto L108(c136, r155);
  L431():
    sym31 = ldf min;
    base31 = ldf min in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L432() else L433();
  L499():
    height35 = ld height;
    check L500() else D129();
  D103():
    deopt 367 [c136, xlim1];
  D129():
    deopt 472 [offset6, 0.9, height35];
  D130():
    deopt 476 [offset6, -0.01, height37];
  D131():
    deopt 481 [width13];
  L110(c151, r159):
    r161 = `<=`(r159, 0.0);
    c152 = `as.logical`(r161);
    c153 = `&&`(c151, c152);
    goto L109(c153);
  L111():
    goto L112();
  L112():
    logy4 = ld logy;
    check L441() else D108();
  L429():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c142 = `==`(xlim2, NULL);
    goto L108(c136, c142);
  L432():
    xlim3 = ld xlim;
    check L434() else D104();
  L433():
    r158 = dyn base31(<sym xlim>);
    goto L110(c146, r158);
  L437():
    stop3 = ldf stop;
    check L438() else D106();
  L500():
    height36 = force? height35;
    checkMissing(height36);
    r197 = `*`(0.9, height36);
    goto L135(offset6, r197);
  L502():
    height38 = force? height37;
    checkMissing(height38);
    r199 = `*`(-0.01, height38);
    goto L135(offset6, r199);
  L503():
    width14 = force? width13;
    checkMissing(width14);
    r201 = `/`(width14, 2.0);
    st delta = r201;
    sym37 = ldf cumsum;
    base37 = ldf cumsum in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L504() else L505();
  D104():
    deopt 374 [c146, xlim3];
  D106():
    deopt 382 [];
  D108():
    deopt 387 [logy4];
  L136(r203):
    st `w.r` = r203;
    w_r2 = ld `w.r`;
    check L509() else D135();
  L434():
    xlim4 = force? xlim3;
    checkMissing(xlim4);
    min1 = ldf min in base;
    r160 = dyn min1(xlim4);
    check L435() else D105();
  L438():
    r162 = dyn stop3("log scale error: 'xlim' <= 0");
    check L439() else D107();
  L441():
    logy5 = force? logy4;
    checkMissing(logy5);
    c156 = `as.logical`(logy5);
    if c156 then L442() else L113(c156);
  L504():
    space17 = ld space;
    check L506() else D132();
  L505():
    r202 = dyn base37(<lang `+`(space, width)>);
    goto L136(r202);
  D105():
    deopt 377 [c146, r160];
  D107():
    deopt 384 [r162];
  D132():
    deopt 488 [space17];
  D135():
    deopt 495 [w_r2];
  L113(c158):
    c166 = `as.logical`(c158);
    if c166 then L447() else L115(c166);
  L435():
    goto L110(c146, r160);
  L439():
    goto L112();
  L442():
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L443() else L444();
  L506():
    space18 = force? space17;
    checkMissing(space18);
    width15 = ld width;
    check L507() else D133();
  L509():
    w_r3 = force? w_r2;
    checkMissing(w_r3);
    delta4 = ld delta;
    check L510() else D136();
  D133():
    deopt 489 [space18, width15];
  D136():
    deopt 496 [w_r3, delta4];
  L114(c161, r165):
    r166 = `!`(r165);
    c163 = `as.logical`(r166);
    c164 = `&&`(c161, c163);
    goto L113(c164);
  L115(c168):
    c175 = `as.logical`(c168);
    if c175 then L453() else L117();
  L443():
    ylim1 = ld ylim;
    check L445() else D109();
  L444():
    r164 = dyn base32(<sym ylim>);
    goto L114(c156, r164);
  L447():
    sym33 = ldf min;
    base33 = ldf min in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L448() else L449();
  L507():
    width16 = force? width15;
    checkMissing(width16);
    r204 = `+`(space18, width16);
    cumsum3 = ldf cumsum in base;
    r205 = dyn cumsum3(r204);
    check L508() else D134();
  L510():
    delta5 = force? delta4;
    checkMissing(delta5);
    r206 = `-`(w_r3, delta5);
    st `w.m` = r206;
    w_m2 = ld `w.m`;
    check L511() else D137();
  D109():
    deopt 390 [c156, ylim1];
  D134():
    deopt 493 [r205];
  D137():
    deopt 500 [w_m2];
  L116(c171, r168):
    r170 = `<=`(r168, 0.0);
    c172 = `as.logical`(r170);
    c173 = `&&`(c171, c172);
    goto L115(c173);
  L117():
    goto L118();
  L118():
    logy6 = ld logy;
    check L457() else D114();
  L445():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c162 = `==`(ylim2, NULL);
    goto L114(c156, c162);
  L448():
    ylim3 = ld ylim;
    check L450() else D110();
  L449():
    r167 = dyn base33(<sym ylim>);
    goto L116(c166, r167);
  L453():
    stop4 = ldf stop;
    check L454() else D112();
  L508():
    goto L136(r205);
  L511():
    w_m3 = force? w_m2;
    checkMissing(w_m3);
    delta6 = ld delta;
    check L512() else D138();
  D110():
    deopt 397 [c166, ylim3];
  D112():
    deopt 405 [];
  D114():
    deopt 410 [logy6];
  D138():
    deopt 501 [w_m3, delta6];
  L450():
    ylim4 = force? ylim3;
    checkMissing(ylim4);
    min2 = ldf min in base;
    r169 = dyn min2(ylim4);
    check L451() else D111();
  L454():
    r171 = dyn stop4("log scale error: 'ylim' <= 0");
    check L455() else D113();
  L457():
    logy7 = force? logy6;
    checkMissing(logy7);
    c176 = `as.logical`(logy7);
    if c176 then L458() else L119(c176);
  L512():
    delta7 = force? delta6;
    checkMissing(delta7);
    r207 = `-`(w_m3, delta7);
    st `w.l` = r207;
    horiz9 = ld horiz;
    check L513() else D139();
  D111():
    deopt 400 [c166, r169];
  D113():
    deopt 407 [r171];
  D139():
    deopt 505 [horiz9];
  L119(c178):
    c182 = `as.logical`(c178);
    if c182 then L461() else L120(c182);
  L451():
    goto L116(c166, r169);
  L455():
    goto L118();
  L458():
    horiz5 = ld horiz;
    check L459() else D115();
  L513():
    horiz10 = force? horiz9;
    checkMissing(horiz10);
    c214 = `as.logical`(horiz10);
    if c214 then L514() else L137();
  D115():
    deopt 412 [c176, horiz5];
  L120(c184):
    c192 = `as.logical`(c184);
    if c192 then L466() else L122();
  L137():
    sym44 = ldf `is.null`;
    base44 = ldf `is.null` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L543() else L544();
  L148():
    beside7 = ld beside;
    check L570() else D162();
  L459():
    horiz6 = force? horiz5;
    checkMissing(horiz6);
    r173 = `!`(horiz6);
    c179 = `as.logical`(r173);
    c180 = `&&`(c176, c179);
    goto L119(c180);
  L461():
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L462() else L463();
  L514():
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L515() else L516();
  D162():
    deopt 591 [beside7];
  L121(c187, r175):
    r176 = `!`(r175);
    c189 = `as.logical`(r176);
    c190 = `&&`(c187, c189);
    goto L120(c190);
  L122():
    logx6 = ld logx;
    check L472() else D118();
  L124(dx6):
    st rectbase = dx6;
    goto L131();
  L138(r209):
    c216 = `as.logical`(r209);
    if c216 then L518() else L139();
  L149(r229):
    c221 = `as.logical`(r229);
    if c221 then L546() else L150();
  L462():
    ylim5 = ld ylim;
    check L464() else D116();
  L463():
    r174 = dyn base34(<sym ylim>);
    goto L121(c182, r174);
  L466():
    ylim7 = ld ylim;
    check L467() else D117();
  L515():
    xlim11 = ld xlim;
    check L517() else D140();
  L516():
    r208 = dyn base38(<sym xlim>);
    goto L138(r208);
  L543():
    xlim13 = ld xlim;
    check L545() else D151();
  L544():
    r228 = dyn base44(<sym xlim>);
    goto L149(r228);
  L570():
    beside8 = force? beside7;
    checkMissing(beside8);
    c225 = `as.logical`(beside8);
    if c225 then L571() else L158();
  D116():
    deopt 417 [c182, ylim5];
  D117():
    deopt 422 [ylim7];
  D118():
    deopt 427 [logx6];
  D140():
    deopt 508 [xlim11];
  D151():
    deopt 550 [xlim13];
  L139():
    goto L141();
  L141():
    sym40 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L526() else L527();
  L150():
    goto L154();
  L154():
    sym48 = ldf `is.null`;
    base48 = ldf `is.null` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L559() else L560();
  L158():
    goto L159();
  L159():
    plot3 = ld plot;
    check L575() else D165();
  L464():
    ylim6 = force? ylim5;
    checkMissing(ylim6);
    c188 = `==`(ylim6, NULL);
    goto L121(c182, c188);
  L467():
    ylim8 = force? ylim7;
    checkMissing(ylim8);
    c193 = `is.object`(ylim8);
    if c193 then L468() else L469(ylim8);
  L472():
    logx7 = force? logx6;
    checkMissing(logx7);
    c194 = `as.logical`(logx7);
    if c194 then L473() else L125(c194);
  L517():
    xlim12 = force? xlim11;
    checkMissing(xlim12);
    c215 = `==`(xlim12, NULL);
    goto L138(c215);
  L518():
    sym39 = ldf range;
    base39 = ldf range in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L519() else L520();
  L545():
    xlim14 = force? xlim13;
    checkMissing(xlim14);
    c220 = `==`(xlim14, NULL);
    goto L149(c220);
  L546():
    sym45 = ldf c;
    base45 = ldf c in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L547() else L548();
  L571():
    matrix = ldf matrix;
    check L572() else D163();
  D163():
    deopt 594 [];
  D165():
    deopt 602 [plot3];
  L123(dx5):
    goto L124(dx5);
  L125(c196):
    c200 = `as.logical`(c196);
    if c200 then L476() else L126(c200);
  L140(r211):
    st xlim = r211;
    goto L141();
  L142(r216):
    c218 = `as.logical`(r216);
    if c218 then L529() else L143();
  L151(r231):
    st xlim = r231;
    goto L154();
  L155(r241):
    c224 = `as.logical`(r241);
    if c224 then L562() else L156();
  L468():
    dr4 = tryDispatchBuiltin.1("[", ylim8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L470() else L469(dr4);
  L469(ylim10):
    __2 = ldf `[` in base;
    r177 = dyn __2(ylim10, 1);
    goto L123(r177);
  L473():
    horiz7 = ld horiz;
    check L474() else D119();
  L519():
    rAdj = ld rAdj;
    check L521() else D141();
  L520():
    r210 = dyn base39[, , `na.rm`](<sym rAdj>, <lang `+`(height, offset)>, TRUE);
    goto L140(r210);
  L526():
    ylim11 = ld ylim;
    check L528() else D145();
  L527():
    r215 = dyn base40(<sym ylim>);
    goto L142(r215);
  L547():
    sym46 = ldf min;
    base46 = ldf min in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L549() else L550();
  L548():
    r230 = dyn base45(<lang min(w.l)>, <lang max(w.r)>);
    goto L151(r230);
  L559():
    ylim13 = ld ylim;
    check L561() else D157();
  L560():
    r240 = dyn base48(<sym ylim>);
    goto L155(r240);
  L572():
    p21 = prom<V +>{
      w_m4 = ld `w.m`;
      w_m5 = force? w_m4;
      checkMissing(w_m5);
      return w_m5;
    };
    p22 = prom<V +>{
      NC4 = ld NC;
      NC5 = force? NC4;
      checkMissing(NC5);
      return NC5;
    };
    r248 = dyn matrix[, ncol](p21, p22);
    check L573() else D164();
  L575():
    plot4 = force? plot3;
    checkMissing(plot4);
    c226 = `as.logical`(plot4);
    if c226 then L576() else L160();
  D119():
    deopt 429 [c194, horiz7];
  D141():
    deopt 513 [rAdj];
  D145():
    deopt 527 [ylim11];
  D157():
    deopt 573 [ylim13];
  D164():
    deopt 598 [r248];
  L126(c202):
    c210 = `as.logical`(c202);
    if c210 then L481() else L128();
  L143():
    goto L147(NULL);
  L147(r226):
    goto L148();
  L152(r233):
    sym47 = ldf max;
    base47 = ldf max in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L553() else L554();
  L156():
    goto L148();
  L160():
    w_m14 = ld `w.m`;
    check L718() else D246();
  L470():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L123(dx4);
  L474():
    horiz8 = force? horiz7;
    checkMissing(horiz8);
    c197 = `as.logical`(horiz8);
    c198 = `&&`(c194, c197);
    goto L125(c198);
  L476():
    sym35 = ldf `is.null`;
    base35 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L477() else L478();
  L521():
    rAdj1 = force? rAdj;
    checkMissing(rAdj1);
    height39 = ld height;
    check L522() else D142();
  L528():
    ylim12 = force? ylim11;
    checkMissing(ylim12);
    c217 = `==`(ylim12, NULL);
    goto L142(c217);
  L529():
    sym41 = ldf c;
    base41 = ldf c in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L530() else L531();
  L549():
    w_l2 = ld `w.l`;
    check L551() else D152();
  L550():
    r232 = dyn base46(<sym w.l>);
    goto L152(r232);
  L561():
    ylim14 = force? ylim13;
    checkMissing(ylim14);
    c223 = `==`(ylim14, NULL);
    goto L155(c223);
  L562():
    sym49 = ldf range;
    base49 = ldf range in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L563() else L564();
  L573():
    st `w.m` = r248;
    goto L159();
  L576():
    dev_hold = ldf `dev.hold`;
    check L577() else D166();
  D142():
    deopt 515 [height39];
  D152():
    deopt 557 [w_l2];
  D166():
    deopt 605 [];
  D246():
    deopt 912 [w_m14];
  L127(c205, r179):
    r180 = `!`(r179);
    c207 = `as.logical`(r180);
    c208 = `&&`(c205, c207);
    goto L126(c208);
  L128():
    sym36 = ldf min;
    base36 = ldf min in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L487() else L488();
  L144(r218):
    st ylim = r218;
    goto L147(r218);
  L153(r236):
    c222 = ldf c in base;
    r238 = dyn c222(r233, r236);
    check L557() else D156();
  L157(r243):
    st ylim = r243;
    goto L148();
  L477():
    xlim5 = ld xlim;
    check L479() else D120();
  L478():
    r178 = dyn base35(<sym xlim>);
    goto L127(c200, r178);
  L481():
    xlim7 = ld xlim;
    check L482() else D121();
  L522():
    height40 = force? height39;
    checkMissing(height40);
    offset10 = ld offset;
    check L523() else D143();
  L530():
    sym42 = ldf min;
    base42 = ldf min in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L532() else L533();
  L531():
    r217 = dyn base41(<lang min(w.l)>, <lang max(w.r)>);
    goto L144(r217);
  L551():
    w_l3 = force? w_l2;
    checkMissing(w_l3);
    min5 = ldf min in base;
    r234 = dyn min5(w_l3);
    check L552() else D153();
  L553():
    w_r6 = ld `w.r`;
    check L555() else D154();
  L554():
    r235 = dyn base47(<sym w.r>);
    goto L153(r235);
  L563():
    rAdj2 = ld rAdj;
    check L565() else D158();
  L564():
    r242 = dyn base49[, , `na.rm`](<sym rAdj>, <lang `+`(height, offset)>, TRUE);
    goto L157(r242);
  L577():
    r250 = dyn dev_hold();
    check L578() else D167();
  L718():
    w_m15 = force? w_m14;
    checkMissing(w_m15);
    popenv;
    return w_m15;
  D120():
    deopt 433 [c200, xlim5];
  D121():
    deopt 438 [xlim7];
  D143():
    deopt 516 [height40, offset10];
  D153():
    deopt 560 [r234];
  D154():
    deopt 563 [w_r6];
  D156():
    deopt 568 [r238];
  D158():
    deopt 578 [rAdj2];
  D167():
    deopt 606 [r250];
  L130(r185, r186):
    r188 = `*`(r185, r186);
    goto L124(r188);
  L145(r220):
    sym43 = ldf max;
    base43 = ldf max in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L536() else L537();
  L479():
    xlim6 = force? xlim5;
    checkMissing(xlim6);
    c206 = `==`(xlim6, NULL);
    goto L127(c200, c206);
  L482():
    xlim8 = force? xlim7;
    checkMissing(xlim8);
    c211 = `is.object`(xlim8);
    if c211 then L483() else L484(xlim8);
  L487():
    height31 = ld height;
    check L489() else D122();
  L488():
    r184 = dyn base36[, `na.rm`](<sym height>, TRUE);
    goto L130(0.9, r184);
  L523():
    offset11 = force? offset10;
    checkMissing(offset11);
    r212 = `+`(height40, offset11);
    range = ldf range in base;
    r213 = dyn range(rAdj1, r212, TRUE);
    check L524() else D144();
  L532():
    w_l = ld `w.l`;
    check L534() else D146();
  L533():
    r219 = dyn base42(<sym w.l>);
    goto L145(r219);
  L552():
    goto L152(r234);
  L555():
    w_r7 = force? w_r6;
    checkMissing(w_r7);
    max1 = ldf max in base;
    r237 = dyn max1(w_r7);
    check L556() else D155();
  L557():
    goto L151(r238);
  L565():
    rAdj3 = force? rAdj2;
    checkMissing(rAdj3);
    height41 = ld height;
    check L566() else D159();
  L578():
    horiz11 = ld horiz;
    check L579() else D168();
  D122():
    deopt 446 [0.9, height31];
  D144():
    deopt 522 [r213];
  D146():
    deopt 534 [w_l];
  D155():
    deopt 566 [r237];
  D159():
    deopt 580 [height41];
  D168():
    deopt 607 [horiz11];
  L129(dx8):
    goto L124(dx8);
  L146(r223):
    c219 = ldf c in base;
    r225 = dyn c219(r220, r223);
    check L540() else D150();
  L483():
    dr6 = tryDispatchBuiltin.1("[", xlim8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L485() else L484(dr6);
  L484(xlim10):
    __3 = ldf `[` in base;
    r181 = dyn __3(xlim10, 1);
    goto L129(r181);
  L489():
    height32 = force? height31;
    checkMissing(height32);
    min3 = ldf min in base;
    r187 = dyn min3(height32, TRUE);
    check L490() else D123();
  L524():
    goto L140(r213);
  L534():
    w_l1 = force? w_l;
    checkMissing(w_l1);
    min4 = ldf min in base;
    r221 = dyn min4(w_l1);
    check L535() else D147();
  L536():
    w_r4 = ld `w.r`;
    check L538() else D148();
  L537():
    r222 = dyn base43(<sym w.r>);
    goto L146(r222);
  L556():
    goto L153(r237);
  L566():
    height42 = force? height41;
    checkMissing(height42);
    offset12 = ld offset;
    check L567() else D160();
  L579():
    horiz12 = force? horiz11;
    checkMissing(horiz12);
    c227 = `as.logical`(horiz12);
    if c227 then L580() else L161();
  D123():
    deopt 451 [0.9, r187];
  D147():
    deopt 537 [r221];
  D148():
    deopt 540 [w_r4];
  D150():
    deopt 545 [r225];
  D160():
    deopt 581 [height42, offset12];
  L161():
    par5 = ldf par;
    check L584() else D171();
  L162(r253):
    st opar = r253;
    sym50 = ldf `on.exit`;
    base50 = ldf `on.exit` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L586() else L587();
  L485():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L129(dx7);
  L490():
    goto L130(0.9, r187);
  L535():
    goto L145(r221);
  L538():
    w_r5 = force? w_r4;
    checkMissing(w_r5);
    max = ldf max in base;
    r224 = dyn max(w_r5);
    check L539() else D149();
  L540():
    goto L144(r225);
  L567():
    offset13 = force? offset12;
    checkMissing(offset13);
    r244 = `+`(height42, offset13);
    range1 = ldf range in base;
    r245 = dyn range1(rAdj3, r244, TRUE);
    check L568() else D161();
  L580():
    par4 = ldf par;
    check L581() else D169();
  D149():
    deopt 543 [r224];
  D161():
    deopt 587 [r245];
  D169():
    deopt 610 [];
  D171():
    deopt 617 [];
  L163():
    add3 = ld add;
    check L588() else D173();
  L539():
    goto L146(r224);
  L568():
    goto L157(r245);
  L581():
    p23 = prom<V +>{
      xpd1 = ld xpd;
      xpd2 = force? xpd1;
      checkMissing(xpd2);
      return xpd2;
    };
    r252 = dyn par4[xaxs, xpd]("i", p23);
    check L582() else D170();
  L584():
    p24 = prom<V +>{
      xpd3 = ld xpd;
      xpd4 = force? xpd3;
      checkMissing(xpd4);
      return xpd4;
    };
    r255 = dyn par5[yaxs, xpd]("i", p24);
    check L585() else D172();
  L586():
    on_exit = ldf `on.exit` in base;
    r258 = dyn on_exit(<lang {
      dev.flush();
      par(opar)
    }>);
    goto L163();
  L587():
    r256 = dyn base50(<lang {
      dev.flush();
      par(opar)
    }>);
    goto L163();
  D170():
    deopt 615 [r252];
  D172():
    deopt 622 [r255];
  D173():
    deopt 627 [add3];
  L582():
    goto L162(r252);
  L585():
    goto L162(r255);
  L588():
    add4 = force? add3;
    checkMissing(add4);
    r259 = `!`(add4);
    c228 = `as.logical`(r259);
    if c228 then L589() else L164();
  L164():
    goto L165();
  L165():
    r266 = clos inner1114809991;
    st xyrect = r266;
    beside9 = ld beside;
    check L595() else D178();
  L589():
    plot_new = ldf `plot.new`;
    check L590() else D174();
  D174():
    deopt 631 [];
  D178():
    deopt 646 [beside9];
  L590():
    r260 = dyn plot_new();
    check L591() else D175();
  L595():
    beside10 = force? beside9;
    checkMissing(beside10);
    c229 = `as.logical`(beside10);
    if c229 then L596() else L166();
  D175():
    deopt 632 [r260];
  L166():
    NC6 = ld NC;
    check L600() else D181();
  L167():
    axisnames3 = ld axisnames;
    check L604() else D184();
  L591():
    plot_window = ldf `plot.window`;
    check L592() else D176();
  L596():
    xyrect = ldf xyrect;
    check L597() else D179();
  D176():
    deopt 634 [];
  D179():
    deopt 649 [];
  D181():
    deopt 666 [1, NC6];
  D184():
    deopt 689 [axisnames3];
  L592():
    p25 = prom<V +>{
      xlim15 = ld xlim;
      xlim16 = force? xlim15;
      checkMissing(xlim16);
      return xlim16;
    };
    p26 = prom<V +>{
      ylim15 = ld ylim;
      ylim16 = force? ylim15;
      checkMissing(ylim16);
      return ylim16;
    };
    p27 = prom<V +>{
      log9 = ld log;
      log10 = force? log9;
      checkMissing(log10);
      return log10;
    };
    ddd1 = ld `...`;
    r264 = dyn plot_window[, , log, `...`](p25, p26, p27, ddd1);
    check L593() else D177();
  L597():
    p28 = prom<V +>{
      rectbase2 = ld rectbase;
      rectbase3 = force? rectbase2;
      checkMissing(rectbase3);
      offset14 = ld offset;
      offset15 = force? offset14;
      checkMissing(offset15);
      r267 = `+`(rectbase3, offset15);
      return r267;
    };
    p29 = prom<V +>{
      w_l4 = ld `w.l`;
      w_l5 = force? w_l4;
      checkMissing(w_l5);
      return w_l5;
    };
    p30 = prom<V +>{
      sym51 = ldf c;
      base51 = ldf c in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L1() else L2();
    L0(r271):
      offset16 = ld offset;
      offset17 = force? offset16;
      checkMissing(offset17);
      r273 = `+`(r271, offset17);
      return r273;
    L1():
      height43 = ld height;
      height44 = force? height43;
      checkMissing(height44);
      c230 = ldf c in base;
      r272 = dyn c230(height44);
      goto L0(r272);
    L2():
      r270 = dyn base51(<sym height>);
      goto L0(r270);
    };
    p31 = prom<V +>{
      w_r8 = ld `w.r`;
      w_r9 = force? w_r8;
      checkMissing(w_r9);
      return w_r9;
    };
    p32 = prom<V +>{
      horiz13 = ld horiz;
      horiz14 = force? horiz13;
      checkMissing(horiz14);
      return horiz14;
    };
    p33 = prom<V +>{
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      return angle2;
    };
    p34 = prom<V +>{
      density3 = ld density;
      density4 = force? density3;
      checkMissing(density4);
      return density4;
    };
    p35 = prom<V +>{
      col5 = ld col;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    p36 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    r281 = dyn xyrect[, , , , horizontal, angle, density, col, border](p28, p29, p30, p31, p32, p33, p34, p35, p36);
    check L598() else D180();
  L600():
    NC7 = force? NC6;
    checkMissing(NC7);
    r283 = `:`(1, NC7);
    s = toForSeq(r283);
    l = length(s);
    i = 0;
    goto L168(i);
  L604():
    axisnames4 = force? axisnames3;
    checkMissing(axisnames4);
    c238 = `as.logical`(axisnames4);
    if c238 then L605() else L170(c238);
  D177():
    deopt 640 [r264];
  D180():
    deopt 664 [r281];
  L168(i1):
    i2 = `+`.1(i1, 1);
    c231 = `<`.1(l, i2);
    if c231 then L601() else L169();
  L170(c240):
    c248 = `as.logical`(c240);
    if c248 then L610() else L172();
  L593():
    goto L165();
  L598():
    goto L167();
  L605():
    sym52 = ldf `is.null`;
    base52 = ldf `is.null` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L606() else L607();
  L169():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    xyrect1 = ldf xyrect;
    check L602() else D182();
  L171(c243, r304):
    r305 = `!`(r304);
    c245 = `as.logical`(r305);
    c246 = `&&`(c243, c245);
    goto L170(c246);
  L172():
    goto L180();
  L180():
    sym56 = ldf `is.null`;
    base56 = ldf `is.null` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L636() else L637();
  L601():
    goto L167();
  L606():
    names_arg3 = ld `names.arg`;
    check L608() else D185();
  L607():
    r303 = dyn base52(<sym names.arg>);
    goto L171(c238, r303);
  L610():
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L611() else L612();
  D182():
    deopt 670 [i2];
  D185():
    deopt 692 [c238, names_arg3];
  L173(r307):
    sym54 = ldf length;
    base54 = ldf length in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L615() else L616();
  L181(r333):
    r334 = `!`(r333);
    c253 = `as.logical`(r334);
    if c253 then L639() else L182();
  L602():
    p37 = prom<V +>{
      height45 = ld height;
      height46 = force? height45;
      checkMissing(height46);
      c232 = `is.object`(height46);
      if c232 then L2() else L3(height46);
    L0(dx11):
      offset18 = ld offset;
      offset19 = force? offset18;
      checkMissing(offset19);
      c233 = `is.object`(offset19);
      if c233 then L5() else L6(dx11, offset19);
    L2():
      dr8 = tryDispatchBuiltin.1("[", height46);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(height48):
      NR4 = ld NR;
      NR5 = force? NR4;
      checkMissing(NR5);
      r284 = `:`(1, NR5);
      i5 = ld i;
      i6 = force? i5;
      __4 = ldf `[` in base;
      r285 = dyn __4(height48, r284, i6);
      goto L0(r285);
    L1(dx16, dx17):
      r287 = `+`(dx16, dx17);
      return r287;
    L4():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    L5():
      dr10 = tryDispatchBuiltin.1("[", offset19);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(dx11, dr10);
    L6(dx13, offset21):
      i7 = ld i;
      i8 = force? i7;
      __5 = ldf `[` in base;
      r286 = dyn __5(offset21, i8);
      goto L1(dx13, r286);
    L7():
      dx15 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx11, dx15);
    };
    p38 = prom<V +>{
      w_l6 = ld `w.l`;
      w_l7 = force? w_l6;
      checkMissing(w_l7);
      c234 = `is.object`(w_l7);
      if c234 then L1() else L2(w_l7);
    L0(dx19):
      return dx19;
    L1():
      dr12 = tryDispatchBuiltin.1("[", w_l7);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(w_l9):
      i9 = ld i;
      i10 = force? i9;
      __6 = ldf `[` in base;
      r289 = dyn __6(w_l9, i10);
      goto L0(r289);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    };
    p39 = prom<V +>{
      height49 = ld height;
      height50 = force? height49;
      checkMissing(height50);
      c235 = `is.object`(height50);
      if c235 then L2() else L3(height50);
    L0(dx21):
      offset22 = ld offset;
      offset23 = force? offset22;
      checkMissing(offset23);
      c236 = `is.object`(offset23);
      if c236 then L5() else L6(dx21, offset23);
    L2():
      dr14 = tryDispatchBuiltin.1("[", height50);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(height52):
      i11 = ld i;
      i12 = force? i11;
      __7 = ldf `[` in base;
      r291 = dyn __7(height52, -1.0, i12);
      goto L0(r291);
    L1(dx26, dx27):
      r293 = `+`(dx26, dx27);
      return r293;
    L4():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx20);
    L5():
      dr16 = tryDispatchBuiltin.1("[", offset23);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L7() else L6(dx21, dr16);
    L6(dx23, offset25):
      i13 = ld i;
      i14 = force? i13;
      __8 = ldf `[` in base;
      r292 = dyn __8(offset25, i14);
      goto L1(dx23, r292);
    L7():
      dx25 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx21, dx25);
    };
    p40 = prom<V +>{
      w_r10 = ld `w.r`;
      w_r11 = force? w_r10;
      checkMissing(w_r11);
      c237 = `is.object`(w_r11);
      if c237 then L1() else L2(w_r11);
    L0(dx29):
      return dx29;
    L1():
      dr18 = tryDispatchBuiltin.1("[", w_r11);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(w_r13):
      i15 = ld i;
      i16 = force? i15;
      __9 = ldf `[` in base;
      r295 = dyn __9(w_r13, i16);
      goto L0(r295);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx28);
    };
    p41 = prom<V +>{
      horiz15 = ld horiz;
      horiz16 = force? horiz15;
      checkMissing(horiz16);
      return horiz16;
    };
    p42 = prom<V +>{
      angle3 = ld angle;
      angle4 = force? angle3;
      checkMissing(angle4);
      return angle4;
    };
    p43 = prom<V +>{
      density5 = ld density;
      density6 = force? density5;
      checkMissing(density6);
      return density6;
    };
    p44 = prom<V +>{
      col7 = ld col;
      col8 = force? col7;
      checkMissing(col8);
      return col8;
    };
    p45 = prom<V +>{
      border3 = ld border;
      border4 = force? border3;
      checkMissing(border4);
      return border4;
    };
    r302 = dyn xyrect1[, , , , horizontal, angle, density, col, border](p37, p38, p39, p40, p41, p42, p43, p44, p45);
    check L603() else D183();
  L608():
    names_arg4 = force? names_arg3;
    checkMissing(names_arg4);
    c244 = `==`(names_arg4, NULL);
    goto L171(c238, c244);
  L611():
    names_arg5 = ld `names.arg`;
    check L613() else D186();
  L612():
    r306 = dyn base53(<sym names.arg>);
    goto L173(r306);
  L636():
    legend_text5 = ld `legend.text`;
    check L638() else D200();
  L637():
    r332 = dyn base56(<sym legend.text>);
    goto L181(r332);
  D183():
    deopt 685 [i2, r302];
  D186():
    deopt 699 [names_arg5];
  D200():
    deopt 744 [legend_text5];
  L174(r312, r313):
    r315 = `!=`(r312, r313);
    c249 = `as.logical`(r315);
    if c249 then L619() else L175();
  L182():
    goto L196();
  L196():
    ann1 = ld ann;
    check L703() else D238();
  L603():
    goto L168(i2);
  L613():
    names_arg6 = force? names_arg5;
    checkMissing(names_arg6);
    length5 = ldf length in base;
    r308 = dyn length5(names_arg6);
    check L614() else D187();
  L615():
    w_m6 = ld `w.m`;
    check L617() else D188();
  L616():
    r311 = dyn base54(<sym w.m>);
    goto L174(r307, r311);
  L638():
    legend_text6 = force? legend_text5;
    checkMissing(legend_text6);
    c252 = `==`(legend_text6, NULL);
    goto L181(c252);
  L639():
    sym57 = ldf rep_len;
    base57 = ldf rep_len in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L640() else L641();
  D187():
    deopt 702 [r308];
  D188():
    deopt 704 [r307, w_m6];
  D238():
    deopt 879 [ann1];
  L175():
    w_m10 = ld `w.m`;
    check L632() else D197();
  L179(r324):
    st `at.l` = r324;
    axis = ldf axis;
    check L633() else D198();
  L183(r336):
    st `legend.col` = r336;
    horiz19 = ld horiz;
    check L648() else D205();
  L614():
    goto L173(r308);
  L617():
    w_m7 = force? w_m6;
    checkMissing(w_m7);
    length6 = ldf length in base;
    r314 = dyn length6(w_m7);
    check L618() else D189();
  L619():
    sym55 = ldf length;
    base55 = ldf length in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L620() else L621();
  L640():
    col9 = ld col;
    check L642() else D201();
  L641():
    r335 = dyn base57(<sym col>, <lang length(legend.text)>);
    goto L183(r335);
  L703():
    ann2 = force? ann1;
    checkMissing(ann2);
    c268 = `as.logical`(ann2);
    if c268 then L704() else L197();
  D189():
    deopt 707 [r307, r314];
  D197():
    deopt 725 [w_m10];
  D198():
    deopt 729 [];
  D201():
    deopt 750 [col9];
  D205():
    deopt 761 [horiz19];
  L176(r317):
    NC8 = ld NC;
    check L624() else D192();
  L197():
    goto L198();
  L198():
    axes1 = ld axes;
    check L708() else D241();
  L618():
    goto L174(r307, r314);
  L620():
    names_arg7 = ld `names.arg`;
    check L622() else D190();
  L621():
    r316 = dyn base55(<sym names.arg>);
    goto L176(r316);
  L632():
    w_m11 = force? w_m10;
    checkMissing(w_m11);
    goto L179(w_m11);
  L633():
    p47 = prom<V +>{
      horiz17 = ld horiz;
      horiz18 = force? horiz17;
      checkMissing(horiz18);
      c251 = `as.logical`(horiz18);
      if c251 then L1() else L0();
    L0():
      return 1.0;
    L1():
      return 2.0;
    };
    p48 = prom<V +>{
      at_l = ld `at.l`;
      at_l1 = force? at_l;
      checkMissing(at_l1);
      return at_l1;
    };
    p49 = prom<V +>{
      names_arg9 = ld `names.arg`;
      names_arg10 = force? names_arg9;
      checkMissing(names_arg10);
      return names_arg10;
    };
    p50 = prom<V +>{
      axis_lty1 = ld `axis.lty`;
      axis_lty2 = force? axis_lty1;
      checkMissing(axis_lty2);
      return axis_lty2;
    };
    p51 = prom<V +>{
      cex_names1 = ld `cex.names`;
      cex_names2 = force? cex_names1;
      checkMissing(cex_names2);
      return cex_names2;
    };
    ddd2 = ld `...`;
    r330 = dyn axis[, at, labels, lty, `cex.axis`, `...`](p47, p48, p49, p50, p51, ddd2);
    check L634() else D199();
  L642():
    col10 = force? col9;
    checkMissing(col10);
    sym58 = ldf length;
    base58 = ldf length in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L643() else L644();
  L648():
    horiz20 = force? horiz19;
    checkMissing(horiz20);
    beside11 = ld beside;
    check L649() else D206();
  L704():
    title = ldf title;
    check L705() else D239();
  D190():
    deopt 711 [names_arg7];
  D192():
    deopt 714 [r317, NC8];
  D199():
    deopt 740 [r330];
  D206():
    deopt 762 [horiz20, beside11];
  D239():
    deopt 882 [];
  D241():
    deopt 895 [axes1];
  L184(r338):
    rep_len3 = ldf rep_len in base;
    r340 = dyn rep_len3(col10, r338);
    check L647() else D204();
  L622():
    names_arg8 = force? names_arg7;
    checkMissing(names_arg8);
    length7 = ldf length in base;
    r318 = dyn length7(names_arg8);
    check L623() else D191();
  L624():
    NC9 = force? NC8;
    checkMissing(NC9);
    r319 = `==`(r317, NC9);
    c250 = `as.logical`(r319);
    if c250 then L625() else L177();
  L634():
    goto L180();
  L643():
    legend_text7 = ld `legend.text`;
    check L645() else D202();
  L644():
    r337 = dyn base58(<sym legend.text>);
    goto L184(r337);
  L649():
    beside12 = force? beside11;
    checkMissing(beside12);
    r341 = `&&`(horiz20, beside12);
    c254 = `as.logical`(r341);
    if c254 then L185(c254) else L650();
  L705():
    p63 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p64 = prom<V +>{
      sub1 = ld sub;
      sub2 = force? sub1;
      checkMissing(sub2);
      return sub2;
    };
    p65 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p66 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd3 = ld `...`;
    r391 = dyn title[main, sub, xlab, ylab, `...`](p63, p64, p65, p66, ddd3);
    check L706() else D240();
  L708():
    axes2 = force? axes1;
    checkMissing(axes2);
    c269 = `as.logical`(axes2);
    if c269 then L709() else L199();
  D191():
    deopt 714 [r318];
  D202():
    deopt 754 [legend_text7];
  D204():
    deopt 759 [r340];
  D240():
    deopt 892 [r391];
  L177():
    stop5 = ldf stop;
    check L629() else D195();
  L178(r322):
    goto L179(r322);
  L185(c255):
    c260 = `as.logical`(c255);
    if c260 then L654() else L186();
  L199():
    goto L200();
  L200():
    sym62 = ldf invisible;
    base62 = ldf invisible in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L713() else L714();
  L623():
    goto L176(r318);
  L625():
    colMeans = ldf colMeans;
    check L626() else D193();
  L645():
    legend_text8 = force? legend_text7;
    checkMissing(legend_text8);
    length8 = ldf length in base;
    r339 = dyn length8(legend_text8);
    check L646() else D203();
  L647():
    goto L183(r340);
  L650():
    horiz21 = ld horiz;
    check L651() else D207();
  L706():
    goto L198();
  L709():
    axis1 = ldf axis;
    check L710() else D242();
  D193():
    deopt 718 [];
  D195():
    deopt 722 [];
  D203():
    deopt 757 [r339];
  D207():
    deopt 765 [c254, horiz21];
  D242():
    deopt 898 [];
  L186():
    goto L187();
  L187():
    par6 = ldf par;
    check L664() else D217();
  L201(r398):
    popenv;
    return r398;
  L626():
    p46 = prom<V +>{
      w_m8 = ld `w.m`;
      w_m9 = force? w_m8;
      checkMissing(w_m9);
      return w_m9;
    };
    r321 = dyn colMeans(p46);
    check L627() else D194();
  L629():
    r323 = dyn stop5("incorrect number of names");
    check L630() else D196();
  L646():
    goto L184(r339);
  L651():
    horiz22 = force? horiz21;
    checkMissing(horiz22);
    r342 = `!`(horiz22);
    beside13 = ld beside;
    check L652() else D208();
  L654():
    rev = ldf rev;
    check L655() else D209();
  L710():
    p67 = prom<V +>{
      horiz23 = ld horiz;
      horiz24 = force? horiz23;
      checkMissing(horiz24);
      c270 = `as.logical`(horiz24);
      if c270 then L1() else L0();
    L0():
      return 2.0;
    L1():
      return 1.0;
    };
    p68 = prom<V +>{
      cex_axis1 = ld `cex.axis`;
      cex_axis2 = force? cex_axis1;
      checkMissing(cex_axis2);
      return cex_axis2;
    };
    ddd4 = ld `...`;
    r395 = dyn axis1[, `cex.axis`, `...`](p67, p68, ddd4);
    check L711() else D243();
  L713():
    w_m12 = ld `w.m`;
    check L715() else D244();
  L714():
    r397 = dyn base62(<sym w.m>);
    goto L201(r397);
  D194():
    deopt 720 [r321];
  D196():
    deopt 724 [r323];
  D208():
    deopt 767 [c254, r342, beside13];
  D209():
    deopt 773 [];
  D217():
    deopt 795 [];
  D243():
    deopt 903 [r395];
  D244():
    deopt 908 [w_m12];
  L627():
    goto L178(r321);
  L630():
    goto L178(r323);
  L652():
    beside14 = force? beside13;
    checkMissing(beside14);
    r343 = `!`(beside14);
    r344 = `&&`(r342, r343);
    c257 = `as.logical`(r344);
    c258 = `||`(c254, c257);
    goto L185(c258);
  L655():
    p52 = prom<V +>{
      legend_text9 = ld `legend.text`;
      legend_text10 = force? legend_text9;
      checkMissing(legend_text10);
      return legend_text10;
    };
    r346 = dyn rev(p52);
    check L656() else D210();
  L664():
    r354 = dyn par6("usr");
    check L665() else D218();
  L711():
    goto L200();
  L715():
    w_m13 = force? w_m12;
    checkMissing(w_m13);
    invisible = ldf invisible in base;
    r399 = dyn invisible(w_m13);
    check L716() else D245();
  D210():
    deopt 775 [r346];
  D218():
    deopt 797 [r354];
  D245():
    deopt 911 [r399];
  L656():
    st `legend.text` = r346;
    rev1 = ldf rev;
    check L657() else D211();
  L665():
    st xy = r354;
    sym59 = ldf `is.null`;
    base59 = ldf `is.null` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L666() else L667();
  L716():
    goto L201(r399);
  D211():
    deopt 778 [];
  L188(r356):
    c262 = `as.logical`(r356);
    if c262 then L669() else L189();
  L657():
    p53 = prom<V +>{
      legend_col = ld `legend.col`;
      legend_col1 = force? legend_col;
      checkMissing(legend_col1);
      return legend_col1;
    };
    r348 = dyn rev1(p53);
    check L658() else D212();
  L666():
    args_legend1 = ld `args.legend`;
    check L668() else D219();
  L667():
    r355 = dyn base59(<sym args.legend>);
    goto L188(r355);
  D212():
    deopt 780 [r348];
  D219():
    deopt 800 [args_legend1];
  L189():
    sym60 = ldf list;
    base60 = ldf list in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L673() else L674();
  L190(r370):
    goto L196();
  L658():
    st `legend.col` = r348;
    rev2 = ldf rev;
    check L659() else D213();
  L668():
    args_legend2 = force? args_legend1;
    checkMissing(args_legend2);
    c261 = `==`(args_legend2, NULL);
    goto L188(c261);
  L669():
    legend = ldf legend;
    check L670() else D220();
  D213():
    deopt 783 [];
  D220():
    deopt 804 [];
  L191(r372):
    st `args.legend1` = r372;
    args_legend3 = ld `args.legend`;
    check L692() else D233();
  L659():
    p54 = prom<V +>{
      density7 = ld density;
      density8 = force? density7;
      checkMissing(density8);
      return density8;
    };
    r350 = dyn rev2(p54);
    check L660() else D214();
  L670():
    p56 = prom<V +>{
      xy = ld xy;
      xy1 = force? xy;
      checkMissing(xy1);
      c263 = `is.object`(xy1);
      if c263 then L1() else L2(xy1);
    L0(dx31):
      xinch = ldf xinch;
      r358 = dyn xinch(0.1);
      r359 = `-`(dx31, r358);
      return r359;
    L1():
      dr20 = tryDispatchBuiltin.1("[", xy1);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(xy3):
      __10 = ldf `[` in base;
      r357 = dyn __10(xy3, 2);
      goto L0(r357);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx30);
    };
    p57 = prom<V +>{
      xy4 = ld xy;
      xy5 = force? xy4;
      checkMissing(xy5);
      c264 = `is.object`(xy5);
      if c264 then L1() else L2(xy5);
    L0(dx33):
      yinch = ldf yinch;
      r362 = dyn yinch(0.1);
      r363 = `-`(dx33, r362);
      return r363;
    L1():
      dr22 = tryDispatchBuiltin.1("[", xy5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(xy7):
      __11 = ldf `[` in base;
      r361 = dyn __11(xy7, 4);
      goto L0(r361);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx32);
    };
    p58 = prom<V +>{
      legend_text11 = ld `legend.text`;
      legend_text12 = force? legend_text11;
      checkMissing(legend_text12);
      return legend_text12;
    };
    p59 = prom<V +>{
      angle7 = ld angle;
      angle8 = force? angle7;
      checkMissing(angle8);
      return angle8;
    };
    p60 = prom<V +>{
      density9 = ld density;
      density10 = force? density9;
      checkMissing(density10);
      return density10;
    };
    p61 = prom<V +>{
      legend_col2 = ld `legend.col`;
      legend_col3 = force? legend_col2;
      checkMissing(legend_col3);
      return legend_col3;
    };
    r369 = dyn legend[, , legend, angle, density, fill, xjust, yjust](p56, p57, p58, p59, p60, p61, 1.0, 1.0);
    check L671() else D221();
  L673():
    xy8 = ld xy;
    check L675() else D222();
  L674():
    r371 = dyn base60[x, y, legend, angle, density, fill, xjust, yjust](<lang `-`(`[`(xy, 2), xinch(0.1))>, <lang `-`(`[`(xy, 4), yinch(0.1))>, <sym legend.text>, <sym angle>, <sym density>, <sym legend.col>, 1.0, 1.0);
    goto L191(r371);
  D214():
    deopt 785 [r350];
  D221():
    deopt 819 [r369];
  D222():
    deopt 822 [xy8];
  D233():
    deopt 861 [args_legend3];
  L660():
    st density = r350;
    rev3 = ldf rev;
    check L661() else D215();
  L671():
    goto L190(r369);
  L675():
    xy9 = force? xy8;
    checkMissing(xy9);
    c265 = `is.object`(xy9);
    if c265 then L676() else L677(xy9);
  L692():
    args_legend4 = force? args_legend3;
    checkMissing(args_legend4);
    l1 = ld `args.legend1`;
    c267 = `is.object`(l1);
    if c267 then L693() else L694(args_legend4, l1);
  D215():
    deopt 788 [];
  L192(dx35):
    xinch1 = ldf xinch;
    check L679() else D223();
  L194(dx39):
    st `args.legend1` = dx39;
    do_call = ldf `do.call`;
    check L700() else D236();
  L661():
    p55 = prom<V +>{
      angle5 = ld angle;
      angle6 = force? angle5;
      checkMissing(angle6);
      return angle6;
    };
    r352 = dyn rev3(p55);
    check L662() else D216();
  L676():
    dr24 = tryDispatchBuiltin.1("[", xy9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L678() else L677(dr24);
  L677(xy11):
    __12 = ldf `[` in base;
    r373 = dyn __12(xy11, 2);
    goto L192(r373);
  L693():
    dr28 = tryDispatchBuiltin.0("[<-", l1, args_legend4);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L695() else L694(args_legend4, dr28);
  L694(args_legend6, l3):
    sym61 = ldf names;
    base61 = ldf names in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L696() else L697();
  D216():
    deopt 790 [r352];
  D223():
    deopt 827 [dx35];
  D236():
    deopt 873 [];
  L195(args_legend13, l6, args_legend14, r381):
    ___ = ldf `[<-` in base;
    r383 = dyn ___(l6, args_legend14, r381);
    goto L194(r383);
  L662():
    st angle = r352;
    goto L187();
  L678():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L192(dx34);
  L679():
    r374 = dyn xinch1(0.1);
    check L680() else D224();
  L695():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L194(dx38);
  L696():
    args_legend15 = ld `args.legend`;
    check L698() else D234();
  L697():
    r380 = dyn base61(<sym args.legend>);
    goto L195(args_legend6, l3, args_legend4, r380);
  L700():
    p62 = prom<V +>{
      args_legend17 = ld `args.legend1`;
      args_legend18 = force? args_legend17;
      checkMissing(args_legend18);
      return args_legend18;
    };
    r385 = dyn do_call("legend", p62);
    check L701() else D237();
  D224():
    deopt 829 [dx35, r374];
  D234():
    deopt 866 [args_legend6, l3, args_legend4, args_legend15];
  D237():
    deopt 876 [r385];
  L680():
    r375 = `-`(dx35, r374);
    xy12 = ld xy;
    check L681() else D225();
  L698():
    args_legend16 = force? args_legend15;
    checkMissing(args_legend16);
    names1 = ldf names in base;
    r382 = dyn names1(args_legend16);
    check L699() else D235();
  L701():
    goto L190(r385);
  D225():
    deopt 832 [xy12];
  D235():
    deopt 869 [args_legend6, l3, args_legend4, r382];
  L681():
    xy13 = force? xy12;
    checkMissing(xy13);
    c266 = `is.object`(xy13);
    if c266 then L682() else L683(xy13);
  L699():
    goto L195(args_legend6, l3, args_legend4, r382);
  L193(dx37):
    yinch1 = ldf yinch;
    check L685() else D226();
  L682():
    dr26 = tryDispatchBuiltin.1("[", xy13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L684() else L683(dr26);
  L683(xy15):
    __13 = ldf `[` in base;
    r376 = dyn __13(xy15, 4);
    goto L193(r376);
  D226():
    deopt 837 [dx37];
  L684():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L193(dx36);
  L685():
    r377 = dyn yinch1(0.1);
    check L686() else D227();
  D227():
    deopt 839 [dx37, r377];
  L686():
    r378 = `-`(dx37, r377);
    legend_text13 = ld `legend.text`;
    check L687() else D228();
  D228():
    deopt 842 [legend_text13];
  L687():
    legend_text14 = force? legend_text13;
    checkMissing(legend_text14);
    angle9 = ld angle;
    check L688() else D229();
  D229():
    deopt 845 [angle9];
  L688():
    angle10 = force? angle9;
    checkMissing(angle10);
    density11 = ld density;
    check L689() else D230();
  D230():
    deopt 848 [density11];
  L689():
    density12 = force? density11;
    checkMissing(density12);
    legend_col4 = ld `legend.col`;
    check L690() else D231();
  D231():
    deopt 851 [legend_col4];
  L690():
    legend_col5 = force? legend_col4;
    checkMissing(legend_col5);
    list = ldf list in base;
    r379 = dyn list(r375, r378, legend_text14, angle10, density12, legend_col5, 1.0, 1.0);
    check L691() else D232();
  D232():
    deopt 859 [r379];
  L691():
    goto L191(r379);
  }
}
fun inner1114809991(x1, y1, x2, y2, horizontal, `...`) {
  (reg x1:*, reg y1:*, reg x2:*, reg y2:*, reg horizontal:*, reg ddd:dots) -+> V { var x1:*, var y1:*, var x2:*, var y2:*, var horizontal:*, reg horizontal_isMissing:L, reg horizontal_orDefault:*, var `...`:dots?, reg horizontal1:*, reg horizontal2:V, reg c:L, reg rect:cls, reg x3:*, reg x4:V, reg p:p(V +), reg y3:*, reg y4:V, reg p1:p(V +), reg x5:*, reg x6:V, reg p2:p(V +), reg y5:*, reg y6:V, reg p3:p(V +), reg ddd1:dots?, reg r4:V, reg rect1:cls, reg y7:*, reg y8:V, reg p4:p(V +), reg x7:*, reg x8:V, reg p5:p(V +), reg y9:*, reg y10:V, reg p6:p(V +), reg x9:*, reg x10:V, reg p7:p(V +), reg ddd2:dots?, reg r9:V |
    mkenv;
    st x1 = x1;
    st y1 = y1;
    st x2 = x2;
    st y2 = y2;
    horizontal_isMissing = missing.0(horizontal);
    if horizontal_isMissing then L0(TRUE) else L0(horizontal);
  L0(horizontal_orDefault):
    st horizontal = horizontal_orDefault;
    st `...` = ddd;
    horizontal1 = ld horizontal;
    check L2() else D0();
  D0():
    deopt 0 [horizontal1];
  L2():
    horizontal2 = force? horizontal1;
    checkMissing(horizontal2);
    c = `as.logical`(horizontal2);
    if c then L3() else L1();
  L1():
    rect1 = ldf rect;
    check L7() else D3();
  L3():
    rect = ldf rect;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 11 [];
  L4():
    p = prom<V +>{
      x3 = ld x1;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      y3 = ld y1;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p2 = prom<V +>{
      x5 = ld x2;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p3 = prom<V +>{
      y5 = ld y2;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    ddd1 = ld `...`;
    r4 = dyn rect[, , , , `...`](p, p1, p2, p3, ddd1);
    check L5() else D2();
  L7():
    p4 = prom<V +>{
      y7 = ld y1;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    p5 = prom<V +>{
      x7 = ld x1;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p6 = prom<V +>{
      y9 = ld y2;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    p7 = prom<V +>{
      x9 = ld x2;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    ddd2 = ld `...`;
    r9 = dyn rect1[, , , , `...`](p4, p5, p6, p7, ddd2);
    check L8() else D4();
  D2():
    deopt 9 [r4];
  D4():
    deopt 17 [r9];
  L5():
    popenv;
    return r4;
  L8():
    popenv;
    return r9;
  }
}