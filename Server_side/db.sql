-- phpMyAdmin SQL Dump
-- version 4.2.10
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: 2015 年 11 月 04 日 17:53
-- サーバのバージョン： 5.5.38
-- PHP Version: 5.6.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";

--
-- Database: `nodetest`
--

-- --------------------------------------------------------

--
-- テーブルの構造 `user2`
--

CREATE TABLE `user2` (
`id` int(11) NOT NULL,
  `name` varchar(10) NOT NULL,
  `cookie` varchar(20) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=32 DEFAULT CHARSET=utf8;

--
-- テーブルのデータのダンプ `user2`
--

INSERT INTO `user2` (`id`, `name`, `cookie`) VALUES
(1, '久保勝也', '1444813798'),
(2, '久保勝也', '1444814001'),
(3, '久保勝也', '1444814015'),
(4, '', '1444829061'),
(5, '久保勝也', '1444829141'),
(6, '久保勝也パート2', '1444829181'),
(7, '久保勝也パート2', '1444829221'),
(8, '久保勝也パート2', '1444829224'),
(9, '久保勝也パート2', '1444829247'),
(10, '久保勝也パート2', '1444829249'),
(11, '久保勝也パート2', '1444829770'),
(12, '久保勝也パート3', '1444829786'),
(13, 'くぼちゃん', '1444830828'),
(14, '祐樹', '1444832018'),
(15, '鈴木', '1444833927'),
(16, '砂糖', '1444834229'),
(17, 'テスト投稿', '1444919101'),
(18, 'テスト投稿', '1444919149'),
(19, 'テスト投稿', '1444919162'),
(20, 'ゆうきだよ', '1445311480'),
(21, 'テスト2', '1445312477'),
(22, '藤田バージョン１', '1445312516'),
(23, '藤田バージョン2', '1445312741'),
(24, '藤田バージョン3', '1445312897'),
(25, '藤田バージョン4', '1445312926'),
(26, '藤田バージョン4', '1445348961'),
(27, 'ゆうきテスト1', '1445349833'),
(28, 'ゆうきテスト2', '1445349884'),
(29, '藤田ex', '1445910032'),
(30, 'テストユーザ', '1445910409'),
(31, '戸松のりちゃん', '1446626567');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `user2`
--
ALTER TABLE `user2`
 ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `user2`
--
ALTER TABLE `user2`
MODIFY `id` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=32;