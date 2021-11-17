'use strict';

/**
 * Module dependencies.
 */

const express = require('express');
const router = express.Router();

/**
 * GET home page.
 */

router.get('/', function (req, res, next) {

    // render html page.
    res.render('index', {
        title: 'SmartHochschule',
    });
});

module.exports = router;
